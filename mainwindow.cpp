#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUrl>
#include <QtNetwork/QNetworkRequest>

#include <QtLocation/QGeoCoordinate>

#include <QtCore/QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);
    geoCodingSuccessfull = false;
    startGPS();
    connect(this, SIGNAL(programStarted()),this,SLOT(sendRequest()));
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    connect(ui->btn_go,SIGNAL(clicked()),this, SLOT(sendWeatherRequest()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::programStarted()
{
    emit sendRequest();
}

void MainWindow::sendRequest()
{
    requestWeather = false;
    QString latlng = this->latlng;
    if (!latlng.isNull()) {
        QUrl url("http://maps.google.com/maps/api/geocode/xml");
        url.addQueryItem("latlng", latlng);
        url.addQueryItem("sensor", "false"); // Required by google
        qDebug(url.toString().toAscii());

        manager->get(QNetworkRequest(url));

        ui->
        ui->statusBar->showMessage(QString("Request sended, waiting for response..."));
    } else {
        ui->statusBar->showMessage(QString("Invalid input."));
    }
}

void MainWindow::sendWeatherRequest()
{
    requestWeather = true;
    QString weather = ui->le_pos->text();
    if (!weather.isNull()) {
        QUrl url("http://maps.google.com/ig/api");
        url.addQueryItem("weather", weather);
        url.addQueryItem("hl", "en"); // Required by google
        qDebug(url.toString().toAscii());

        manager->get(QNetworkRequest(url));

        ui->statusBar->showMessage(QString("Request sended, waiting for response..."));
    } else {
        ui->statusBar->showMessage(QString("No GPS-Position found."));
    }
}

void MainWindow::replyFinished(QNetworkReply* response)
{
    if(!requestWeather){

    QXmlStreamReader xml(response);
    if (!xml.hasError()) {
        QString *address;
        while (!xml.atEnd()) {
            xml.readNextStartElement();
                if (xml.name() == "formatted_address") {
                    address = new QString(xml.readElementText());
                    ui->le_pos->setText(&address);
                    ui->lb_main_date->setText(&address);
                }
        }

        ui->statusBar->showMessage(QString("Successfully received XML data."));
    } else {
        ui->statusBar->showMessage(QString("Failed to parse XML data."));
    }

    }else{
        QXmlStreamReader xml(response);
        QXmlStreamAttributes attributes;
        if (!xml.hasError()) {
            QString *weather;
            while (!xml.atEnd()) {
                xml.readNextStartElement();
                    if (xml.name() == "condition") {
                        attributes = xml.attributes();
                        weather = new QString(address.append(attributes.value("data")));
                        ui->lb_main_condition->setText(&weather);

                    }
                    if (xml.name() == "temp_c data") {
                        weather = new QString(xml.readElementText());
                        ui->->setText(address);

                    }
                    if (xml.name() == "condition data") {
                        weather = new QString(xml.readElementText());
                        ui->->setText(address);

                    }
                    if (xml.name() == "condition data") {
                        weather = new QString(xml.readElementText());
                        ui->->setText(address);

                    }
            }
            ui->statusBar->showMessage(QString("Successfully received XML data."));
        } else {
            ui->statusBar->showMessage(QString("Failed to parse XML data."));
        }

    }
}



void MainWindow::positionUpdated(QGeoPositionInfo geoPositionInfo)
{
    if (geoPositionInfo.isValid())
    {
        // Stop regular position updates, because a valid position has been
        // obtained
        locationDataSource->stopUpdates();

        // Get the current location as latitude and longitude
        QGeoCoordinate geoCoordinate = geoPositionInfo.coordinate();
        qreal latitude = geoCoordinate.latitude();
        qreal longitude = geoCoordinate.longitude();

        QString string1;
        string1.setNum(latitude,g,6);
        this->latlng.append(string1);
        string1.setNum(longitude,g,6);
        this->latlng.append(string1);
    }
}



void MainWindow::startGPS()
{
    // Obtain the location data source if it is not obtained already
        if (!locationDataSource)
        {
            locationDataSource =
                    QGeoPositionInfoSource::createDefaultSource(this);
            if (locationDataSource)
            {
                // Whenever the location data source signals that the current
                // position is updated, the positionUpdated function is called.
                QObject::connect(locationDataSource,
                                 SIGNAL(positionUpdated(QGeoPositionInfo)),
                                 this,
                                 SLOT(positionUpdated(QGeoPositionInfo)));
                // Start listening for position updates
                locationDataSource->startUpdates();
            } else {
                // Not able to obtain the location data source
                // TODO: Error handling
            }
        } else {
            // Start listening for position updates
            locationDataSource->startUpdates();
        }

}


void MainWindow::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void MainWindow::showExpanded()
{
#if defined(Q_OS_SYMBIAN) || defined(Q_WS_SIMULATOR)
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QUrl>

#include <QtGui/QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QString>
#include <QtCore/QPointer>
#include <QStringBuilder>
#include <QXmlStreamReader>
#include <QXmlStreamAttributes>
#include <QtNetwork/QNetworkRequest>
#include <QtLocation/QGeoCoordinate>

#include <QtCore/QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    //setup the gui and connect signals to slots
    requestWeather = false;
    ui->setupUi(this);
    manager = new QNetworkAccessManager(this);
    geoCodingSuccessfull = false;
    connect(this, SIGNAL(programStarted()),this,SLOT(sendRequest()));
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    connect(ui->btn_go,SIGNAL(clicked()),this, SLOT(sendWeatherRequest()));

    ui->statusBar->showMessage(QString("Looking for Geolocation.."));
    startGPS();

   }

MainWindow::~MainWindow()
{
    delete ui;
}


//void MainWindow::programStarted1()
//{
//   emit sendRequest();
//}

void MainWindow::sendRequest()
{
    requestWeather = false;
    geoCodingSuccessfull = false;


    QString latlng = this->latlng;
    if (!latlng.isNull()) {
        QUrl url("http://maps.google.com/maps/api/geocode/xml");
        url.addQueryItem("latlng", latlng);
        url.addQueryItem("sensor", "true"); // Required by google
        qDebug(url.toString().toAscii());

        manager->get(QNetworkRequest(url));

        ui->statusBar->showMessage(QString("Location request sended, waiting for response..."));
    } else {
        ui->statusBar->showMessage(QString("No Geolocation found."));
    }
}

QString MainWindow::getPictureString(QString weatherCondition){

    QString pictureString = "";

    if(weatherCondition.compare("Cloudy")==0){
        pictureString = ":/new/prefix1/img/cloudy.png";

    }else if(weatherCondition.compare("Dust")==0){
        pictureString = ":/new/prefix1/img/dust.png";

    }else if(weatherCondition.compare("Chance of Storm")==0){
        pictureString = ":/new/prefix1/img/chance_of_storm.png";

    }else if(weatherCondition.compare("Chance of Tstorm")==0){
        pictureString = ":/new/prefix1/img/chance_of_tstorm.png";

    }else if(weatherCondition.compare("Thunderstorm")==0){
        pictureString = ":/new/prefix1/img/thunderstorm.png";

    }else if(weatherCondition.compare("Chance of Snow")==0){
        pictureString = ":/new/prefix1/img/chance_of_snow.png";

    }else if(weatherCondition.compare("Chance of Rain")==0){
        pictureString = ":/new/prefix1/img/chance_of_rain.png";

    }else if(weatherCondition.compare("Fog")==0){
        pictureString = ":/new/prefix1/img/fog.png";

    }else if(weatherCondition.compare("Flurries")==0){
        pictureString = ":/new/prefix1/img/flurries.png";

    }else if(weatherCondition.compare("Overcast")==0){
        pictureString = ":/new/prefix1/img/cloudy.png";

    }else if(weatherCondition.compare("Clear")==0){
        pictureString = ":/new/prefix1/img/sunny.png";

    }else if(weatherCondition.compare("Haze")==0){
        pictureString = ":/new/prefix1/img/haze.png";

    }else if(weatherCondition.compare("Icy")==0){
        pictureString = ":/new/prefix1/img/icy.png";

    }else if(weatherCondition.compare("Mist")==0){
        pictureString = ":/new/prefix1/img/mist.png";

    }else if(weatherCondition.compare("Mostly Cloudy")==0){
        pictureString = ":/new/prefix1/img/mostly_cloudy.png";

    }else if(weatherCondition.compare("Partly Sunny")==0){
        pictureString = ":/new/prefix1/img/mostly_sunny.png";

    }else if(weatherCondition.compare("Mostly Sunny")==0){
        pictureString = ":/new/prefix1/img/mostly_sunny.png";

    }else if(weatherCondition.compare("Partly Cloudy")==0){
        pictureString = ":/new/prefix1/img/partly_cloudy.png";

    }else if(weatherCondition.compare("Rain")==0){
        pictureString = ":/new/prefix1/img/rain.png";

    }else if(weatherCondition.compare("Light rain")==0){
        pictureString = ":/new/prefix1/img/mist.png";

    }else if(weatherCondition.compare("Sleet")==0){
        pictureString = ":/new/prefix1/img/sleet.png";

    }else if(weatherCondition.compare("Snow")==0){
        pictureString = ":/new/prefix1/img/snow.png";

    }else if(weatherCondition.compare("Smoke")==0){
        pictureString = ":/new/prefix1/img/smoke.png";

    }else if(weatherCondition.compare("Storm")==0){
        pictureString = ":/new/prefix1/img/storm.png";

    }else if(weatherCondition.compare("Sunny")==0){
        pictureString = ":/new/prefix1/img/sunny.png";

    }else if(weatherCondition.compare("Sleet")==0){
        pictureString = ":/new/prefix1/img/sleet.png";
    }
  //  }else{
  //      pictureString = ":/new/prefix1/img/unknown.png";
  //  }

    return pictureString;
}

void MainWindow::sendWeatherRequest()
{
    requestWeather = true;
    QString weather = ui->le_pos->text();
    if (!weather.isNull() && weather.compare("") != 0) {
        QUrl url("http://maps.google.com/ig/api");
        url.addQueryItem("weather", weather);
        url.addQueryItem("hl", "en"); // Required by google
        qDebug(url.toString().toAscii());

        manager->get(QNetworkRequest(url));

        ui->statusBar->showMessage(QString("Weather Request sended, waiting for response..."));
    } else {
        ui->statusBar->showMessage(QString("Failed to send a weather request."));
    }
}

void MainWindow::replyFinished(QNetworkReply* response)
{

    bool locationFound = false;
    //set variable for request-type
    if(!requestWeather){

    QXmlStreamReader xml(response);
    if (!xml.hasError()) {
        QString address = "";
        while (!xml.atEnd() && !locationFound) {
            xml.readNextStartElement();
                if (xml.name() == "formatted_address") {
                    geoCodingSuccessfull = true;
                    address = *(new QString(address.append((xml.readElementText()))));
                    const QString address2 = address;
                    ui->le_pos->setText(address2);
                    locationFound = true;
                 //   ui->lb_main_date->setText(*address);
                }
        }

        ui->statusBar->showMessage(QString("Successfully received XML location data."));

    } else {
        ui->statusBar->showMessage(QString("Failed to parse XML location data."));
    }

    }else{
        QXmlStreamReader xml(response);
        QXmlStreamAttributes attributes;
        if (!xml.hasError()) {

            //initializing variables
            QString date = "";
            QString condition = "";
            QString cond1 = "";
            QString cond2 = "";
            QString cond3 = "";
            QString cond4 = "";
            QString temp = "";
            QString humidity = "";
            QString windCondition = "";
            QString high = "";
            QString low = "";
            QString day = "";

            QString degrees = " °F";

            //already added °F?
            bool added = false;
            bool cityNotFound = false;

            //setting counters to specify how often a variable was called
            //because variabels appear more often in the xml(4 days are displayed)
            // - for all others than condition: take the first, third and fourth day (second is the  same day as first)
            int condCounter = 0;
            int dayCounter = 0;
            int lowCounter = 0;
            int highCounter = 0;


            //parsing the xml
            while (!xml.atEnd()) {
                xml.readNextStartElement();

                if (xml.name() == "problem_cause") {
                    cityNotFound = true;
                }

                //setting date
                    if (xml.name() == "forecast_date") {
                        attributes = xml.attributes();
                        date = *(new QString(date.append(attributes.value("data"))));
                        const QString date2 = date;
                        ui->lb_main_date->setText(date2);

                    }

                    //parsing weather condition data
                    if (xml.name() == "condition") {

                        attributes = xml.attributes();
                        condition = *(new QString(condition.append(attributes.value("data"))));

                        //setting cond variables for the different times condition was found
                        if(condCounter == 0){
                            cond1 = condition;
                            const QString condition2 = condition;
                            ui->lb_main_condition->setText(condition2);
                            ui->img_main->setPixmap(QPixmap(getPictureString(condition)));


                        }else if(condCounter == 4){
                            cond2 = condition;
                          //  qDebug(getPictureString(condition));
                            ui->img_weather_fc_1->setPixmap(QPixmap(getPictureString(condition)));

                        }
                        else if(condCounter == 6){
                            cond3 = condition;
                       //     qDebug(getPictureString(condition));
                            ui->img_weather_fc_2->setPixmap(QPixmap(getPictureString(condition)));

                        }

                        else if(condCounter == 8){
                            cond4 = condition;
                      //      qDebug(getPictureString(condition));
                             ui->img_weather_fc_3->setPixmap(QPixmap(getPictureString(condition)));

                        }
                        condCounter++;
                        condition = "";
                    }

                    //parsing temp of today
                    if (xml.name() == "temp_f") {


                        attributes = xml.attributes();
                        temp = *(new QString(temp.append(attributes.value("data"))));

                        if(!added){
                           temp.append(degrees);
                           added = true;
                        }

                        const QString temp2 = temp;
                        ui->lb_main_temp->setText(temp2);

                    }
                    //parsing humidity data
                    if (xml.name() == "humidity") {
                        attributes = xml.attributes();
                        humidity = *(new QString(humidity.append(attributes.value("data"))));
                        const QString humidity2 = humidity;
                        ui->lb_main_humidity->setText(humidity2);

                    }

                    //parsing wind condition data
                    if (xml.name() == "wind_condition") {
                        attributes = xml.attributes();
                        windCondition = *(new QString(windCondition.append(attributes.value("data"))));
                        const QString wind2 = windCondition;
                        ui->lb_main_wind->setText(wind2);

                    }

                    //parsing high temp data of the xml
                    if (xml.name() == "high") {
                        attributes = xml.attributes();
                        high = *(new QString(high.append(attributes.value("data"))));

                        if(highCounter == 2){
                            const QString high2 = high;
                            ui->lb_temp_high_1->setText(high2);

                        }else if(highCounter == 4){
                            const QString high3 = high;
                            ui->lb_temp_high_2->setText(high3);;

                        }else if(highCounter == 6){
                            const QString high4 = high;
                            ui->lb_temp_high_3->setText(high4);
                        }

                        highCounter++;

                        high = "";

                    }

                    //parsing low temp data of the xml
                    if (xml.name() == "low") {
                        attributes = xml.attributes();
                        low = *(new QString(low.append(attributes.value("data"))));


                        if(lowCounter == 2){
                            const QString low2 = low;
                            ui->lb_temp_low_1->setText(low2);

                        }else if(lowCounter == 4){
                            const QString low3 = low;
                            ui->lb_temp_low_2->setText(low3);

                        }else if(lowCounter == 6){
                            const QString low4 = low;
                            ui->lb_temp_low_3->setText(low4);
                        }
                        low = "";
                        lowCounter++;

                    }


                    //parsing out day of week
                    if (xml.name() == "day_of_week") {
                        attributes = xml.attributes();
                        day = *(new QString(day.append(attributes.value("data"))));


                        if(dayCounter == 2){
                            const QString day2 = day;
                            ui->lb_date_fc_1->setText(day2);

                        }else if(dayCounter == 4){
                            const QString day3 = day;
                            ui->lb_date_fc_2->setText(day3);

                        }else if(dayCounter == 6){
                            const QString day4 = day;
                            ui->lb_date_fc_3->setText(day4);
                        }
                        day = "";
                        dayCounter++;

                     }//end-if

            }//end while


            //update the status bar

            //check if city was found
            if(cityNotFound){
                ui->statusBar->showMessage(QString("Address was not found. Please try again!"));
            }else{
                ui->statusBar->showMessage(QString("Successfully received XML weather data."));
            }

    }else{
         ui->statusBar->showMessage(QString("XML error while parsing."));
         }

    }//end if-request-weather

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
        QString string2;
     //   QChar c = 'g';

        //build the string for latitude-longitude
        string1.setNum(latitude);
        this->latlng.append(string1);
        string2.setNum(longitude);
        this->latlng.append(",");
        this->latlng.append(string2);


        //send the location request
        sendRequest();
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

//handle orientation
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

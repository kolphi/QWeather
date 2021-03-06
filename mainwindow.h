#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QString>
#include <QtCore/QPointer>
#include <QStringBuilder>
#include <QXmlStreamReader>
#include <QXmlStreamAttributes>
#include <QtNetwork/QNetworkRequest>

#include <QtLocation/QGeoPositionInfoSource>
#include <QtLocation/QGeoPositionInfo>
#include <QtLocation/QGeoCoordinate>

#include <qmobilityglobal.h>
#include <qgeopositioninfosource.h>
#include <qnmeapositioninfosource.h>
#include <qgeopositioninfo.h>


QTM_USE_NAMESPACE

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:

    //setting the screen orientation
    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };


    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    // this will only have an effect on Symbian and Fremantle.

    /**
      *Setting the orientation
      */
    void setOrientation(ScreenOrientation orientation);

    /**
      *Show full application
      */
    void showExpanded();

    /**
      *Returns the path to the picture of the specified condition in the ressources file
      *@return QString condition - the path to the resources file
      */
    QString getPictureString(QString weatherCondition);

    //String to save the latitude and longitude values after geolocation
    QString latlng;


    /**
     * Obtains the location data source and starts listening for position
     * changes.
     */
    void startGPS();

signals:
    /**
     * Signal for the start of the program
     */
    void programStarted();

public slots:
    /**
     * Sends a Request for location XML data
     */
    void sendRequest();
    /**
     * Sends a Request for weather XML data
     */
    void sendWeatherRequest();
    void replyFinished(QNetworkReply*);
    /**
        * Called when the current position is updated.
        */
       void positionUpdated(QGeoPositionInfo geoPositionInfo);


private:

    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QPointer<QGeoPositionInfoSource> locationDataSource;

    //checking if geocoding was Successfull, otherwise, no
    bool geoCodingSuccessfull;
    //variable to check if request was for geocoding or for weather
    //false if request was geocode, true if request was weather
    bool requestWeather;
};

#endif // MAINWINDOW_H

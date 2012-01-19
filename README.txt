/img           - contains all the weather images
/moc           - system files (mainwindow)
/obj           - .o data files
/qtc_packaging - packaging information
/Sem           - data for desktop version (not necessary)
/ui			   - the user interface
/deployment.pri- project include file
/main.cp       - executes the mainwindow.cpp
/mainwindow.cpp- contains the application code
/mainwindow.h  - .h file of the mainwindow
/mainwindow.ui - Qt UI file
/QWeatherNew.pro- Qt project file
/res.qrc	   - QRC-Datei (Resources file)
/QWeatherNew64
&&QWeatherNew80- the application picture (png)

The rest are computer genenerated files


/////////////////////////////////
Issues: if the project can't compile because it didn't find weatherpull.o
-> then remove all weatherpull-files from the Makefile
they were included in former versions.

/////////////////////////////////
We've planned to do a german version, but due to the fact that the Google Weather API has no documentation,
i couldn't find out the german values of the conditions. The low and high values of the english version are only in °F.
That is defined by the api.


/////////////////////////////////
First we wanted to  upload it earlier, but all of a sudden, the program didn't work any more yesterday.
I think that it've reached a maximum number of Requests for Google Weather API
By switching to the 3G of t-mobile, it worked.
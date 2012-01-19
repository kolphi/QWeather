/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 18. Jan 23:11:54 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *layout;
    QHBoxLayout *top;
    QLabel *lb_pos;
    QLineEdit *le_pos;
    QPushButton *btn_go;
    QHBoxLayout *main;
    QVBoxLayout *main_data;
    QLabel *lb_main_date;
    QLabel *lb_main_temp;
    QLabel *lb_main_humidity;
    QLabel *lb_main_wind;
    QVBoxLayout *verticalLayout;
    QLabel *img_main;
    QLabel *lb_main_condition;
    QHBoxLayout *bottom;
    QHBoxLayout *fc_1;
    QLabel *lb_date_fc_1;
    QLabel *img_weather_fc_1;
    QVBoxLayout *vl_temp;
    QLabel *lb_temp_high_1;
    QLabel *lb_temp_low_1;
    QHBoxLayout *fc_2;
    QLabel *lb_date_fc_2;
    QLabel *img_weather_fc_2;
    QVBoxLayout *vl_temp_2;
    QLabel *lb_temp_high_2;
    QLabel *lb_temp_low_2;
    QHBoxLayout *fc_3;
    QLabel *lb_date_fc_3;
    QLabel *img_weather_fc_3;
    QVBoxLayout *vl_temp_3;
    QLabel *lb_temp_high_3;
    QLabel *lb_temp_low_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setMinimumSize(QSize(600, 300));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget { background : #404040; color: #ffffff}"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 368));
        layout = new QVBoxLayout(layoutWidget);
        layout->setSpacing(5);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        layout->setContentsMargins(0, 0, 0, 0);
        top = new QHBoxLayout();
        top->setSpacing(10);
        top->setObjectName(QString::fromUtf8("top"));
        top->setSizeConstraint(QLayout::SetDefaultConstraint);
        top->setContentsMargins(-1, 10, -1, 10);
        lb_pos = new QLabel(layoutWidget);
        lb_pos->setObjectName(QString::fromUtf8("lb_pos"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lb_pos->sizePolicy().hasHeightForWidth());
        lb_pos->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(16);
        lb_pos->setFont(font);

        top->addWidget(lb_pos);

        le_pos = new QLineEdit(layoutWidget);
        le_pos->setObjectName(QString::fromUtf8("le_pos"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(le_pos->sizePolicy().hasHeightForWidth());
        le_pos->setSizePolicy(sizePolicy3);
        le_pos->setMinimumSize(QSize(0, 0));
        le_pos->setFont(font);
        le_pos->setStyleSheet(QString::fromUtf8("QLineEdit { background : #ffffff; color: #000000}"));

        top->addWidget(le_pos);

        btn_go = new QPushButton(layoutWidget);
        btn_go->setObjectName(QString::fromUtf8("btn_go"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btn_go->sizePolicy().hasHeightForWidth());
        btn_go->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        btn_go->setFont(font1);
        btn_go->setAutoDefault(false);

        top->addWidget(btn_go);


        layout->addLayout(top);

        main = new QHBoxLayout();
        main->setSpacing(0);
        main->setContentsMargins(0, 0, 0, 0);
        main->setObjectName(QString::fromUtf8("main"));
        main_data = new QVBoxLayout();
        main_data->setSpacing(0);
        main_data->setObjectName(QString::fromUtf8("main_data"));
        main_data->setSizeConstraint(QLayout::SetDefaultConstraint);
        main_data->setContentsMargins(-1, 10, -1, 20);
        lb_main_date = new QLabel(layoutWidget);
        lb_main_date->setObjectName(QString::fromUtf8("lb_main_date"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lb_main_date->sizePolicy().hasHeightForWidth());
        lb_main_date->setSizePolicy(sizePolicy5);
        QFont font2;
        font2.setPointSize(10);
        font2.setItalic(true);
        lb_main_date->setFont(font2);
        lb_main_date->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_date);

        lb_main_temp = new QLabel(layoutWidget);
        lb_main_temp->setObjectName(QString::fromUtf8("lb_main_temp"));
        sizePolicy5.setHeightForWidth(lb_main_temp->sizePolicy().hasHeightForWidth());
        lb_main_temp->setSizePolicy(sizePolicy5);
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        lb_main_temp->setFont(font3);
        lb_main_temp->setStyleSheet(QString::fromUtf8("QLabel { color : #ff3333; }"));
        lb_main_temp->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_temp);

        lb_main_humidity = new QLabel(layoutWidget);
        lb_main_humidity->setObjectName(QString::fromUtf8("lb_main_humidity"));
        sizePolicy5.setHeightForWidth(lb_main_humidity->sizePolicy().hasHeightForWidth());
        lb_main_humidity->setSizePolicy(sizePolicy5);
        lb_main_humidity->setFont(font);
        lb_main_humidity->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_humidity);

        lb_main_wind = new QLabel(layoutWidget);
        lb_main_wind->setObjectName(QString::fromUtf8("lb_main_wind"));
        lb_main_wind->setEnabled(true);
        sizePolicy5.setHeightForWidth(lb_main_wind->sizePolicy().hasHeightForWidth());
        lb_main_wind->setSizePolicy(sizePolicy5);
        lb_main_wind->setFont(font);
        lb_main_wind->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_wind);

        main_data->setStretch(0, 5);
        main_data->setStretch(1, 25);
        main_data->setStretch(2, 5);
        main_data->setStretch(3, 5);

        main->addLayout(main_data);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(100, 20, 100, 20);
        img_main = new QLabel(layoutWidget);
        img_main->setObjectName(QString::fromUtf8("img_main"));
        sizePolicy2.setHeightForWidth(img_main->sizePolicy().hasHeightForWidth());
        img_main->setSizePolicy(sizePolicy2);
        img_main->setMinimumSize(QSize(128, 128));
        img_main->setMaximumSize(QSize(128, 128));
        img_main->setFrameShape(QFrame::NoFrame);
        img_main->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/unknown.png")));
        img_main->setScaledContents(true);
        img_main->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(img_main);

        lb_main_condition = new QLabel(layoutWidget);
        lb_main_condition->setObjectName(QString::fromUtf8("lb_main_condition"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lb_main_condition->sizePolicy().hasHeightForWidth());
        lb_main_condition->setSizePolicy(sizePolicy6);
        lb_main_condition->setFont(font);
        lb_main_condition->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lb_main_condition);


        main->addLayout(verticalLayout);


        layout->addLayout(main);

        bottom = new QHBoxLayout();
        bottom->setSpacing(50);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setSizeConstraint(QLayout::SetDefaultConstraint);
        fc_1 = new QHBoxLayout();
        fc_1->setSpacing(6);
        fc_1->setObjectName(QString::fromUtf8("fc_1"));
        fc_1->setSizeConstraint(QLayout::SetMinimumSize);
        fc_1->setContentsMargins(0, -1, 0, -1);
        lb_date_fc_1 = new QLabel(layoutWidget);
        lb_date_fc_1->setObjectName(QString::fromUtf8("lb_date_fc_1"));
        QFont font4;
        font4.setPointSize(14);
        lb_date_fc_1->setFont(font4);
        lb_date_fc_1->setAlignment(Qt::AlignCenter);

        fc_1->addWidget(lb_date_fc_1);

        img_weather_fc_1 = new QLabel(layoutWidget);
        img_weather_fc_1->setObjectName(QString::fromUtf8("img_weather_fc_1"));
        sizePolicy2.setHeightForWidth(img_weather_fc_1->sizePolicy().hasHeightForWidth());
        img_weather_fc_1->setSizePolicy(sizePolicy2);
        img_weather_fc_1->setMinimumSize(QSize(80, 80));
        img_weather_fc_1->setMaximumSize(QSize(80, 80));
        img_weather_fc_1->setAutoFillBackground(false);
        img_weather_fc_1->setFrameShape(QFrame::NoFrame);
        img_weather_fc_1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/unknown.png")));
        img_weather_fc_1->setScaledContents(true);

        fc_1->addWidget(img_weather_fc_1);

        vl_temp = new QVBoxLayout();
        vl_temp->setSpacing(6);
        vl_temp->setObjectName(QString::fromUtf8("vl_temp"));
        vl_temp->setSizeConstraint(QLayout::SetMinimumSize);
        vl_temp->setContentsMargins(-1, 10, -1, 10);
        lb_temp_high_1 = new QLabel(layoutWidget);
        lb_temp_high_1->setObjectName(QString::fromUtf8("lb_temp_high_1"));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        lb_temp_high_1->setFont(font5);
        lb_temp_high_1->setStyleSheet(QString::fromUtf8("QLabel { color : #ff3333; }"));
        lb_temp_high_1->setAlignment(Qt::AlignCenter);

        vl_temp->addWidget(lb_temp_high_1);

        lb_temp_low_1 = new QLabel(layoutWidget);
        lb_temp_low_1->setObjectName(QString::fromUtf8("lb_temp_low_1"));
        lb_temp_low_1->setFont(font5);
        lb_temp_low_1->setStyleSheet(QString::fromUtf8("QLabel { color : #49caff; }"));
        lb_temp_low_1->setAlignment(Qt::AlignCenter);

        vl_temp->addWidget(lb_temp_low_1);


        fc_1->addLayout(vl_temp);


        bottom->addLayout(fc_1);

        fc_2 = new QHBoxLayout();
        fc_2->setSpacing(6);
        fc_2->setObjectName(QString::fromUtf8("fc_2"));
        fc_2->setSizeConstraint(QLayout::SetMinimumSize);
        fc_2->setContentsMargins(0, -1, 0, -1);
        lb_date_fc_2 = new QLabel(layoutWidget);
        lb_date_fc_2->setObjectName(QString::fromUtf8("lb_date_fc_2"));
        lb_date_fc_2->setFont(font4);
        lb_date_fc_2->setAlignment(Qt::AlignCenter);

        fc_2->addWidget(lb_date_fc_2);

        img_weather_fc_2 = new QLabel(layoutWidget);
        img_weather_fc_2->setObjectName(QString::fromUtf8("img_weather_fc_2"));
        sizePolicy2.setHeightForWidth(img_weather_fc_2->sizePolicy().hasHeightForWidth());
        img_weather_fc_2->setSizePolicy(sizePolicy2);
        img_weather_fc_2->setMinimumSize(QSize(80, 80));
        img_weather_fc_2->setMaximumSize(QSize(80, 80));
        img_weather_fc_2->setAutoFillBackground(false);
        img_weather_fc_2->setFrameShape(QFrame::NoFrame);
        img_weather_fc_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/unknown.png")));
        img_weather_fc_2->setScaledContents(true);

        fc_2->addWidget(img_weather_fc_2);

        vl_temp_2 = new QVBoxLayout();
        vl_temp_2->setSpacing(6);
        vl_temp_2->setObjectName(QString::fromUtf8("vl_temp_2"));
        vl_temp_2->setSizeConstraint(QLayout::SetMinimumSize);
        vl_temp_2->setContentsMargins(-1, 10, -1, 10);
        lb_temp_high_2 = new QLabel(layoutWidget);
        lb_temp_high_2->setObjectName(QString::fromUtf8("lb_temp_high_2"));
        lb_temp_high_2->setFont(font5);
        lb_temp_high_2->setStyleSheet(QString::fromUtf8("QLabel { color : #ff3333; }"));
        lb_temp_high_2->setAlignment(Qt::AlignCenter);

        vl_temp_2->addWidget(lb_temp_high_2);

        lb_temp_low_2 = new QLabel(layoutWidget);
        lb_temp_low_2->setObjectName(QString::fromUtf8("lb_temp_low_2"));
        lb_temp_low_2->setFont(font5);
        lb_temp_low_2->setStyleSheet(QString::fromUtf8("QLabel { color : #49caff; }"));
        lb_temp_low_2->setAlignment(Qt::AlignCenter);

        vl_temp_2->addWidget(lb_temp_low_2);


        fc_2->addLayout(vl_temp_2);


        bottom->addLayout(fc_2);

        fc_3 = new QHBoxLayout();
        fc_3->setSpacing(6);
        fc_3->setObjectName(QString::fromUtf8("fc_3"));
        fc_3->setSizeConstraint(QLayout::SetMaximumSize);
        fc_3->setContentsMargins(0, -1, 0, -1);
        lb_date_fc_3 = new QLabel(layoutWidget);
        lb_date_fc_3->setObjectName(QString::fromUtf8("lb_date_fc_3"));
        lb_date_fc_3->setFont(font4);
        lb_date_fc_3->setAlignment(Qt::AlignCenter);

        fc_3->addWidget(lb_date_fc_3);

        img_weather_fc_3 = new QLabel(layoutWidget);
        img_weather_fc_3->setObjectName(QString::fromUtf8("img_weather_fc_3"));
        sizePolicy2.setHeightForWidth(img_weather_fc_3->sizePolicy().hasHeightForWidth());
        img_weather_fc_3->setSizePolicy(sizePolicy2);
        img_weather_fc_3->setMinimumSize(QSize(80, 80));
        img_weather_fc_3->setMaximumSize(QSize(80, 80));
        img_weather_fc_3->setAutoFillBackground(false);
        img_weather_fc_3->setFrameShape(QFrame::NoFrame);
        img_weather_fc_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/unknown.png")));
        img_weather_fc_3->setScaledContents(true);

        fc_3->addWidget(img_weather_fc_3);

        vl_temp_3 = new QVBoxLayout();
        vl_temp_3->setSpacing(6);
        vl_temp_3->setObjectName(QString::fromUtf8("vl_temp_3"));
        vl_temp_3->setSizeConstraint(QLayout::SetMinimumSize);
        vl_temp_3->setContentsMargins(-1, 10, -1, 10);
        lb_temp_high_3 = new QLabel(layoutWidget);
        lb_temp_high_3->setObjectName(QString::fromUtf8("lb_temp_high_3"));
        lb_temp_high_3->setFont(font5);
        lb_temp_high_3->setStyleSheet(QString::fromUtf8("QLabel { color : #ff3333; }"));
        lb_temp_high_3->setAlignment(Qt::AlignCenter);

        vl_temp_3->addWidget(lb_temp_high_3);

        lb_temp_low_3 = new QLabel(layoutWidget);
        lb_temp_low_3->setObjectName(QString::fromUtf8("lb_temp_low_3"));
        lb_temp_low_3->setFont(font5);
        lb_temp_low_3->setStyleSheet(QString::fromUtf8("QLabel { color : #49caff; }"));
        lb_temp_low_3->setAlignment(Qt::AlignCenter);

        vl_temp_3->addWidget(lb_temp_low_3);


        fc_3->addLayout(vl_temp_3);


        bottom->addLayout(fc_3);


        layout->addLayout(bottom);

        layout->setStretch(0, 5);
        layout->setStretch(1, 30);
        layout->setStretch(2, 10);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QWeather", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        centralWidget->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lb_pos->setText(QApplication::translate("MainWindow", "Your Position:", 0, QApplication::UnicodeUTF8));
        le_pos->setPlaceholderText(QApplication::translate("MainWindow", "Enter Address ...", 0, QApplication::UnicodeUTF8));
        btn_go->setText(QApplication::translate("MainWindow", "GO", 0, QApplication::UnicodeUTF8));
        lb_main_date->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        lb_main_temp->setText(QApplication::translate("MainWindow", "? \302\260F", 0, QApplication::UnicodeUTF8));
        lb_main_humidity->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        lb_main_wind->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        img_main->setText(QString());
        lb_main_condition->setText(QApplication::translate("MainWindow", "----------", 0, QApplication::UnicodeUTF8));
        lb_date_fc_1->setText(QApplication::translate("MainWindow", "Fr", 0, QApplication::UnicodeUTF8));
        img_weather_fc_1->setText(QString());
        lb_temp_high_1->setText(QApplication::translate("MainWindow", "?\302\260", 0, QApplication::UnicodeUTF8));
        lb_temp_low_1->setText(QApplication::translate("MainWindow", "?\302\260", 0, QApplication::UnicodeUTF8));
        lb_date_fc_2->setText(QApplication::translate("MainWindow", "Fr", 0, QApplication::UnicodeUTF8));
        img_weather_fc_2->setText(QString());
        lb_temp_high_2->setText(QApplication::translate("MainWindow", "?\302\260", 0, QApplication::UnicodeUTF8));
        lb_temp_low_2->setText(QApplication::translate("MainWindow", "?\302\260", 0, QApplication::UnicodeUTF8));
        lb_date_fc_3->setText(QApplication::translate("MainWindow", "Fr", 0, QApplication::UnicodeUTF8));
        img_weather_fc_3->setText(QString());
        lb_temp_high_3->setText(QApplication::translate("MainWindow", "?\302\260", 0, QApplication::UnicodeUTF8));
        lb_temp_low_3->setText(QApplication::translate("MainWindow", "?\302\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

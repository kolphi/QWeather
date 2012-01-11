/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 11. Jan 20:49:26 2012
**      by: Qt User Interface Compiler version 4.7.4
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
    QLabel *lb_main_condition;
    QLabel *img_main;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(797, 479);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget { background : white; }"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 771, 431));
        layout = new QVBoxLayout(layoutWidget);
        layout->setSpacing(6);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        layout->setContentsMargins(0, 0, 0, 0);
        top = new QHBoxLayout();
        top->setSpacing(10);
        top->setObjectName(QString::fromUtf8("top"));
        top->setSizeConstraint(QLayout::SetDefaultConstraint);
        lb_pos = new QLabel(layoutWidget);
        lb_pos->setObjectName(QString::fromUtf8("lb_pos"));
        sizePolicy.setHeightForWidth(lb_pos->sizePolicy().hasHeightForWidth());
        lb_pos->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        lb_pos->setFont(font);

        top->addWidget(lb_pos);

        le_pos = new QLineEdit(layoutWidget);
        le_pos->setObjectName(QString::fromUtf8("le_pos"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_pos->sizePolicy().hasHeightForWidth());
        le_pos->setSizePolicy(sizePolicy1);
        le_pos->setMinimumSize(QSize(0, 0));
        le_pos->setFont(font);

        top->addWidget(le_pos);

        btn_go = new QPushButton(layoutWidget);
        btn_go->setObjectName(QString::fromUtf8("btn_go"));
        sizePolicy.setHeightForWidth(btn_go->sizePolicy().hasHeightForWidth());
        btn_go->setSizePolicy(sizePolicy);

        top->addWidget(btn_go);


        layout->addLayout(top);

        main = new QHBoxLayout();
        main->setSpacing(50);
        main->setObjectName(QString::fromUtf8("main"));
        main->setContentsMargins(0, -1, 50, 0);
        main_data = new QVBoxLayout();
        main_data->setSpacing(0);
        main_data->setObjectName(QString::fromUtf8("main_data"));
        main_data->setSizeConstraint(QLayout::SetDefaultConstraint);
        main_data->setContentsMargins(-1, 20, -1, 20);
        lb_main_date = new QLabel(layoutWidget);
        lb_main_date->setObjectName(QString::fromUtf8("lb_main_date"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lb_main_date->sizePolicy().hasHeightForWidth());
        lb_main_date->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(false);
        lb_main_date->setFont(font1);
        lb_main_date->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        main_data->addWidget(lb_main_date);

        lb_main_temp = new QLabel(layoutWidget);
        lb_main_temp->setObjectName(QString::fromUtf8("lb_main_temp"));
        sizePolicy2.setHeightForWidth(lb_main_temp->sizePolicy().hasHeightForWidth());
        lb_main_temp->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        lb_main_temp->setFont(font2);
        lb_main_temp->setStyleSheet(QString::fromUtf8("QLabel { color : red; }"));
        lb_main_temp->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_temp);

        lb_main_humidity = new QLabel(layoutWidget);
        lb_main_humidity->setObjectName(QString::fromUtf8("lb_main_humidity"));
        sizePolicy2.setHeightForWidth(lb_main_humidity->sizePolicy().hasHeightForWidth());
        lb_main_humidity->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(14);
        lb_main_humidity->setFont(font3);
        lb_main_humidity->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_humidity);

        lb_main_wind = new QLabel(layoutWidget);
        lb_main_wind->setObjectName(QString::fromUtf8("lb_main_wind"));
        lb_main_wind->setEnabled(true);
        sizePolicy2.setHeightForWidth(lb_main_wind->sizePolicy().hasHeightForWidth());
        lb_main_wind->setSizePolicy(sizePolicy2);
        lb_main_wind->setFont(font3);
        lb_main_wind->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_wind);

        lb_main_condition = new QLabel(layoutWidget);
        lb_main_condition->setObjectName(QString::fromUtf8("lb_main_condition"));
        sizePolicy2.setHeightForWidth(lb_main_condition->sizePolicy().hasHeightForWidth());
        lb_main_condition->setSizePolicy(sizePolicy2);
        lb_main_condition->setFont(font3);
        lb_main_condition->setAlignment(Qt::AlignCenter);

        main_data->addWidget(lb_main_condition);

        main_data->setStretch(0, 5);
        main_data->setStretch(1, 25);
        main_data->setStretch(2, 10);
        main_data->setStretch(3, 10);
        main_data->setStretch(4, 10);

        main->addLayout(main_data);

        img_main = new QLabel(layoutWidget);
        img_main->setObjectName(QString::fromUtf8("img_main"));
        sizePolicy.setHeightForWidth(img_main->sizePolicy().hasHeightForWidth());
        img_main->setSizePolicy(sizePolicy);
        img_main->setMinimumSize(QSize(200, 200));
        img_main->setFrameShape(QFrame::NoFrame);
        img_main->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/sonne.jpg")));
        img_main->setScaledContents(true);

        main->addWidget(img_main);


        layout->addLayout(main);

        bottom = new QHBoxLayout();
        bottom->setSpacing(10);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        bottom->setSizeConstraint(QLayout::SetDefaultConstraint);
        fc_1 = new QHBoxLayout();
        fc_1->setSpacing(6);
        fc_1->setObjectName(QString::fromUtf8("fc_1"));
        fc_1->setSizeConstraint(QLayout::SetMinimumSize);
        lb_date_fc_1 = new QLabel(layoutWidget);
        lb_date_fc_1->setObjectName(QString::fromUtf8("lb_date_fc_1"));
        QFont font4;
        font4.setPointSize(12);
        lb_date_fc_1->setFont(font4);
        lb_date_fc_1->setAlignment(Qt::AlignCenter);

        fc_1->addWidget(lb_date_fc_1);

        img_weather_fc_1 = new QLabel(layoutWidget);
        img_weather_fc_1->setObjectName(QString::fromUtf8("img_weather_fc_1"));
        sizePolicy.setHeightForWidth(img_weather_fc_1->sizePolicy().hasHeightForWidth());
        img_weather_fc_1->setSizePolicy(sizePolicy);
        img_weather_fc_1->setMinimumSize(QSize(80, 80));
        img_weather_fc_1->setAutoFillBackground(false);
        img_weather_fc_1->setFrameShape(QFrame::NoFrame);
        img_weather_fc_1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/regen.jpg")));

        fc_1->addWidget(img_weather_fc_1);

        vl_temp = new QVBoxLayout();
        vl_temp->setSpacing(6);
        vl_temp->setObjectName(QString::fromUtf8("vl_temp"));
        vl_temp->setSizeConstraint(QLayout::SetMinimumSize);
        vl_temp->setContentsMargins(-1, 10, -1, 10);
        lb_temp_high_1 = new QLabel(layoutWidget);
        lb_temp_high_1->setObjectName(QString::fromUtf8("lb_temp_high_1"));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        lb_temp_high_1->setFont(font5);
        lb_temp_high_1->setStyleSheet(QString::fromUtf8("QLabel { color : red; }"));
        lb_temp_high_1->setAlignment(Qt::AlignCenter);

        vl_temp->addWidget(lb_temp_high_1);

        lb_temp_low_1 = new QLabel(layoutWidget);
        lb_temp_low_1->setObjectName(QString::fromUtf8("lb_temp_low_1"));
        lb_temp_low_1->setFont(font5);
        lb_temp_low_1->setStyleSheet(QString::fromUtf8("QLabel { color : blue; }"));
        lb_temp_low_1->setAlignment(Qt::AlignCenter);

        vl_temp->addWidget(lb_temp_low_1);


        fc_1->addLayout(vl_temp);


        bottom->addLayout(fc_1);

        fc_2 = new QHBoxLayout();
        fc_2->setSpacing(6);
        fc_2->setObjectName(QString::fromUtf8("fc_2"));
        fc_2->setSizeConstraint(QLayout::SetMinimumSize);
        lb_date_fc_2 = new QLabel(layoutWidget);
        lb_date_fc_2->setObjectName(QString::fromUtf8("lb_date_fc_2"));
        lb_date_fc_2->setFont(font4);
        lb_date_fc_2->setAlignment(Qt::AlignCenter);

        fc_2->addWidget(lb_date_fc_2);

        img_weather_fc_2 = new QLabel(layoutWidget);
        img_weather_fc_2->setObjectName(QString::fromUtf8("img_weather_fc_2"));
        sizePolicy.setHeightForWidth(img_weather_fc_2->sizePolicy().hasHeightForWidth());
        img_weather_fc_2->setSizePolicy(sizePolicy);
        img_weather_fc_2->setMinimumSize(QSize(80, 80));
        img_weather_fc_2->setAutoFillBackground(false);
        img_weather_fc_2->setFrameShape(QFrame::NoFrame);
        img_weather_fc_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/regen.jpg")));
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
        lb_temp_high_2->setStyleSheet(QString::fromUtf8("QLabel { color : red; }"));
        lb_temp_high_2->setAlignment(Qt::AlignCenter);

        vl_temp_2->addWidget(lb_temp_high_2);

        lb_temp_low_2 = new QLabel(layoutWidget);
        lb_temp_low_2->setObjectName(QString::fromUtf8("lb_temp_low_2"));
        lb_temp_low_2->setFont(font5);
        lb_temp_low_2->setStyleSheet(QString::fromUtf8("QLabel { color : blue; }"));
        lb_temp_low_2->setAlignment(Qt::AlignCenter);

        vl_temp_2->addWidget(lb_temp_low_2);


        fc_2->addLayout(vl_temp_2);


        bottom->addLayout(fc_2);

        fc_3 = new QHBoxLayout();
        fc_3->setSpacing(6);
        fc_3->setObjectName(QString::fromUtf8("fc_3"));
        fc_3->setSizeConstraint(QLayout::SetMaximumSize);
        lb_date_fc_3 = new QLabel(layoutWidget);
        lb_date_fc_3->setObjectName(QString::fromUtf8("lb_date_fc_3"));
        lb_date_fc_3->setFont(font4);
        lb_date_fc_3->setAlignment(Qt::AlignCenter);

        fc_3->addWidget(lb_date_fc_3);

        img_weather_fc_3 = new QLabel(layoutWidget);
        img_weather_fc_3->setObjectName(QString::fromUtf8("img_weather_fc_3"));
        sizePolicy.setHeightForWidth(img_weather_fc_3->sizePolicy().hasHeightForWidth());
        img_weather_fc_3->setSizePolicy(sizePolicy);
        img_weather_fc_3->setMinimumSize(QSize(80, 80));
        img_weather_fc_3->setAutoFillBackground(false);
        img_weather_fc_3->setFrameShape(QFrame::NoFrame);
        img_weather_fc_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/img/regen.jpg")));
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
        lb_temp_high_3->setStyleSheet(QString::fromUtf8("QLabel { color : red; }"));
        lb_temp_high_3->setAlignment(Qt::AlignCenter);

        vl_temp_3->addWidget(lb_temp_high_3);

        lb_temp_low_3 = new QLabel(layoutWidget);
        lb_temp_low_3->setObjectName(QString::fromUtf8("lb_temp_low_3"));
        lb_temp_low_3->setFont(font5);
        lb_temp_low_3->setStyleSheet(QString::fromUtf8("QLabel { color : blue; }"));
        lb_temp_low_3->setAlignment(Qt::AlignCenter);

        vl_temp_3->addWidget(lb_temp_low_3);


        fc_3->addLayout(vl_temp_3);


        bottom->addLayout(fc_3);


        layout->addLayout(bottom);

        layout->setStretch(0, 5);
        layout->setStretch(1, 30);
        layout->setStretch(2, 10);
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 797, 21));
        MainWindow->setMenuBar(menuBar);

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
        le_pos->setPlaceholderText(QApplication::translate("MainWindow", "Searching...", 0, QApplication::UnicodeUTF8));
        btn_go->setText(QApplication::translate("MainWindow", "GO", 0, QApplication::UnicodeUTF8));
        lb_main_date->setText(QApplication::translate("MainWindow", "06.01.2012 18:35", 0, QApplication::UnicodeUTF8));
        lb_main_temp->setText(QApplication::translate("MainWindow", "9\302\260 C", 0, QApplication::UnicodeUTF8));
        lb_main_humidity->setText(QApplication::translate("MainWindow", "Luftfeuchtigkeit: 49 %", 0, QApplication::UnicodeUTF8));
        lb_main_wind->setText(QApplication::translate("MainWindow", "Wind: SW mit 14 km/h", 0, QApplication::UnicodeUTF8));
        lb_main_condition->setText(QApplication::translate("MainWindow", "Meist sonnig", 0, QApplication::UnicodeUTF8));
        img_main->setText(QString());
        lb_date_fc_1->setText(QApplication::translate("MainWindow", "Fr", 0, QApplication::UnicodeUTF8));
        img_weather_fc_1->setText(QString());
        lb_temp_high_1->setText(QApplication::translate("MainWindow", "11\302\260", 0, QApplication::UnicodeUTF8));
        lb_temp_low_1->setText(QApplication::translate("MainWindow", "8\302\260", 0, QApplication::UnicodeUTF8));
        lb_date_fc_2->setText(QApplication::translate("MainWindow", "Fr", 0, QApplication::UnicodeUTF8));
        img_weather_fc_2->setText(QString());
        lb_temp_high_2->setText(QApplication::translate("MainWindow", "11\302\260", 0, QApplication::UnicodeUTF8));
        lb_temp_low_2->setText(QApplication::translate("MainWindow", "8\302\260", 0, QApplication::UnicodeUTF8));
        lb_date_fc_3->setText(QApplication::translate("MainWindow", "Fr", 0, QApplication::UnicodeUTF8));
        img_weather_fc_3->setText(QString());
        lb_temp_high_3->setText(QApplication::translate("MainWindow", "11\302\260", 0, QApplication::UnicodeUTF8));
        lb_temp_low_3->setText(QApplication::translate("MainWindow", "8\302\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

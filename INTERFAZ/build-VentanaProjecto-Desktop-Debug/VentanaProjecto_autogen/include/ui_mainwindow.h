/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_29;
    QLineEdit *Tprom;
    QLineEdit *Tmin;
    QLineEdit *Tmax;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_33;
    QLineEdit *Hprom;
    QLineEdit *Hmin;
    QLineEdit *Hmax;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_37;
    QLineEdit *Vprom;
    QLineEdit *Vmin;
    QLineEdit *Vmax;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_41;
    QLineEdit *Dprom;
    QLineEdit *Vmin_2;
    QLineEdit *Vmax_2;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_45;
    QLineEdit *Pprom;
    QLineEdit *Pmin;
    QLineEdit *Pmax;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *lineEdit_49;
    QLineEdit *Lprom;
    QLineEdit *Lmin;
    QLineEdit *Lmax;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 280, 89, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 590, 227));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lineEdit_29 = new QLineEdit(widget);
        lineEdit_29->setObjectName(QString::fromUtf8("lineEdit_29"));
        lineEdit_29->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_29);

        Tprom = new QLineEdit(widget);
        Tprom->setObjectName(QString::fromUtf8("Tprom"));
        Tprom->setReadOnly(true);

        horizontalLayout_8->addWidget(Tprom);

        Tmin = new QLineEdit(widget);
        Tmin->setObjectName(QString::fromUtf8("Tmin"));
        Tmin->setReadOnly(true);

        horizontalLayout_8->addWidget(Tmin);

        Tmax = new QLineEdit(widget);
        Tmax->setObjectName(QString::fromUtf8("Tmax"));
        Tmax->setReadOnly(true);

        horizontalLayout_8->addWidget(Tmax);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lineEdit_33 = new QLineEdit(widget);
        lineEdit_33->setObjectName(QString::fromUtf8("lineEdit_33"));
        lineEdit_33->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_33);

        Hprom = new QLineEdit(widget);
        Hprom->setObjectName(QString::fromUtf8("Hprom"));
        Hprom->setReadOnly(true);

        horizontalLayout_9->addWidget(Hprom);

        Hmin = new QLineEdit(widget);
        Hmin->setObjectName(QString::fromUtf8("Hmin"));
        Hmin->setReadOnly(true);

        horizontalLayout_9->addWidget(Hmin);

        Hmax = new QLineEdit(widget);
        Hmax->setObjectName(QString::fromUtf8("Hmax"));
        Hmax->setReadOnly(true);

        horizontalLayout_9->addWidget(Hmax);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        lineEdit_37 = new QLineEdit(widget);
        lineEdit_37->setObjectName(QString::fromUtf8("lineEdit_37"));
        lineEdit_37->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_37);

        Vprom = new QLineEdit(widget);
        Vprom->setObjectName(QString::fromUtf8("Vprom"));
        Vprom->setReadOnly(true);

        horizontalLayout_10->addWidget(Vprom);

        Vmin = new QLineEdit(widget);
        Vmin->setObjectName(QString::fromUtf8("Vmin"));
        Vmin->setReadOnly(true);

        horizontalLayout_10->addWidget(Vmin);

        Vmax = new QLineEdit(widget);
        Vmax->setObjectName(QString::fromUtf8("Vmax"));
        Vmax->setReadOnly(true);

        horizontalLayout_10->addWidget(Vmax);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        lineEdit_41 = new QLineEdit(widget);
        lineEdit_41->setObjectName(QString::fromUtf8("lineEdit_41"));
        lineEdit_41->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_41);

        Dprom = new QLineEdit(widget);
        Dprom->setObjectName(QString::fromUtf8("Dprom"));
        Dprom->setReadOnly(true);

        horizontalLayout_11->addWidget(Dprom);

        Vmin_2 = new QLineEdit(widget);
        Vmin_2->setObjectName(QString::fromUtf8("Vmin_2"));
        Vmin_2->setReadOnly(true);

        horizontalLayout_11->addWidget(Vmin_2);

        Vmax_2 = new QLineEdit(widget);
        Vmax_2->setObjectName(QString::fromUtf8("Vmax_2"));
        Vmax_2->setReadOnly(true);

        horizontalLayout_11->addWidget(Vmax_2);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        lineEdit_45 = new QLineEdit(widget);
        lineEdit_45->setObjectName(QString::fromUtf8("lineEdit_45"));
        lineEdit_45->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEdit_45);

        Pprom = new QLineEdit(widget);
        Pprom->setObjectName(QString::fromUtf8("Pprom"));
        Pprom->setReadOnly(true);

        horizontalLayout_12->addWidget(Pprom);

        Pmin = new QLineEdit(widget);
        Pmin->setObjectName(QString::fromUtf8("Pmin"));
        Pmin->setReadOnly(true);

        horizontalLayout_12->addWidget(Pmin);

        Pmax = new QLineEdit(widget);
        Pmax->setObjectName(QString::fromUtf8("Pmax"));
        Pmax->setReadOnly(true);

        horizontalLayout_12->addWidget(Pmax);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        lineEdit_49 = new QLineEdit(widget);
        lineEdit_49->setObjectName(QString::fromUtf8("lineEdit_49"));
        lineEdit_49->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEdit_49);

        Lprom = new QLineEdit(widget);
        Lprom->setObjectName(QString::fromUtf8("Lprom"));
        Lprom->setReadOnly(true);

        horizontalLayout_13->addWidget(Lprom);

        Lmin = new QLineEdit(widget);
        Lmin->setObjectName(QString::fromUtf8("Lmin"));
        Lmin->setReadOnly(true);

        horizontalLayout_13->addWidget(Lmin);

        Lmax = new QLineEdit(widget);
        Lmax->setObjectName(QString::fromUtf8("Lmax"));
        Lmax->setReadOnly(true);

        horizontalLayout_13->addWidget(Lmax);


        verticalLayout->addLayout(horizontalLayout_13);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "SENSOR", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "PROMEDIO", nullptr));
        lineEdit_3->setText(QApplication::translate("MainWindow", "MINIMO", nullptr));
        lineEdit_4->setText(QApplication::translate("MainWindow", "MAXIMO", nullptr));
        lineEdit_29->setText(QApplication::translate("MainWindow", "TEMPERATURA", nullptr));
        lineEdit_33->setText(QApplication::translate("MainWindow", "HUMEDAD ", nullptr));
        lineEdit_37->setText(QApplication::translate("MainWindow", "VELOCIDAD VIENTO", nullptr));
        lineEdit_41->setText(QApplication::translate("MainWindow", "DIRECCI\303\223N VIENTO", nullptr));
        lineEdit_45->setText(QApplication::translate("MainWindow", "PRECIPITACION", nullptr));
        lineEdit_49->setText(QApplication::translate("MainWindow", "INTENSIDAD LUZ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'consol_usuar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOL_USUAR_H
#define UI_CONSOL_USUAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consol_usuar
{
public:
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Usuario;
    QLabel *label_3;
    QLineEdit *Contrasena;
    QPushButton *pb_ingresar;

    void setupUi(QWidget *consol_usuar)
    {
        if (consol_usuar->objectName().isEmpty())
            consol_usuar->setObjectName(QString::fromUtf8("consol_usuar"));
        consol_usuar->resize(470, 340);
        frame = new QFrame(consol_usuar);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 471, 341));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
"background-color: rgb(78, 154, 6);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 40, 181, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        Usuario = new QLineEdit(widget);
        Usuario->setObjectName(QString::fromUtf8("Usuario"));
        Usuario->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(Usuario);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        Contrasena = new QLineEdit(widget);
        Contrasena->setObjectName(QString::fromUtf8("Contrasena"));
        Contrasena->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        Contrasena->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(Contrasena);

        pb_ingresar = new QPushButton(widget);
        pb_ingresar->setObjectName(QString::fromUtf8("pb_ingresar"));

        verticalLayout->addWidget(pb_ingresar);

        frame->raise();
        label->raise();
        label_2->raise();
        Usuario->raise();
        Contrasena->raise();
        label_3->raise();
        pb_ingresar->raise();

        retranslateUi(consol_usuar);

        QMetaObject::connectSlotsByName(consol_usuar);
    } // setupUi

    void retranslateUi(QWidget *consol_usuar)
    {
        consol_usuar->setWindowTitle(QApplication::translate("consol_usuar", "Form", nullptr));
        label->setText(QApplication::translate("consol_usuar", "SENSOR DE CLIMA 1.0", nullptr));
        label_2->setText(QApplication::translate("consol_usuar", "Usuario:", nullptr));
        Usuario->setPlaceholderText(QApplication::translate("consol_usuar", "Ingresar usuario", nullptr));
        label_3->setText(QApplication::translate("consol_usuar", "Contrase\303\261a:", nullptr));
        Contrasena->setPlaceholderText(QApplication::translate("consol_usuar", "Ingresar contrase\303\261a", nullptr));
        pb_ingresar->setText(QApplication::translate("consol_usuar", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consol_usuar: public Ui_consol_usuar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOL_USUAR_H

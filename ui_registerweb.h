/********************************************************************************
** Form generated from reading UI file 'registerweb.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWEB_H
#define UI_REGISTERWEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWeb
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterWeb)
    {
        if (RegisterWeb->objectName().isEmpty())
            RegisterWeb->setObjectName(QString::fromUtf8("RegisterWeb"));
        RegisterWeb->resize(800, 600);
        centralwidget = new QWidget(RegisterWeb);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        RegisterWeb->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegisterWeb);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        RegisterWeb->setMenuBar(menubar);
        statusbar = new QStatusBar(RegisterWeb);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegisterWeb->setStatusBar(statusbar);

        retranslateUi(RegisterWeb);

        QMetaObject::connectSlotsByName(RegisterWeb);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWeb)
    {
        RegisterWeb->setWindowTitle(QApplication::translate("RegisterWeb", "RegisterWeb", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWeb: public Ui_RegisterWeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWEB_H

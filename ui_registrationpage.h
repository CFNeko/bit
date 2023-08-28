/********************************************************************************
** Form generated from reading UI file 'registrationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONPAGE_H
#define UI_REGISTRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrationPage
{
public:

    void setupUi(QWidget *RegistrationPage)
    {
        if (RegistrationPage->objectName().isEmpty())
            RegistrationPage->setObjectName(QString::fromUtf8("RegistrationPage"));
        RegistrationPage->resize(400, 300);

        retranslateUi(RegistrationPage);

        QMetaObject::connectSlotsByName(RegistrationPage);
    } // setupUi

    void retranslateUi(QWidget *RegistrationPage)
    {
        RegistrationPage->setWindowTitle(QApplication::translate("RegistrationPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationPage: public Ui_RegistrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONPAGE_H

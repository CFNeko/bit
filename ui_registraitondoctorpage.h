/********************************************************************************
** Form generated from reading UI file 'registraitondoctorpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRAITONDOCTORPAGE_H
#define UI_REGISTRAITONDOCTORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistraitonDoctorPage
{
public:

    void setupUi(QWidget *RegistraitonDoctorPage)
    {
        if (RegistraitonDoctorPage->objectName().isEmpty())
            RegistraitonDoctorPage->setObjectName(QString::fromUtf8("RegistraitonDoctorPage"));
        RegistraitonDoctorPage->resize(400, 300);

        retranslateUi(RegistraitonDoctorPage);

        QMetaObject::connectSlotsByName(RegistraitonDoctorPage);
    } // setupUi

    void retranslateUi(QWidget *RegistraitonDoctorPage)
    {
        RegistraitonDoctorPage->setWindowTitle(QApplication::translate("RegistraitonDoctorPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistraitonDoctorPage: public Ui_RegistraitonDoctorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAITONDOCTORPAGE_H

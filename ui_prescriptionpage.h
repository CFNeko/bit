/********************************************************************************
** Form generated from reading UI file 'prescriptionpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESCRIPTIONPAGE_H
#define UI_PRESCRIPTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrescriptionPage
{
public:

    void setupUi(QWidget *PrescriptionPage)
    {
        if (PrescriptionPage->objectName().isEmpty())
            PrescriptionPage->setObjectName(QString::fromUtf8("PrescriptionPage"));
        PrescriptionPage->resize(400, 300);

        retranslateUi(PrescriptionPage);

        QMetaObject::connectSlotsByName(PrescriptionPage);
    } // setupUi

    void retranslateUi(QWidget *PrescriptionPage)
    {
        PrescriptionPage->setWindowTitle(QApplication::translate("PrescriptionPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrescriptionPage: public Ui_PrescriptionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESCRIPTIONPAGE_H

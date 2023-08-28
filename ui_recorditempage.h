/********************************************************************************
** Form generated from reading UI file 'recorditempage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDITEMPAGE_H
#define UI_RECORDITEMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordItemPage
{
public:

    void setupUi(QWidget *RecordItemPage)
    {
        if (RecordItemPage->objectName().isEmpty())
            RecordItemPage->setObjectName(QString::fromUtf8("RecordItemPage"));
        RecordItemPage->resize(400, 300);

        retranslateUi(RecordItemPage);

        QMetaObject::connectSlotsByName(RecordItemPage);
    } // setupUi

    void retranslateUi(QWidget *RecordItemPage)
    {
        RecordItemPage->setWindowTitle(QApplication::translate("RecordItemPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordItemPage: public Ui_RecordItemPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDITEMPAGE_H

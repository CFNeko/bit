/********************************************************************************
** Form generated from reading UI file 'listtemplate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTTEMPLATE_H
#define UI_LISTTEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListTemplate
{
public:

    void setupUi(QWidget *ListTemplate)
    {
        if (ListTemplate->objectName().isEmpty())
            ListTemplate->setObjectName(QString::fromUtf8("ListTemplate"));
        ListTemplate->resize(400, 300);

        retranslateUi(ListTemplate);

        QMetaObject::connectSlotsByName(ListTemplate);
    } // setupUi

    void retranslateUi(QWidget *ListTemplate)
    {
        ListTemplate->setWindowTitle(QApplication::translate("ListTemplate", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListTemplate: public Ui_ListTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTTEMPLATE_H

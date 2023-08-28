/********************************************************************************
** Form generated from reading UI file 'userfriendlyitems.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFRIENDLYITEMS_H
#define UI_USERFRIENDLYITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserFriendlyItems
{
public:

    void setupUi(QWidget *UserFriendlyItems)
    {
        if (UserFriendlyItems->objectName().isEmpty())
            UserFriendlyItems->setObjectName(QString::fromUtf8("UserFriendlyItems"));
        UserFriendlyItems->resize(400, 300);

        retranslateUi(UserFriendlyItems);

        QMetaObject::connectSlotsByName(UserFriendlyItems);
    } // setupUi

    void retranslateUi(QWidget *UserFriendlyItems)
    {
        UserFriendlyItems->setWindowTitle(QApplication::translate("UserFriendlyItems", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserFriendlyItems: public Ui_UserFriendlyItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFRIENDLYITEMS_H

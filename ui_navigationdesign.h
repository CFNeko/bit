/********************************************************************************
** Form generated from reading UI file 'navigationdesign.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONDESIGN_H
#define UI_NAVIGATIONDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_navigationDesign
{
public:

    void setupUi(QWidget *navigationDesign)
    {
        if (navigationDesign->objectName().isEmpty())
            navigationDesign->setObjectName(QString::fromUtf8("navigationDesign"));
        navigationDesign->resize(400, 300);

        retranslateUi(navigationDesign);

        QMetaObject::connectSlotsByName(navigationDesign);
    } // setupUi

    void retranslateUi(QWidget *navigationDesign)
    {
        navigationDesign->setWindowTitle(QApplication::translate("navigationDesign", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class navigationDesign: public Ui_navigationDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONDESIGN_H

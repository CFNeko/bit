/********************************************************************************
** Form generated from reading UI file 'booking.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKING_H
#define UI_BOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Booking
{
public:
    QFrame *frame;

    void setupUi(QWidget *Booking)
    {
        if (Booking->objectName().isEmpty())
            Booking->setObjectName(QString::fromUtf8("Booking"));
        Booking->resize(656, 452);
        frame = new QFrame(Booking);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-20, 0, 781, 71));
        frame->setStyleSheet(QString::fromUtf8("#frame{background-color: rgb(104, 156, 251);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(Booking);

        QMetaObject::connectSlotsByName(Booking);
    } // setupUi

    void retranslateUi(QWidget *Booking)
    {
        Booking->setWindowTitle(QApplication::translate("Booking", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Booking: public Ui_Booking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKING_H

/********************************************************************************
** Form generated from reading UI file 'prescriptioninquiry.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESCRIPTIONINQUIRY_H
#define UI_PRESCRIPTIONINQUIRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrescriptionInquiry
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *exitPushbutton;
    QLabel *avatar;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *PrescriptionInquiry)
    {
        if (PrescriptionInquiry->objectName().isEmpty())
            PrescriptionInquiry->setObjectName(QString::fromUtf8("PrescriptionInquiry"));
        PrescriptionInquiry->resize(641, 462);
        gridLayout = new QGridLayout(PrescriptionInquiry);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(PrescriptionInquiry);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        exitPushbutton = new QPushButton(frame);
        exitPushbutton->setObjectName(QString::fromUtf8("exitPushbutton"));
        exitPushbutton->setGeometry(QRect(10, 10, 51, 31));
        avatar = new QLabel(frame);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setGeometry(QRect(10, 60, 67, 50));
        avatar->setMinimumSize(QSize(50, 50));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(90, 50, 301, 61));

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(PrescriptionInquiry);

        QMetaObject::connectSlotsByName(PrescriptionInquiry);
    } // setupUi

    void retranslateUi(QWidget *PrescriptionInquiry)
    {
        PrescriptionInquiry->setWindowTitle(QApplication::translate("PrescriptionInquiry", "Form", nullptr));
        exitPushbutton->setText(QApplication::translate("PrescriptionInquiry", "\351\200\200\345\207\272", nullptr));
        avatar->setText(QApplication::translate("PrescriptionInquiry", "TextLabel", nullptr));
        textBrowser->setHtml(QApplication::translate("PrescriptionInquiry", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\260\261\350\257\212\345\217\267\357\274\232</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrescriptionInquiry: public Ui_PrescriptionInquiry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESCRIPTIONINQUIRY_H

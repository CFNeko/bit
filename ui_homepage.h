/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *Homepge;
    QWidget *HOME;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *booking;
    QPushButton *prescription_inquiry;
    QPushButton *medica_record;
    QPushButton *health_evaluate;
    QFrame *frame_5;
    QWidget *Message;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *updatePushbutton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QWidget *My;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QLineEdit *boxTelephone;
    QLabel *label_13;
    QLineEdit *boxAddress;
    QLabel *label_14;
    QLineEdit *boxEmail;
    QLabel *label_15;
    QLineEdit *lineEdit_13;
    QLabel *label_16;
    QLineEdit *lineEdit_14;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *boxName;
    QLabel *label_8;
    QLineEdit *boxAge;
    QLabel *label_9;
    QLineEdit *boxID;
    QLabel *label_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(768, 498);
        gridLayout_2 = new QGridLayout(HomePage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Homepge = new QTabWidget(HomePage);
        Homepge->setObjectName(QString::fromUtf8("Homepge"));
        Homepge->setStyleSheet(QString::fromUtf8("Homepage{\"QTabWidget::pane{ border:none; }\"\n"
"                \"QTabWidget::tab-bar{ alignment:left; }\"\n"
"                \"QTabBar::tab{ background:transparent; color:white; min-width:30ex; min-height:10ex; }\"\n"
"                \"QTabBar::tab:hover{ background:rgb(255, 255, 255, 100); }\"\n"
"                \"QTabBar::tab:selected{ border-color: white; background:white; color:green; }\"}"));
        Homepge->setTabPosition(QTabWidget::South);
        HOME = new QWidget();
        HOME->setObjectName(QString::fromUtf8("HOME"));
        frame = new QFrame(HOME);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 50, 681, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        booking = new QPushButton(frame);
        booking->setObjectName(QString::fromUtf8("booking"));
        booking->setStyleSheet(QString::fromUtf8("border-radius: 50px;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #0099FF, stop:1 #0044CC);\n"
"    color: white;\n"
"    font-family: \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(booking);

        prescription_inquiry = new QPushButton(frame);
        prescription_inquiry->setObjectName(QString::fromUtf8("prescription_inquiry"));
        prescription_inquiry->setStyleSheet(QString::fromUtf8("border-radius: 50px;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #0099FF, stop:1 #0044CC);\n"
"    color: white;\n"
"    font-family: \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(prescription_inquiry);

        medica_record = new QPushButton(frame);
        medica_record->setObjectName(QString::fromUtf8("medica_record"));
        medica_record->setStyleSheet(QString::fromUtf8("border-radius: 50px;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #0099FF, stop:1 #0044CC);\n"
"    color: white;\n"
"    font-family: \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(medica_record);

        health_evaluate = new QPushButton(frame);
        health_evaluate->setObjectName(QString::fromUtf8("health_evaluate"));
        health_evaluate->setStyleSheet(QString::fromUtf8("border-radius: 50px;\n"
"    background: qradialgradient(cx:0.5, cy:0.5, radius: 1, fx:0.5, fy:0.5, stop:0 #0099FF, stop:1 #0044CC);\n"
"    color: white;\n"
"    font-family: \"\346\245\267\344\275\223\";"));

        horizontalLayout->addWidget(health_evaluate);

        frame_5 = new QFrame(HOME);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(30, 230, 681, 151));
        frame_5->setStyleSheet(QString::fromUtf8("frame{url(:/resource111/1.png);}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        Homepge->addTab(HOME, QString());
        Message = new QWidget();
        Message->setObjectName(QString::fromUtf8("Message"));
        verticalLayout = new QVBoxLayout(Message);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Message);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        updatePushbutton = new QPushButton(Message);
        updatePushbutton->setObjectName(QString::fromUtf8("updatePushbutton"));

        verticalLayout->addWidget(updatePushbutton);

        scrollArea = new QScrollArea(Message);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 712, 355));
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        Homepge->addTab(Message, QString());
        My = new QWidget();
        My->setObjectName(QString::fromUtf8("My"));
        gridLayout = new QGridLayout(My);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(My);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_4 = new QFrame(groupBox);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(frame_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_2->addWidget(label_17);


        verticalLayout_2->addWidget(frame_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        frame_3 = new QFrame(groupBox);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        boxTelephone = new QLineEdit(frame_3);
        boxTelephone->setObjectName(QString::fromUtf8("boxTelephone"));

        verticalLayout_4->addWidget(boxTelephone);

        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        boxAddress = new QLineEdit(frame_3);
        boxAddress->setObjectName(QString::fromUtf8("boxAddress"));

        verticalLayout_4->addWidget(boxAddress);

        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);

        boxEmail = new QLineEdit(frame_3);
        boxEmail->setObjectName(QString::fromUtf8("boxEmail"));

        verticalLayout_4->addWidget(boxEmail);

        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_4->addWidget(label_15);

        lineEdit_13 = new QLineEdit(frame_3);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        verticalLayout_4->addWidget(lineEdit_13);

        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_4->addWidget(label_16);

        lineEdit_14 = new QLineEdit(frame_3);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        verticalLayout_4->addWidget(lineEdit_14);


        horizontalLayout_3->addWidget(frame_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_3->addWidget(label_6);

        boxName = new QLineEdit(frame_2);
        boxName->setObjectName(QString::fromUtf8("boxName"));

        verticalLayout_3->addWidget(boxName);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        boxAge = new QLineEdit(frame_2);
        boxAge->setObjectName(QString::fromUtf8("boxAge"));

        verticalLayout_3->addWidget(boxAge);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        boxID = new QLineEdit(frame_2);
        boxID->setObjectName(QString::fromUtf8("boxID"));

        verticalLayout_3->addWidget(boxID);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #F0F0F0;\n"
"                        border: 2px solid #C0C0C0;\n"
"                        padding: 5px;\n"
"                        \n"
""));

        verticalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(frame_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: #F0F0F0;\n"
"                        border: 2px solid #C0C0C0;\n"
"                        padding: 5px;\n"
"                        \n"
""));

        verticalLayout_3->addWidget(pushButton_8);


        horizontalLayout_3->addWidget(frame_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 100);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 100);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        Homepge->addTab(My, QString());

        gridLayout_2->addWidget(Homepge, 0, 0, 1, 1);


        retranslateUi(HomePage);

        Homepge->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "Form", nullptr));
        booking->setText(QApplication::translate("HomePage", "\351\242\204\347\272\246\346\214\202\345\217\267", nullptr));
        prescription_inquiry->setText(QApplication::translate("HomePage", "\345\244\204\346\226\271\346\237\245\350\257\242", nullptr));
        medica_record->setText(QApplication::translate("HomePage", "\347\224\265\345\255\220\347\227\205\344\276\213", nullptr));
        health_evaluate->setText(QApplication::translate("HomePage", "\345\201\245\345\272\267\350\257\204\344\274\260", nullptr));
        Homepge->setTabText(Homepge->indexOf(HOME), QApplication::translate("HomePage", "Home", nullptr));
        label->setText(QApplication::translate("HomePage", "\345\234\250\347\272\277\351\227\256\350\257\212\302\267\346\266\210\346\201\257\346\240\217", nullptr));
        updatePushbutton->setText(QApplication::translate("HomePage", "update", nullptr));
        Homepge->setTabText(Homepge->indexOf(Message), QApplication::translate("HomePage", "Message", nullptr));
        groupBox->setTitle(QApplication::translate("HomePage", "\344\270\252\344\272\272\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        label_17->setText(QApplication::translate("HomePage", "\345\260\261\350\257\212\345\217\267\357\274\232\357\274\221\357\274\222\357\274\223\357\274\224\357\274\225\357\274\226\357\274\227", nullptr));
        label_12->setText(QApplication::translate("HomePage", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_13->setText(QApplication::translate("HomePage", "\345\234\260\345\235\200", nullptr));
        label_14->setText(QApplication::translate("HomePage", "\347\224\265\345\255\220\351\202\256\344\273\266", nullptr));
        label_15->setText(QApplication::translate("HomePage", "\344\277\256\346\224\271\345\257\206\347\240\201\357\274\232", nullptr));
        label_16->setText(QApplication::translate("HomePage", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_6->setText(QApplication::translate("HomePage", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_8->setText(QApplication::translate("HomePage", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_9->setText(QApplication::translate("HomePage", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", nullptr));
        label_2->setText(QString());
        pushButton_7->setText(QApplication::translate("HomePage", "\344\277\256\346\224\271\350\265\204\346\226\231", nullptr));
        pushButton_8->setText(QApplication::translate("HomePage", "\346\217\220\344\272\244", nullptr));
        Homepge->setTabText(Homepge->indexOf(My), QApplication::translate("HomePage", "My", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
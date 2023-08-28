/********************************************************************************
** Form generated from reading UI file 'healthevaluation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALTHEVALUATION_H
#define UI_HEALTHEVALUATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HealthEvaluation
{
public:
    QWidget *widget;
    QVBoxLayout *pagelayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *linkLabel;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *score5;
    QRadioButton *score4;
    QRadioButton *score3;
    QRadioButton *score2;
    QRadioButton *score1;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *BMIValue;
    QSpacerItem *horizontalSpacer_8;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *strechValue;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QLineEdit *balanceValue;
    QSpacerItem *horizontalSpacer_10;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QLineEdit *reactValue;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QWidget *HealthEvaluation)
    {
        if (HealthEvaluation->objectName().isEmpty())
            HealthEvaluation->setObjectName(QString::fromUtf8("HealthEvaluation"));
        HealthEvaluation->resize(726, 906);
        HealthEvaluation->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget = new QWidget(HealthEvaluation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 711, 682));
        pagelayout = new QVBoxLayout(widget);
        pagelayout->setObjectName(QString::fromUtf8("pagelayout"));
        pagelayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: rgb(244, 236, 214);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(192, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font;
        font.setPointSize(36);
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_12);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(24);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        pagelayout->addWidget(frame);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        linkLabel = new QLabel(frame_2);
        linkLabel->setObjectName(QString::fromUtf8("linkLabel"));

        horizontalLayout_2->addWidget(linkLabel);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        score5 = new QRadioButton(frame_2);
        score5->setObjectName(QString::fromUtf8("score5"));

        horizontalLayout_4->addWidget(score5);

        score4 = new QRadioButton(frame_2);
        score4->setObjectName(QString::fromUtf8("score4"));

        horizontalLayout_4->addWidget(score4);

        score3 = new QRadioButton(frame_2);
        score3->setObjectName(QString::fromUtf8("score3"));

        horizontalLayout_4->addWidget(score3);

        score2 = new QRadioButton(frame_2);
        score2->setObjectName(QString::fromUtf8("score2"));

        horizontalLayout_4->addWidget(score2);

        score1 = new QRadioButton(frame_2);
        score1->setObjectName(QString::fromUtf8("score1"));

        horizontalLayout_4->addWidget(score1);


        verticalLayout->addLayout(horizontalLayout_4);


        pagelayout->addWidget(frame_2);

        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_9->addWidget(label_5);

        BMIValue = new QLineEdit(frame_3);
        BMIValue->setObjectName(QString::fromUtf8("BMIValue"));

        horizontalLayout_9->addWidget(BMIValue);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);

        pagelayout->addWidget(frame_3);

        frame_4 = new QFrame(widget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        strechValue = new QLineEdit(frame_4);
        strechValue->setObjectName(QString::fromUtf8("strechValue"));

        horizontalLayout_7->addWidget(strechValue);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout_3->addLayout(horizontalLayout_7);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 2);

        pagelayout->addWidget(frame_4);

        frame_5 = new QFrame(widget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(frame_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(frame_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        balanceValue = new QLineEdit(frame_5);
        balanceValue->setObjectName(QString::fromUtf8("balanceValue"));

        horizontalLayout_11->addWidget(balanceValue);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);

        pagelayout->addWidget(frame_5);

        frame_6 = new QFrame(widget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(frame_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_11 = new QLabel(frame_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_12->addWidget(label_11);

        reactValue = new QLineEdit(frame_6);
        reactValue->setObjectName(QString::fromUtf8("reactValue"));

        horizontalLayout_12->addWidget(reactValue);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout_5->addLayout(horizontalLayout_12);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 2);

        pagelayout->addWidget(frame_6);


        retranslateUi(HealthEvaluation);

        QMetaObject::connectSlotsByName(HealthEvaluation);
    } // setupUi

    void retranslateUi(QWidget *HealthEvaluation)
    {
        HealthEvaluation->setWindowTitle(QApplication::translate("HealthEvaluation", "Form", nullptr));
        label_12->setText(QApplication::translate("HealthEvaluation", "\346\231\272\350\203\275\345\214\273\347\226\227\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("HealthEvaluation", "\345\201\245\345\272\267\350\257\204\344\274\260", nullptr));
        label_2->setText(QApplication::translate("HealthEvaluation", "\347\254\254\344\270\200\351\203\250\345\210\206\357\274\232\346\234\211\346\260\247\350\277\220\345\212\250\350\203\275\345\212\233", nullptr));
        linkLabel->setText(QApplication::translate("HealthEvaluation", "1.\346\202\250\347\232\204<a href=\"https://zhuanlan.zhihu.com/p/601525073\">\346\234\200\345\244\247\346\221\204\346\260\247\351\207\217</a>\344\270\272\357\274\232", nullptr));
        score5->setText(QApplication::translate("HealthEvaluation", "5\345\210\206", nullptr));
        score4->setText(QApplication::translate("HealthEvaluation", "4\345\210\206", nullptr));
        score3->setText(QApplication::translate("HealthEvaluation", "3\345\210\206", nullptr));
        score2->setText(QApplication::translate("HealthEvaluation", "2\345\210\206", nullptr));
        score1->setText(QApplication::translate("HealthEvaluation", "1\345\210\206", nullptr));
        label_4->setText(QApplication::translate("HealthEvaluation", "\347\254\254\344\272\214\351\203\250\345\210\206\357\274\232BMI", nullptr));
        label_5->setText(QApplication::translate("HealthEvaluation", "2.\346\202\250\347\232\204BMI\344\270\272\357\274\210\346\227\240\351\234\200\345\241\253\345\206\231\357\274\214\347\263\273\347\273\237\347\224\237\346\210\220\357\274\211\357\274\232", nullptr));
        label_6->setText(QApplication::translate("HealthEvaluation", "\347\254\254\344\270\211\351\203\250\345\210\206\357\274\232\346\237\224\351\237\247\350\203\275\345\212\233", nullptr));
        label_7->setText(QApplication::translate("HealthEvaluation", "3.\346\202\250\347\232\204\345\235\220\344\275\215\344\275\223\345\211\215\345\261\210\347\273\223\346\236\234\344\270\272\357\274\210\345\215\225\344\275\215\357\274\232\345\216\230\347\261\263\357\274\211\357\274\232", nullptr));
        label_8->setText(QApplication::translate("HealthEvaluation", "\347\254\254\345\233\233\351\203\250\345\210\206\357\274\232\345\271\263\350\241\241\350\203\275\345\212\233", nullptr));
        label_9->setText(QApplication::translate("HealthEvaluation", "4.\351\227\255\347\234\274\345\215\225\350\204\232\347\253\231\347\253\213\346\227\266\351\225\277\344\270\272\357\274\232\357\274\210\345\215\225\344\275\215\357\274\232\347\247\222\357\274\211", nullptr));
        label_10->setText(QApplication::translate("HealthEvaluation", "\347\254\254\344\272\224\351\203\250\345\210\206\357\274\232\345\217\215\345\272\224\350\203\275\345\212\233", nullptr));
        label_11->setText(QApplication::translate("HealthEvaluation", "5.\346\202\250\347\232\204\345\217\215\345\272\224\346\227\266\351\227\264\344\270\272\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HealthEvaluation: public Ui_HealthEvaluation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHEVALUATION_H

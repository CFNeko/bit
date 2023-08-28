/********************************************************************************
** Form generated from reading UI file 'recorditemtable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORDITEMTABLE_H
#define UI_RECORDITEMTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecordItemTable
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_13;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_8;
    QFrame *basicInformation1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *namelabel;
    QLabel *name;
    QHBoxLayout *horizontalLayout_14;
    QLabel *agelabel_2;
    QLabel *age_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *sex;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_8;
    QFrame *basicInformation2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *patientid_;
    QLabel *sexlabel;
    QLabel *patientid;
    QHBoxLayout *phone_;
    QLabel *agelabel;
    QLabel *phone;
    QHBoxLayout *weight;
    QLabel *weightlabel;
    QLabel *address;
    QSpacerItem *horizontalSpacer_9;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *birthday;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLabel *diagnosistime;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSpacerItem *spacer;
    QTextEdit *casehistory;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *symptom;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_14;
    QTextEdit *diagnosis;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_11;
    QTextEdit *prescription;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *toPrescription;

    void setupUi(QWidget *RecordItemTable)
    {
        if (RecordItemTable->objectName().isEmpty())
            RecordItemTable->setObjectName(QString::fromUtf8("RecordItemTable"));
        RecordItemTable->resize(927, 1387);
        RecordItemTable->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        verticalLayout_5 = new QVBoxLayout(RecordItemTable);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_11 = new QLabel(RecordItemTable);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_4);

        frame = new QFrame(RecordItemTable);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 236, 214);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Ubuntu\";\n"
"color: rgb(29, 115, 215);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 25pt \"Ubuntu\";"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 3);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_16->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/resource111/red.png);"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);
        horizontalLayout_3->setStretch(2, 1);

        horizontalLayout_16->addLayout(horizontalLayout_3);

        horizontalLayout_16->setStretch(0, 4);
        horizontalLayout_16->setStretch(1, 1);

        verticalLayout_5->addWidget(frame);

        frame_6 = new QFrame(RecordItemTable);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        basicInformation1 = new QFrame(frame_6);
        basicInformation1->setObjectName(QString::fromUtf8("basicInformation1"));
        basicInformation1->setStyleSheet(QString::fromUtf8("border: none"));
        basicInformation1->setFrameShape(QFrame::StyledPanel);
        basicInformation1->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(basicInformation1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        namelabel = new QLabel(basicInformation1);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));

        horizontalLayout_13->addWidget(namelabel);

        name = new QLabel(basicInformation1);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_13->addWidget(name);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        agelabel_2 = new QLabel(basicInformation1);
        agelabel_2->setObjectName(QString::fromUtf8("agelabel_2"));

        horizontalLayout_14->addWidget(agelabel_2);

        age_2 = new QLabel(basicInformation1);
        age_2->setObjectName(QString::fromUtf8("age_2"));
        age_2->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_14->addWidget(age_2);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        sex = new QLabel(basicInformation1);
        sex->setObjectName(QString::fromUtf8("sex"));

        horizontalLayout_15->addWidget(sex);

        label_5 = new QLabel(basicInformation1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_15->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_15);


        horizontalLayout_8->addWidget(basicInformation1);

        horizontalSpacer_8 = new QSpacerItem(192, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        basicInformation2 = new QFrame(frame_6);
        basicInformation2->setObjectName(QString::fromUtf8("basicInformation2"));
        basicInformation2->setStyleSheet(QString::fromUtf8("border: none;"));
        basicInformation2->setFrameShape(QFrame::StyledPanel);
        basicInformation2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(basicInformation2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        patientid_ = new QHBoxLayout();
        patientid_->setObjectName(QString::fromUtf8("patientid_"));
        sexlabel = new QLabel(basicInformation2);
        sexlabel->setObjectName(QString::fromUtf8("sexlabel"));

        patientid_->addWidget(sexlabel);

        patientid = new QLabel(basicInformation2);
        patientid->setObjectName(QString::fromUtf8("patientid"));
        patientid->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        patientid_->addWidget(patientid);


        verticalLayout_2->addLayout(patientid_);

        phone_ = new QHBoxLayout();
        phone_->setObjectName(QString::fromUtf8("phone_"));
        agelabel = new QLabel(basicInformation2);
        agelabel->setObjectName(QString::fromUtf8("agelabel"));

        phone_->addWidget(agelabel);

        phone = new QLabel(basicInformation2);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        phone_->addWidget(phone);


        verticalLayout_2->addLayout(phone_);

        weight = new QHBoxLayout();
        weight->setObjectName(QString::fromUtf8("weight"));
        weightlabel = new QLabel(basicInformation2);
        weightlabel->setObjectName(QString::fromUtf8("weightlabel"));

        weight->addWidget(weightlabel);

        address = new QLabel(basicInformation2);
        address->setObjectName(QString::fromUtf8("address"));
        address->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        weight->addWidget(address);


        verticalLayout_2->addLayout(weight);


        horizontalLayout_8->addWidget(basicInformation2);

        horizontalSpacer_9 = new QSpacerItem(193, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        frame_2 = new QFrame(frame_6);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("border: none;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        birthday = new QLabel(frame_2);
        birthday->setObjectName(QString::fromUtf8("birthday"));
        birthday->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_5->addWidget(birthday);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        diagnosistime = new QLabel(frame_2);
        diagnosistime->setObjectName(QString::fromUtf8("diagnosistime"));
        diagnosistime->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_6->addWidget(diagnosistime);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_7->addWidget(label_14);


        verticalLayout_4->addLayout(horizontalLayout_7);


        horizontalLayout_8->addWidget(frame_2);

        horizontalSpacer_10 = new QSpacerItem(192, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_10);


        verticalLayout_5->addWidget(frame_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(RecordItemTable);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_9->addWidget(label_12);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(spacer);


        verticalLayout_5->addLayout(horizontalLayout_9);

        casehistory = new QTextEdit(RecordItemTable);
        casehistory->setObjectName(QString::fromUtf8("casehistory"));

        verticalLayout_5->addWidget(casehistory);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(RecordItemTable);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_10->addWidget(label_13);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(horizontalLayout_10);

        symptom = new QTextEdit(RecordItemTable);
        symptom->setObjectName(QString::fromUtf8("symptom"));

        verticalLayout_5->addWidget(symptom);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_15 = new QLabel(RecordItemTable);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_20->addWidget(label_15);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_14);


        verticalLayout_5->addLayout(horizontalLayout_20);

        diagnosis = new QTextEdit(RecordItemTable);
        diagnosis->setObjectName(QString::fromUtf8("diagnosis"));

        verticalLayout_5->addWidget(diagnosis);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        pushButton_4 = new QPushButton(RecordItemTable);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_19->addWidget(pushButton_4);


        verticalLayout_5->addLayout(horizontalLayout_19);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_3 = new QLabel(RecordItemTable);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(29, 115, 215);"));

        horizontalLayout_12->addWidget(label_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout_5->addLayout(horizontalLayout_12);

        prescription = new QTextEdit(RecordItemTable);
        prescription->setObjectName(QString::fromUtf8("prescription"));

        verticalLayout_5->addWidget(prescription);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        toPrescription = new QPushButton(RecordItemTable);
        toPrescription->setObjectName(QString::fromUtf8("toPrescription"));

        horizontalLayout_17->addWidget(toPrescription);


        verticalLayout_5->addLayout(horizontalLayout_17);


        retranslateUi(RecordItemTable);

        QMetaObject::connectSlotsByName(RecordItemTable);
    } // setupUi

    void retranslateUi(QWidget *RecordItemTable)
    {
        RecordItemTable->setWindowTitle(QApplication::translate("RecordItemTable", "\347\224\265\345\255\220\347\227\205\345\216\206", nullptr));
        label_11->setText(QApplication::translate("RecordItemTable", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("RecordItemTable", "\346\231\272\350\203\275\345\214\273\347\226\227\347\263\273\347\273\237", nullptr));
        label_2->setText(QApplication::translate("RecordItemTable", "\347\224\265\345\255\220\347\227\205\345\216\206", nullptr));
        label_4->setText(QString());
        namelabel->setText(QApplication::translate("RecordItemTable", "\345\247\223\345\220\215", nullptr));
        name->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        agelabel_2->setText(QApplication::translate("RecordItemTable", "\345\271\264\351\276\204", nullptr));
        age_2->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        sex->setText(QApplication::translate("RecordItemTable", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        sexlabel->setText(QApplication::translate("RecordItemTable", "\345\260\261\350\257\212\345\217\267", nullptr));
        patientid->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        agelabel->setText(QApplication::translate("RecordItemTable", "\346\211\213\346\234\272\345\217\267", nullptr));
        phone->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        weightlabel->setText(QApplication::translate("RecordItemTable", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        address->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        label_6->setText(QApplication::translate("RecordItemTable", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        birthday->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("RecordItemTable", "\345\260\261\350\257\212\346\227\245\346\234\237", nullptr));
        diagnosistime->setText(QApplication::translate("RecordItemTable", "TextLabel", nullptr));
        label_10->setText(QString());
        label_14->setText(QString());
        label_12->setText(QApplication::translate("RecordItemTable", "\346\227\242\345\276\200\347\227\205\345\217\262", nullptr));
        label_13->setText(QApplication::translate("RecordItemTable", "\347\227\207\347\212\266", nullptr));
        label_15->setText(QApplication::translate("RecordItemTable", "\344\270\264\345\272\212\350\257\212\346\226\255", nullptr));
        pushButton_4->setText(QApplication::translate("RecordItemTable", "\344\277\235\345\255\230", nullptr));
        label_3->setText(QApplication::translate("RecordItemTable", "\345\244\204\346\226\271", nullptr));
        toPrescription->setText(QApplication::translate("RecordItemTable", "\347\274\226\350\276\221\345\244\204\346\226\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecordItemTable: public Ui_RecordItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORDITEMTABLE_H

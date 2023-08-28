/********************************************************************************
** Form generated from reading UI file 'prescriptiontable.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESCRIPTIONTABLE_H
#define UI_PRESCRIPTIONTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrescriptionTable
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_29;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_10;
    QFrame *line;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    QLabel *patientname;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QLabel *diagnosis;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QLabel *sex;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QLabel *diagnosistime;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_23;
    QLabel *age;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer_8;
    QTableWidget *medicineTable;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer_9;
    QTextEdit *advice;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_25;
    QLabel *doctorname;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *submit;

    void setupUi(QWidget *PrescriptionTable)
    {
        if (PrescriptionTable->objectName().isEmpty())
            PrescriptionTable->setObjectName(QString::fromUtf8("PrescriptionTable"));
        PrescriptionTable->resize(712, 742);
        PrescriptionTable->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(PrescriptionTable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        label_29 = new QLabel(PrescriptionTable);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font;
        font.setPointSize(24);
        label_29->setFont(font);

        verticalLayout_7->addWidget(label_29);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 2);

        horizontalLayout_18->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_14 = new QLabel(PrescriptionTable);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("aakar"));
        font1.setPointSize(24);
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(239, 41, 41);"));

        horizontalLayout_14->addWidget(label_14);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);

        horizontalLayout_14->setStretch(1, 3);

        verticalLayout_8->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label = new QLabel(PrescriptionTable);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_15->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_15);


        horizontalLayout_18->addLayout(verticalLayout_8);


        horizontalLayout_19->addLayout(horizontalLayout_18);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer);

        label_30 = new QLabel(PrescriptionTable);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font);

        horizontalLayout_19->addWidget(label_30);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_10);

        horizontalLayout_19->setStretch(0, 3);
        horizontalLayout_19->setStretch(1, 6);
        horizontalLayout_19->setStretch(2, 3);

        verticalLayout->addLayout(horizontalLayout_19);

        line = new QFrame(PrescriptionTable);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(5);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        frame = new QFrame(PrescriptionTable);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("border: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_7->addWidget(label_15);

        patientname = new QLabel(frame);
        patientname->setObjectName(QString::fromUtf8("patientname"));

        horizontalLayout_7->addWidget(patientname);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_8->addWidget(label_17);

        diagnosis = new QLabel(frame);
        diagnosis->setObjectName(QString::fromUtf8("diagnosis"));

        horizontalLayout_8->addWidget(diagnosis);


        verticalLayout_4->addLayout(horizontalLayout_8);


        horizontalLayout_13->addLayout(verticalLayout_4);

        horizontalSpacer_5 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_9->addWidget(label_19);

        sex = new QLabel(frame);
        sex->setObjectName(QString::fromUtf8("sex"));

        horizontalLayout_9->addWidget(sex);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_22 = new QLabel(frame);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_10->addWidget(label_22);

        diagnosistime = new QLabel(frame);
        diagnosistime->setObjectName(QString::fromUtf8("diagnosistime"));

        horizontalLayout_10->addWidget(diagnosistime);


        verticalLayout_5->addLayout(horizontalLayout_10);


        horizontalLayout_13->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_23 = new QLabel(frame);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_11->addWidget(label_23);

        age = new QLabel(frame);
        age->setObjectName(QString::fromUtf8("age"));

        horizontalLayout_11->addWidget(age);


        verticalLayout_6->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));

        verticalLayout_6->addLayout(horizontalLayout_12);


        horizontalLayout_13->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(81, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(frame);

        line_2 = new QFrame(PrescriptionTable);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(5);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_28 = new QLabel(PrescriptionTable);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font);

        horizontalLayout_16->addWidget(label_28);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_16);

        medicineTable = new QTableWidget(PrescriptionTable);
        if (medicineTable->columnCount() < 5)
            medicineTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        medicineTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        medicineTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        medicineTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        medicineTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        medicineTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        medicineTable->setObjectName(QString::fromUtf8("medicineTable"));
        medicineTable->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(medicineTable);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_27 = new QLabel(PrescriptionTable);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_17->addWidget(label_27);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_17);

        advice = new QTextEdit(PrescriptionTable);
        advice->setObjectName(QString::fromUtf8("advice"));

        verticalLayout->addWidget(advice);

        line_3 = new QFrame(PrescriptionTable);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(5);
        line_3->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_3);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_3);

        label_25 = new QLabel(PrescriptionTable);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_20->addWidget(label_25);

        doctorname = new QLabel(PrescriptionTable);
        doctorname->setObjectName(QString::fromUtf8("doctorname"));

        horizontalLayout_20->addWidget(doctorname);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        submit = new QPushButton(PrescriptionTable);
        submit->setObjectName(QString::fromUtf8("submit"));

        horizontalLayout->addWidget(submit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(PrescriptionTable);

        QMetaObject::connectSlotsByName(PrescriptionTable);
    } // setupUi

    void retranslateUi(QWidget *PrescriptionTable)
    {
        PrescriptionTable->setWindowTitle(QApplication::translate("PrescriptionTable", "\345\244\204\346\226\271\347\254\272", nullptr));
        label_29->setText(QApplication::translate("PrescriptionTable", "No.", nullptr));
        label_14->setText(QApplication::translate("PrescriptionTable", "00001", nullptr));
        label->setText(QApplication::translate("PrescriptionTable", "\346\231\272\350\203\275\345\214\273\347\226\227\347\263\273\347\273\237", nullptr));
        label_30->setText(QApplication::translate("PrescriptionTable", "\345\244\204\346\226\271\347\254\272", nullptr));
        label_15->setText(QApplication::translate("PrescriptionTable", "\346\202\243\350\200\205\345\247\223\345\220\215:", nullptr));
        patientname->setText(QApplication::translate("PrescriptionTable", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("PrescriptionTable", "\344\270\264\345\272\212\350\257\212\346\226\255:", nullptr));
        diagnosis->setText(QApplication::translate("PrescriptionTable", "TextLabel", nullptr));
        label_19->setText(QApplication::translate("PrescriptionTable", "\346\200\247\345\210\253:", nullptr));
        sex->setText(QApplication::translate("PrescriptionTable", "TextLabel", nullptr));
        label_22->setText(QApplication::translate("PrescriptionTable", "\345\274\200\345\205\267\346\227\245\346\234\237:", nullptr));
        diagnosistime->setText(QApplication::translate("PrescriptionTable", "TextLabel", nullptr));
        label_23->setText(QApplication::translate("PrescriptionTable", "\345\271\264\351\276\204:", nullptr));
        age->setText(QApplication::translate("PrescriptionTable", "TextLabel", nullptr));
        label_28->setText(QApplication::translate("PrescriptionTable", "R:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = medicineTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PrescriptionTable", "\350\215\257\345\223\201ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = medicineTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PrescriptionTable", "\350\215\257\345\223\201\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = medicineTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PrescriptionTable", "\350\256\241\350\264\271\345\215\225\344\275\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = medicineTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PrescriptionTable", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = medicineTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PrescriptionTable", "\345\211\202\351\207\217", nullptr));
        label_27->setText(QApplication::translate("PrescriptionTable", "\345\214\273\345\230\261", nullptr));
        label_25->setText(QApplication::translate("PrescriptionTable", "\350\257\212\346\262\273\345\214\273\347\224\237\357\274\232", nullptr));
        doctorname->setText(QApplication::translate("PrescriptionTable", "TextLabel", nullptr));
        submit->setText(QApplication::translate("PrescriptionTable", "\344\277\235\345\255\230\351\205\215\346\226\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrescriptionTable: public Ui_PrescriptionTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESCRIPTIONTABLE_H

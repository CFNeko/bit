/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *button_exit;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *boxUsername;
    QLabel *label_7;
    QComboBox *boxGender;
    QLabel *label_3;
    QLineEdit *boxID;
    QLabel *label_4;
    QLineEdit *boxPassword;
    QLabel *label_5;
    QLineEdit *boxPassword2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_register;

    void setupUi(QWidget *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(653, 473);
        verticalLayout_2 = new QVBoxLayout(SignUp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        button_exit = new QPushButton(SignUp);
        button_exit->setObjectName(QString::fromUtf8("button_exit"));

        verticalLayout_2->addWidget(button_exit, 0, Qt::AlignLeft);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);

        label_6 = new QLabel(SignUp);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman L"));
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        frame = new QFrame(SignUp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        boxUsername = new QLineEdit(frame);
        boxUsername->setObjectName(QString::fromUtf8("boxUsername"));

        verticalLayout->addWidget(boxUsername);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        boxGender = new QComboBox(frame);
        boxGender->addItem(QString());
        boxGender->addItem(QString());
        boxGender->setObjectName(QString::fromUtf8("boxGender"));

        verticalLayout->addWidget(boxGender);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        boxID = new QLineEdit(frame);
        boxID->setObjectName(QString::fromUtf8("boxID"));

        verticalLayout->addWidget(boxID);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        boxPassword = new QLineEdit(frame);
        boxPassword->setObjectName(QString::fromUtf8("boxPassword"));
        boxPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(boxPassword);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        boxPassword2 = new QLineEdit(frame);
        boxPassword2->setObjectName(QString::fromUtf8("boxPassword2"));
        boxPassword2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(boxPassword2);


        horizontalLayout_3->addWidget(frame);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 5);
        horizontalLayout_3->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pushButton_register = new QPushButton(SignUp);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));

        horizontalLayout_4->addWidget(pushButton_register);

        horizontalLayout_4->setStretch(0, 5);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(2, 1);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QWidget *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Form", nullptr));
        button_exit->setText(QApplication::translate("SignUp", "\351\200\200\345\207\272", nullptr));
        label_6->setText(QApplication::translate("SignUp", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("SignUp", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_7->setText(QApplication::translate("SignUp", "\345\271\264\351\276\204\357\274\232", nullptr));
        boxGender->setItemText(0, QApplication::translate("SignUp", "\347\224\267", nullptr));
        boxGender->setItemText(1, QApplication::translate("SignUp", "\345\245\263", nullptr));

        label_3->setText(QApplication::translate("SignUp", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("SignUp", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QApplication::translate("SignUp", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_register->setText(QApplication::translate("SignUp", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

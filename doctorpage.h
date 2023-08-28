#ifndef DOCTORPAGE_H
#define DOCTORPAGE_H

#include <QWidget>
<<<<<<< HEAD
#include <QtSql>
#include <QStackedWidget>
#include <QTableWidget>
#include "userfriendlyitems.h"
#include "registrationpage.h"
=======
#include <QMouseEvent>
#include"listtemplate.h"
#include<QLineEdit>
#include<QComboBox>
#include<QTextEdit>
#include<QTextEdit>
#include<QDebug>
#include<QPainter>
#include"prescriptioninquiry.h"
#include "recorditemtable.h"
#include "prescriptiontable.h"
#include "recorditemhistoryofdoctor.h"
#include "registraitondoctorpage.h"
>>>>>>> 27a7e08530f773446f5dec7f728fb9e3d6d93d6b

namespace Ui {
class DoctorPage;
}

<<<<<<< HEAD


//医生端界面类
=======
>>>>>>> 27a7e08530f773446f5dec7f728fb9e3d6d93d6b
class DoctorPage : public QWidget
{
    Q_OBJECT

public:
    explicit DoctorPage(QWidget *parent = nullptr);
    ~DoctorPage();
<<<<<<< HEAD

private:
    Ui::DoctorPage *ui;
    QStackedWidget *Pages = new QStackedWidget;
    CustomNavigationBar *NavigationBar = new CustomNavigationBar(Pages);
    QFrame *mainFrame;
    int *DoctorID;
=======
    void addCustomWidget();
    //左侧部分的代码
        QLabel *UserNameLabel;
        QLabel *NameLabel;
        QLabel *SexLabel;
        QLabel *DepartmentLabel;
        QLabel *AgeLabel;
        QLabel *OtherLabel;
        QLineEdit *UserNameLineEdit;
        QLineEdit *NameLineEdit;
        QComboBox *SexComBox;
        QLineEdit *DepartmentEdit;
        QLineEdit *AgeEdit;
        QGridLayout *LeftLayout;
        //右侧部分的代码
        QLabel *HeadLabel;
        QLabel *HeadIconLabel;
        QPushButton *UpdateHeadButn;
        QHBoxLayout *TopRightLayout;
        QLabel *IntroductionLabel;
        QTextEdit *IntroductionText;
        QVBoxLayout *RightLayout;


        //底部部分
        QPushButton *OKBtn;
        QPushButton *CancelBtn;
        QHBoxLayout *BtnLayout;

        void paintEvent(QPaintEvent *);



private slots:
        void on_prescription_inquiry_clicked();
        void on_PreToHome_Received();

private:
    Ui::DoctorPage *ui;
    ListTemplate* m_pListTemplate;
     PrescriptionInquiry* prescription_inquiry;
>>>>>>> 27a7e08530f773446f5dec7f728fb9e3d6d93d6b

};

#endif // DOCTORPAGE_H

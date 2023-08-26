#include "doctorpage.h"
#include "ui_doctorpage.h"
#include "userfriendlyitems.h"

#include <QFrame>
#include<QtSql>
#include<QTableWidget>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QLabel>
#include<QMessageBox>





//医生主页界面
DoctorPage::DoctorPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoctorPage),
    DoctorID(new int(1))
{
    ui->setupUi(this);

    //    查询医生的信息
    QString qs = "select * from doctor where doctor.dno = ";
    qs += QString(*DoctorID);
    qs += ";";
    QSqlQuery query;
    if (query.exec(qs)) {
        qDebug() << "Load Successfully! " << query.lastError();

    } else {
        qDebug() << "Error querying data: " << query.lastError();
    }

    //    总布局纵向
    QVBoxLayout *layout = new QVBoxLayout;
    {
        //        顶部横栏
        QHBoxLayout *top_h1 = new QHBoxLayout;
        {
            //   读入图片
            QLabel *imageLabel = new QLabel;  // 创建一个 QLabel 用于显示图片
            QPixmap image("/home/user/Qtworks/qq_tiyanfu/male.jpg");  // 加载图片
            QPixmap scaledImage = image.scaled(QSize(150, 150), Qt::KeepAspectRatio, Qt::SmoothTransformation); // 改变尺寸
            imageLabel->setPixmap(scaledImage); // 设置缩放后的图像
            imageLabel->setAlignment(Qt::AlignCenter);
            imageLabel->setScaledContents(true);
            imageLabel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

            top_h1->addWidget(imageLabel);
            top_h1->setStretchFactor(imageLabel, 1);

            top_h1->addStretch(5);
        }
        layout->addLayout(top_h1);
        layout->setStretchFactor(top_h1, 1);

        //        主体横框
        QHBoxLayout *main_h = new QHBoxLayout;
        {
            //            导航栏
            main_h->addWidget(NavigationBar);
            main_h->setStretchFactor(NavigationBar, 1);

            //            医生主页
            mainFrame = new QFrame;
            QVBoxLayout *mainFrame_v = new QVBoxLayout;
            {
                //                显示医生信息
                mainFrame_v->addStretch(1);

                QLabel *welcome = new QLabel;
                welcome->setText("为天地立心，为生民立命。");
                mainFrame_v->addWidget(welcome);
                mainFrame_v->setStretchFactor(welcome, 3);

                QLabel *name = new QLabel;
                name->setText(QString("姓名： " + query.value(2).toString()));
                mainFrame_v->addWidget(name);
                mainFrame_v->setStretchFactor(name, 2);


                QLabel *dno = new QLabel;
                dno->setText(QString("工号： " + query.value(0).toString()));
                mainFrame_v->addWidget(dno);
                mainFrame_v->setStretchFactor(dno, 2);

                QLabel *department = new QLabel;
                department->setText(QString("科室： " + query.value(8).toString()));
                mainFrame_v->addWidget(department);
                mainFrame_v->setStretchFactor(department, 2);

                QLabel *guide = new QLabel;
                guide->setText("左侧为导航栏，请根据需求点击相应的按钮以进入相应页面！");
                mainFrame_v->addWidget(guide);
                mainFrame_v->setStretchFactor(guide, 3);

                mainFrame_v->addStretch(2);

            }
            mainFrame->setLayout(mainFrame_v);
            main_h->addWidget(mainFrame);
            main_h->setStretchFactor(mainFrame, 4);

        }
        layout->addLayout(main_h);
        layout->setStretchFactor(main_h, 5);
    }
    this->setLayout(layout);
    this->setStyleSheet("background-image: url(/home/user/Qtworks/Medical_System_DoctorPart/DoctorPage/top.jpg);"
                        "background-repeat: no-repeat;"
                        "background-size: cover;");
    this->setFixedSize(1200, 900);
}

DoctorPage::~DoctorPage()
{
    delete ui;
}

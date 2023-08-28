#include "doctorpage.h"
#include "ui_doctorpage.h"
<<<<<<< HEAD
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
=======

DoctorPage::DoctorPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoctorPage)
{
    ui->setupUi(this);
    ui->Homepge->setStyleSheet(
                "QTabWidget::pane{ border:none; }"
                "QTabWidget::tab-bar{ alignment:left; }"
                "QTabBar::tab{ background:transparent; color:green; min-width:30ex; min-height:10ex; }"
                "QTabBar::tab:hover{ background:rgb(255, 255, 255, 100); }"
                "QTabBar::tab:selected{ border-color: white; background:white; color:green; }"
                );
    ui->frame->setStyleSheet(
                "background-color: rgba(255, 255, 255, 128);"
                );
    ui->registration_inquiry->setFixedSize(100,100);
    ui->registration_history->setFixedSize(100,100);
    prescription_inquiry = new PrescriptionInquiry;
    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents); // 创建垂直布局
    layout->setSpacing(10); // 设置布局的间距

    connect(ui->updatePushbutton, &QPushButton::clicked, this, &DoctorPage::addCustomWidget); // 点击 "Update" 按钮时添加自定义界面
    setWindowTitle("医生端主页");

    // 创建水平布局管理器
    QHBoxLayout *mainlayout = new QHBoxLayout;

    // 创建 QLabel 控件并设置图片
    QLabel *imageLabel1 = new QLabel;
    QPixmap pixmap1(":/resource111/1.png"); // 设置图片的路径和文件名
    imageLabel1->setPixmap(pixmap1);
    imageLabel1->setScaledContents(true); // 自适应大小

    QLabel *imageLabel2 = new QLabel;
    QPixmap pixmap2(":/resource111/1.png");
    imageLabel2->setPixmap(pixmap2);
    imageLabel2->setScaledContents(true);

    // 将 QLabel 控件添加到布局管理器
    mainlayout->addWidget(imageLabel1);
    mainlayout->addWidget(imageLabel2);

    ui->frame_5->setLayout(mainlayout);
    //实现从处方查询那个界面，跳回到首页
    connect(prescription_inquiry, SIGNAL(preToHome()), this, SLOT(on_PreToHome_Received()) );

    //       跳转函数
    connect(ui->registration_inquiry, &QPushButton::clicked, this, [=]
    {
        RegistraitonDoctorPage *r = new RegistraitonDoctorPage(nullptr, false);
        r->show();
    });

    connect(ui->registration_history, &QPushButton::clicked, this, [=]
    {
        RegistraitonDoctorPage *r = new RegistraitonDoctorPage(nullptr, true);
        r->show();
    });
>>>>>>> 27a7e08530f773446f5dec7f728fb9e3d6d93d6b
}

DoctorPage::~DoctorPage()
{
    delete ui;
}
<<<<<<< HEAD
=======

void DoctorPage::paintEvent(QPaintEvent*)
{
    QPainter painter1;
    painter1.begin(this);
    QPixmap pixmap1;
    pixmap1.load(":/resource111/background.jpg");
    painter1.drawPixmap(0,0,this->width(),this->height(),pixmap1);
}


void DoctorPage::addCustomWidget()
{
    QTextEdit* customWidget = new QTextEdit(ui->scrollAreaWidgetContents); // 创建自定义界面部件
    customWidget->setText("Title");

    customWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed); // 设置大小策略
    ui->scrollAreaWidgetContents->layout()->addWidget(customWidget); // 将自定义界面部件添加到垂直布局中

    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
}



void DoctorPage::on_prescription_inquiry_clicked()
{

    this->hide();
    prescription_inquiry->show();
}

void DoctorPage::on_PreToHome_Received()
{
    this->show();
    prescription_inquiry->close();

}
>>>>>>> 27a7e08530f773446f5dec7f728fb9e3d6d93d6b

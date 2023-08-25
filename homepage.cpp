#include "homepage.h"
#include "ui_homepage.h"
#include "listtemplate.h"
#include<QTextEdit>
#include<QDebug>
#include<QPainter>

HomePage::HomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomePage)
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
    ui->pushButton->setFixedSize(100,100);
    ui->pushButton_2->setFixedSize(100,100);
    ui->pushButton_3->setFixedSize(100,100);
    ui->pushButton_4->setFixedSize(100,100);

    QVBoxLayout* layout = new QVBoxLayout(ui->scrollAreaWidgetContents); // 创建垂直布局
       layout->setSpacing(10); // 设置布局的间距

      connect(ui->pushButton_5, &QPushButton::clicked, this, &HomePage::addCustomWidget); // 点击 "Update" 按钮时添加自定义界面

      setWindowTitle("患者端主页");

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


}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::paintEvent(QPaintEvent*)
{
    QPainter painter1;
    painter1.begin(this);
    QPixmap pixmap1;
    pixmap1.load(":/resource111/background.jpg");
    painter1.drawPixmap(0,0,this->width(),this->height(),pixmap1);




}

void HomePage::addCustomWidget()
{
    QTextEdit* customWidget = new QTextEdit(ui->scrollAreaWidgetContents); // 创建自定义界面部件
    customWidget->setText("Title");

    customWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed); // 设置大小策略
    ui->scrollAreaWidgetContents->layout()->addWidget(customWidget); // 将自定义界面部件添加到垂直布局中

    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
}

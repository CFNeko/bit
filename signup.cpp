#include "signup.h"
#include "ui_signup.h"
#include<QPainter>
#include<QDebug>
#include <QDebug>
#include <QSqlQuery>
#include<QFileInfo>
#include <QString>

#define Path_to_DB "/home/user/Desktop/bit/database.db"


SignUp::SignUp(QWidget *parent) :
    QWidget(parent),
    messageBox(nullptr),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
    //2.指定窗口大小--固定大小
    this->setFixedSize(900,600);

    //3.设置窗口左上角图标[这个功能没有实现]
    this->setWindowIcon(QIcon(":/new/prefix1/resource111/1.png"));

    //4.设置窗口标题
    this->setWindowTitle("registerWeb");


    connect(ui->button_exit,&QPushButton::clicked,this,&SignUp::on_pushButton_exit_clicked);
    connect(ui->pushButton_register,&QPushButton::clicked,
            [=](){
       myDBregister = QSqlDatabase::addDatabase("QSQLITE", "Register");
       QFileInfo checkFile(Path_to_DB);
       QString username = ui->boxUsername->text();
       QString gender = ui->boxGender->currentText();
       QString id = ui->boxID->text();
       QString password = ui->boxPassword2->text();
       QString temp = "INSERT INTO patient (name, gender, idcard, password) VALUES('" + username + "', '" + gender + "', '" + id + "', '" + password + "')" ;
       qDebug() << temp;
       myDBregister.open();
       QSqlQuery q;
       q.exec(temp);
    });

}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::paintEvent(QPaintEvent*)
{
    QPainter painter1;
    painter1.begin(this);
    QPixmap pixmap1;
    pixmap1.load(":/resource111/background.jpg");
    painter1.drawPixmap(0,0,this->width(),this->height(),pixmap1);



}


void SignUp::on_pushButton_exit_clicked()
{

    emit signalToMain();

}

void SignUp::on_pushButton_register_clicked()
{
    //如果信息正确，存储信息到数据库
    //传输信号给登录页面
    // emit signalTologin();

    //如果密码不正确，弹出提示框，并重新输入

     showMessageBox();

}

void SignUp::handleMessageBoxFinished(int result)
{
    if (messageBox != nullptr)
            {
                messageBox->deleteLater();
                messageBox = nullptr;
            }
}

void SignUp::showMessageBox()
{
    if (messageBox == nullptr)
            {
                messageBox = new QMessageBox(this);
                messageBox->setWindowTitle("提示"); // 设置标题文字
                messageBox->setText("您两次输入的密码不一致，请重试！");
                messageBox->setStandardButtons(QMessageBox::Ok);
                connect(messageBox, &QMessageBox::finished, this, &SignUp::handleMessageBoxFinished);
                messageBox->show();
            }
}

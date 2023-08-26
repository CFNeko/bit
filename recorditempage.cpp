#include "recorditempage.h"
#include "ui_recorditempage.h"

RecordItemPage::RecordItemPage(QWidget *parent, int dno, int pno, int rgno) :
    QWidget(parent),
    ui(new Ui::RecordItemPage),
    DoctorID(new int(dno)),
    PatientID(new int(pno)),
    RestractionID(new int(rgno)),
    isTextChanged(false),
    isPrescriptionChanged(false)
{
    ui->setupUi(this);

    QTableWidget *recordItemsTable = new QTableWidget;
                QTextEdit *newDescription = new QTextEdit;
                ImageDropWidget *addImage = new ImageDropWidget;
    RoundedRectButton *toPrescription = new RoundedRectButton;
    toPrescription->setText("编辑处方");
    RoundedRectButton *submit = new RoundedRectButton;
    submit->setText("保存并退出");

    QHBoxLayout *hlayout = new QHBoxLayout;
    {
        hlayout->addStretch(1);

        QVBoxLayout *vlayout = new QVBoxLayout;
        {
            //    查询病人名字
            QSqlQuery query;
            QString nameQuery = QString("select patient.name from patient where patient.pno = ? ;");
            query.prepare(nameQuery);
            query.addBindValue(*PatientID);
            QString info = QString("患者 ");
            info += query.value(0).toString();
            info += " 的病历详情";
            QLabel *topLabel = new QLabel;
            topLabel->setText(info);
            vlayout->addWidget(topLabel);
            vlayout->setStretchFactor(topLabel, 2);

            //    查询病人的病历
            QString recorditemsQuery = QString("select r.sendTime, r.diagnosis, i.desc, i.image, m.mname, p.num, p.advice "
                                               "from registration r, recorditems i, prescription p, medicine m "
                                               "where r.rno = i.rno and i.PrescriptionNo = p.prescriptionNo and p.mno = m.mno and i.pno = ?; ");
            query.prepare(recorditemsQuery);
            query.addBindValue(*PatientID);
            if (query.exec(recorditemsQuery)) {
                qDebug() << "Load Successfully! " << query.lastError();

            } else {
                qDebug() << "Error querying data: " << query.lastError();
            }
            //     添加一些内容到表格
            QStringList headerLabels;
            headerLabels << "就诊时间"<< "诊断" << "病情描述" << "相关图片" << "所开药品名" << "所开剂量" << "医嘱";
            recordItemsTable->setHorizontalHeaderLabels(headerLabels);
            if (query.exec()) {
                int row = 0;
                while (query.next()) {
                    recordItemsTable->insertRow(row);
                    for(int i = 0; i < 7; i++){
                        QTableWidgetItem *item = new QTableWidgetItem(query.value(i).toString());
                        recordItemsTable->setItem(row, i, item);
                    }
                    ++row;
                }
            } else {
                qDebug() << "Error querying data: " << query.lastError();
            }
            vlayout->addWidget(recordItemsTable);
            vlayout->setStretchFactor(recordItemsTable, 4);

            //            病情描述

            QLabel *desc = new QLabel;
            desc->setText("病情描述：");
            newDescription->setPlainText("请输入患者相应的病情描述!");
            vlayout->addWidget(desc);
            vlayout->setStretchFactor(desc, 1);
            vlayout->addWidget(newDescription);
            vlayout->setStretchFactor(newDescription, 4);

            //            图像上传
            QLabel *ima = new QLabel;
            desc->setText("相关影像：");
            vlayout->addWidget(ima);
            vlayout->setStretchFactor(ima, 1);
            vlayout->addWidget(addImage);
            vlayout->setStretchFactor(addImage, 4);

            vlayout->addWidget(toPrescription);
            vlayout->setStretchFactor(toPrescription, 2);

            vlayout->addWidget(submit);
            vlayout->setStretchFactor(submit, 2);

        }
        hlayout->addLayout(vlayout);
        hlayout->setStretchFactor(vlayout, 1);

        hlayout->addStretch(1);

    }

    this->setLayout(hlayout);

//    信号函数
    connect(toPrescription, &QPushButton::clicked, this, [this]
    {
        PrescriptionPage *p = new PrescriptionPage;
        p->show();
        isPrescriptionChanged = true;

    });
    connect(newDescription, &QTextEdit::textChanged, this, [this]
    {
        isTextChanged = true;
    });
    connect(submit, &QPushButton::clicked, this, [=]
    {
        if(isPrescriptionChanged == false){
            if(!isTextChanged && !addImage->hasImage()){
                QMessageBox::information(this, "操作成功", "您并未做出修改！");
            }else{
                            QMessageBox::information(this, "操作失败", "请先给出诊治处方！");
            }
        }
        else{
            if(isTextChanged || addImage->hasImage()){
                QPixmap image = *addImage->imageLabel->pixmap();
                QByteArray byteArray;
                QBuffer buffer(&byteArray);
                buffer.open(QIODevice::WriteOnly);
                image.save(&buffer, "PNG"); // 保存为PNG格式，您可以根据需要选择其他格式
                QString base64Image = QString::fromLatin1(byteArray.toBase64().data());
                QString updateString = "update recorditems "
                                      "insert recorditems(rno, desc, image, dno, pno) "
                                      "values(?, ?, ?, ?, ?);";
                QSqlQuery *updateQuery = new QSqlQuery;
                updateQuery->prepare(updateString);
                updateQuery->addBindValue(*RestractionID);
                updateQuery->addBindValue(newDescription->toPlainText());
                updateQuery->addBindValue(base64Image);
                updateQuery->addBindValue(*DoctorID);
                updateQuery->addBindValue(*PatientID);
                if(updateQuery->exec()){
                    QMessageBox::information(this, "操作成功", "成功修改病历！");
                    this->close();
                }else{
                    QMessageBox::information(this, "操作失败", "未成功修改病历！");
                }
            }else {
                QMessageBox::information(this, "操作成功", "您并未修改病历！");
                this->close();
            }
        }


    });


}

RecordItemPage::~RecordItemPage()
{
    delete ui;
}

#include "mainwindow.h"
#include "doctorpage.h"
#include "recorditempage.h"

#include <QApplication>
#include <QtSql>
#include <QMessageBox>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/user/Qtworks/qq_tiyanfu/database/database.db");
    if (!db.open()) {
        QMessageBox::critical(nullptr, "Error", "An error occurred: Fail to open database!");
    }
    qDebug() << "Database opened successfully";
//    MainWindow w;
//    w.show();

//    DoctorPage *d = new DoctorPage;
//    d->show();

<<<<<<< HEAD
    RecordItemPage *r = new RecordItemPage;
    r->show();
=======
//    RecordItemPage *r = new RecordItemPage;
//    r->show();
    RegisterWeb w;
    w.show();
>>>>>>> 27a7e08530f773446f5dec7f728fb9e3d6d93d6b
    return a.exec();
}

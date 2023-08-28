#include "registerweb.h"

#include <QApplication>

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

//    RecordItemPage *r = new RecordItemPage;
//    r->show();
    RegisterWeb w;
    w.show();
    return a.exec();
}

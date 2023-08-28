#ifndef DOCTORPAGE_H
#define DOCTORPAGE_H

#include <QWidget>
#include <QtSql>
#include <QStackedWidget>
#include <QTableWidget>
#include "userfriendlyitems.h"
#include "registrationpage.h"

namespace Ui {
class DoctorPage;
}



//医生端界面类
class DoctorPage : public QWidget
{
    Q_OBJECT

public:
    explicit DoctorPage(QWidget *parent = nullptr);
    ~DoctorPage();

private:
    Ui::DoctorPage *ui;
    QStackedWidget *Pages = new QStackedWidget;
    CustomNavigationBar *NavigationBar = new CustomNavigationBar(Pages);
    QFrame *mainFrame;
    int *DoctorID;

};

#endif // DOCTORPAGE_H

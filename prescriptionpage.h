#ifndef PRESCRIPTIONPAGE_H
#define PRESCRIPTIONPAGE_H

#include <QWidget>
#include <QtSql>
#include <QStackedWidget>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QUrl>
#include <QTextEdit>
#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include <QLineEdit>

#include "userfriendlyitems.h"
#include "registrationpage.h"

namespace Ui {
class PrescriptionPage;
}

class PrescriptionPage : public QWidget
{
    Q_OBJECT

public:
    explicit PrescriptionPage(QWidget *parent = nullptr, int dno = 1, int pno = 1, int rgno = 1);
    ~PrescriptionPage();

private:
    Ui::PrescriptionPage *ui;
    int *DoctorID;
    int *PatientID;
    int *RegistrationID;
    int *mno;
};

#endif // PRESCRIPTIONPAGE_H

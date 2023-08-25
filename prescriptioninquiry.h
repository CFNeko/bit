#ifndef PRESCRIPTIONINQUIRY_H
#define PRESCRIPTIONINQUIRY_H

#include <QWidget>

namespace Ui {
class PrescriptionInquiry;
}

class PrescriptionInquiry : public QWidget
{
    Q_OBJECT

public:
    explicit PrescriptionInquiry(QWidget *parent = nullptr);
    ~PrescriptionInquiry();

    void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_clicked();

private:
    Ui::PrescriptionInquiry *ui;
signals:
    void preToHome();
};

#endif // PRESCRIPTIONINQUIRY_H

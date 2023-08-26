#ifndef RECORDITEMPAGE_H
#define RECORDITEMPAGE_H

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

#include "userfriendlyitems.h"
#include "registrationpage.h"
#include "prescriptionpage.h"

namespace Ui {
class RecordItemPage;
}

class RecordItemPage : public QWidget
{
    Q_OBJECT

public:
    explicit RecordItemPage(QWidget *parent = nullptr, int dno = 1, int pno = 1, int rgno = 1);
    ~RecordItemPage();

private:
    Ui::RecordItemPage *ui;
    int *DoctorID;
    int *PatientID;
    int *RestractionID;
    bool isTextChanged;
    bool isPrescriptionChanged;

};

class ImageDropWidget : public QWidget
{
    Q_OBJECT

public:
    ImageDropWidget(QWidget *parent = nullptr)
        : QWidget(parent)
    {
        setAcceptDrops(true); // 启用拖放事件

        imageLabel = new QLabel("Drop Image Here", this);
        imageLabel->setAlignment(Qt::AlignCenter);

        QVBoxLayout *layout = new QVBoxLayout;
        layout->addWidget(imageLabel);
        setLayout(layout);
    }

    bool hasImage() const
    {
        return !imageLabel->pixmap()->isNull();
    }
    QLabel *imageLabel;

protected:
    void dragEnterEvent(QDragEnterEvent *event) override
    {
        if (event->mimeData()->hasUrls() && event->mimeData()->urls().at(0).isLocalFile()) {
            event->acceptProposedAction(); // 接受拖放
        }
    }

    void dropEvent(QDropEvent *event) override
    {
        const QUrl imageUrl = event->mimeData()->urls().at(0);
        if (imageUrl.isLocalFile()) {
            QPixmap image(imageUrl.toLocalFile());
            if (!image.isNull()) {
                imageLabel->setPixmap(image.scaled(imageLabel->size(), Qt::KeepAspectRatio));
            }
        }
    }

private:

};

#endif // RECORDITEMPAGE_H

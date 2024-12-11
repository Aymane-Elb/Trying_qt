#include "addbook.h"
#include "ui_addbook.h"
#include<QFileDialog>
#include <QMessageBox>
#include<QDesktopServices>
#include<QUrl>
AddBook::AddBook(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddBook)
{
    ui->setupUi(this);
}

AddBook::~AddBook()
{
    delete ui;
}
void AddBook::on_parccourriBtn_clicked()
{
    QString Book = QFileDialog::getOpenFileName
        (
            this,
            tr("Open File"),
            "C://",
            "PDF Files (*.pdf);;All Files (*.*)" // File filter
            );
    QDesktopServices::openUrl(QUrl("file:///"+Book,QUrl::TolerantMode));
    ui->urllineEdit->setText(Book);

}


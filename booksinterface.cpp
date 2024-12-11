#include "booksinterface.h"
#include "ui_booksinterface.h"
#include<QPrinter>
#include<QPrintDialog>
BooksInterface::BooksInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BooksInterface)
{
    ui->setupUi(this);
}

BooksInterface::~BooksInterface()
{
    delete ui;
}

void BooksInterface::on_printBtn_clicked()
{
    /*QPrinter func;
    func.setPrinterName("User");
    QPrintDialog dialog (&func,this);
    if(dialog.exec()==QDialog::Rejected) return;*/


}


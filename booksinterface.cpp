#include "booksinterface.h"
#include "ui_booksinterface.h"

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

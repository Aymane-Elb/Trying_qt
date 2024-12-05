#include "motDePasse.h"
#include "ui_motDePasse.h"
#include "mainwindow.h"
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked(){
    this->destroy(true,true);
}

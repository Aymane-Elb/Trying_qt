#include "creeCompte.h"
#include "ui_creeCompte.h"

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);
}

secDialog::~secDialog()
{
    delete ui;
}

void secDialog::on_pushButton_2_clicked()
{
    this->destroy(true,true);
}


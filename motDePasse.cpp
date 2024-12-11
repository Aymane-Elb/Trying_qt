#include "motDePasse.h"
#include "ui_motDePasse.h"
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

void Dialog::on_restaurecompteBtn_clicked()
{
    if((ui->courrielLine->text()).isEmpty())
    {
        ui->msgmissemailLabel->setText("Le champ email est obligatoire");
    }else {
        ui->msgmissemailLabel->setText("");
    }
}


void Dialog::on_sidentifierBtn_clicked()
{
    this->destroy(true);
}


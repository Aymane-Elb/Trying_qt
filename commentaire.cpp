#include "commentaire.h"
#include "ui_commentaire.h"

commentaire::commentaire(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::commentaire)
{
    ui->setupUi(this);
}

commentaire::~commentaire()
{
    delete ui;
}

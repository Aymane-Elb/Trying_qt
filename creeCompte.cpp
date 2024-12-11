#include "creeCompte.h"
#include "ui_creeCompte.h"
#include<QMessageBox>
#include<QtSql>
#include<QSqlDatabase>
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


void secDialog::on_pushButton_clicked()
{
    //connecting to my sql database(user-info)
    QSqlDatabase userDatabase;
    userDatabase.setPort(3307);
    userDatabase = QSqlDatabase::addDatabase("QMYSQL");
    userDatabase.setHostName("localhost");
    userDatabase.setUserName("root");
    userDatabase.setPassword("");
    userDatabase.setDatabaseName("user-info");
    if(userDatabase.open())
    {
        //retreving data
        QString courriel = ui->courrielLine->text();
        QString password = ui->motdepasseLine->text();
        QString name = ui->surnomLine->text();
        QSqlQuery qry;
        qry.prepare("INSERT INTO creecompte (Courriel,Password,Surnom)"
                    "VALUES(:courriel,:password,:name)");
        qry.bindValue(":courriel",courriel);
        qry.bindValue(":password",password);
        qry.bindValue(":name",name);
        if(qry.exec())
        {
            QMessageBox::information(this,"insertion complete","data inserted");
        }else
        {
            QMessageBox::information(this,"insertion not completed","data did not insert");
        }
    }else{
        QMessageBox::information(this,"Not connected","Database is not connected");
    }
}


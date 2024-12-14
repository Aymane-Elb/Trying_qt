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
    // Connecting to the SQLite database
    QSqlDatabase userDatabase = QSqlDatabase::addDatabase("QSQLITE");
    userDatabase.setDatabaseName("C:/Users/pc/Downloads/BIBLIO (1).db");
    if (userDatabase.open()) {
        // Retrieving data from UI
        QString Email = ui->courrielLine->text();
        QString password = ui->motdepasseLine->text();
        QString surNom = ui->surnomLine->text();

        // Preparing the SQL query
        QSqlQuery qry;
        qry.prepare("INSERT INTO Utilisateurs (Email, MotDePasse,surNom) "
                    "VALUES (:Email, :password, :name)");
        qry.bindValue(":Email", Email);
        qry.bindValue(":password", password);
        qry.bindValue(":name", surNom);

        // Executing the query
        if (qry.exec()) {
            QMessageBox::information(nullptr, "Insertion Complete", "Data inserted successfully.");
        } else {
            QMessageBox::critical(nullptr, "Insertion Failed", "Failed to insert data.");
        }
    } else {
        QMessageBox::critical(nullptr, "Database Connection Failed", "Could not connect to the database.");
    }

}


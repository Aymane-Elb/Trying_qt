#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"motDePasse.h"
#include"creeCompte.h"
#include<QSqlDatabase>
#include<QSql>
#include<QSqlQuery>
#include<QMessageBox>
#include<QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->msgMotdepasseLabel->setText("<a href=\"openDialog\">Vous avez oublié votre mot de passe ?</a>");
    ui->msgMotdepasseLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    secDialog slam;
    slam.setModal(true);
    slam.exec();
}


void MainWindow::on_msgMotdepasseLabel_linkActivated(const QString &link)
{
    Dialog dialog;
    if(link=="openDialog"){
        dialog.setModal(true);
        dialog.exec();
    }
}


void MainWindow::on_sidentifierBtn_clicked()
{
    if((ui->courrielLineEdit->text()).isEmpty() || ui->passwordLineedit->text().isEmpty())
    {
        ui->msgIncorrectEmailLabel->setText("Incorrect email or password");
    }else {
        ui->msgIncorrectEmailLabel->setText("");


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
            QString courriel = ui->courrielLineEdit->text();
            QString password = ui->passwordLineedit->text();
            QSqlQuery qry;
            qry.prepare("INSERT INTO userIdentification (Courriel,Password)"
                        "VALUES(:courriel,:password)");
            qry.bindValue(":courriel",courriel);
            qry.bindValue(":password",password);
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
}


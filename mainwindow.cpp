#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"motDePasse.h"
#include"creeCompte.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_2->setText("<a href=\"openDialog\">Vous avez oublié votre mot de passe ?</a>");
    ui->label_2->setTextInteractionFlags(Qt::TextBrowserInteraction);
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


void MainWindow::on_label_2_linkActivated(const QString &link)
{
    Dialog dialog;
    if(link=="openDialog"){
        dialog.setModal(true);
        dialog.exec();
    }
}


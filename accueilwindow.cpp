#include "accueilwindow.h"
#include "ui_accueilwindow.h"
#include<QPixmap>
#include<QPalette>
AccueilWindow::AccueilWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AccueilWindow)
{
    ui->setupUi(this);

}

AccueilWindow::~AccueilWindow()
{
    delete ui;
}


void AccueilWindow::on_darkmodeBtn_clicked(bool checked)
{
    if(checked==true){
        this->setStyleSheet("QMainWindow {"
                            "    background-color: #2e2e2e;"
                            "    color: white;}"
                            "QPushButton{"
                            "background-color: white;"
                            "color: black;}"
                            "QPushButton:hover{"
                            "background-color: #acacac;"
                            "color: white;"
                            "font-weight:bold;"
                            "border:1px solid white ;"
                            "border-radius: 6px;}"
                            "QLineEdit{"
                            "color: black;"
                            "background-color: white;}"
                            );
        QPixmap pix("C:/Users/pc/Downloads/Design sans titre (1).png");
        ui->picLabel->setPixmap(pix);
    }else if(checked==false){
        this->setStyleSheet("background-color: white;");
        ui->picLabel->show();
        QPixmap pix("C:/Users/pc/Downloads/Design sans titre.png");
        ui->picLabel->setPixmap(pix);
    }
}



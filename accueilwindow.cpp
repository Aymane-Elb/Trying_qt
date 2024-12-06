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

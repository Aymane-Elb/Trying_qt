#include "accueilwindow.h"
#include "ui_accueilwindow.h"

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

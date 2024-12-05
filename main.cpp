#include "mainwindow.h"
#include"accueilwindow.h"
#include<QPushButton>
#include <QApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AccueilWindow z;
    z.show();
    //MainWindow w;
   // w.show();
    return a.exec();
}

#include "mainwindow.h"
#include"accueilwindow.h"
#include"booksinterface.h"
#include<QPixmap>
#include<QPushButton>
#include <QApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BooksInterface n;
    n.show();
    AccueilWindow z;
    z.show();
    MainWindow w;
    w.show();
    return a.exec();
}

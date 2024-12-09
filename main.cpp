/*#include "mainwindow.h"
#include"accueilwindow.h"
#include"booksinterface.h"
#include"addbook.h"*/
#include"creeCompte.h"
#include<QPixmap>
#include<QPushButton>
#include <QApplication>
#include<QDebug>
#include <QCoreApplication>
#include <QSqlDatabase>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << QSqlDatabase::drivers();
    secDialog h;
    h.show();
    /*AddBook u;
    u.show();
    BooksInterface n;
    n.show();
    AccueilWindow z;
    z.show();
    MainWindow w;
    w.show();*/
    return a.exec();
}

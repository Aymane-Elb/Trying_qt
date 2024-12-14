#include "mainwindow.h"
#include"accueilwindow.h"
#include"booksinterface.h"
#include"addbook.h"
#include"creeCompte.h"
#include"commentaire.h"
#include"motDePasse.h"
#include<QPixmap>
#include<QPushButton>
#include <QApplication>
#include<QDebug>
#include <QCoreApplication>
#include <QSqlDatabase>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AccueilWindow z;
    z.show();
    commentaire e;
    e.show();
    Dialog y;
    y.show();
    secDialog h;
    h.show();
    AddBook u;
    u.show();
    BooksInterface n;
    n.show();
    MainWindow w;
    w.show();
    return a.exec();
}

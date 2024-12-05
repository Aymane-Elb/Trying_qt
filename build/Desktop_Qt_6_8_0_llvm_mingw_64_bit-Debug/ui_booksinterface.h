/********************************************************************************
** Form generated from reading UI file 'booksinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSINTERFACE_H
#define UI_BOOKSINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooksInterface
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BooksInterface)
    {
        if (BooksInterface->objectName().isEmpty())
            BooksInterface->setObjectName("BooksInterface");
        BooksInterface->resize(800, 600);
        centralwidget = new QWidget(BooksInterface);
        centralwidget->setObjectName("centralwidget");
        BooksInterface->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BooksInterface);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        BooksInterface->setMenuBar(menubar);
        statusbar = new QStatusBar(BooksInterface);
        statusbar->setObjectName("statusbar");
        BooksInterface->setStatusBar(statusbar);

        retranslateUi(BooksInterface);

        QMetaObject::connectSlotsByName(BooksInterface);
    } // setupUi

    void retranslateUi(QMainWindow *BooksInterface)
    {
        BooksInterface->setWindowTitle(QCoreApplication::translate("BooksInterface", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksInterface: public Ui_BooksInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSINTERFACE_H

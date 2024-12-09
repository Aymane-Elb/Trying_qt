#ifndef ACCUEILWINDOW_H
#define ACCUEILWINDOW_H

#include <QMainWindow>
#include<QDialog>
#include"mainwindow.h"
namespace Ui {
class AccueilWindow;
}

class AccueilWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AccueilWindow(QWidget *parent = nullptr);
    ~AccueilWindow();

private slots:
   void on_darkmodeBtn_clicked(bool checked);


    //void on_sidentifierLink_linkActivated(const QString &link);

private:
    Ui::AccueilWindow *ui;
    MainWindow *H;
};

#endif // ACCUEILWINDOW_H

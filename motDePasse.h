#ifndef MOTDEPASSE_H
#define MOTDEPASSE_H
#include"mainwindow.h"
#include <QDialog>
#include <QMainWindow>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:


    void on_pushButton_2_clicked();

    void on_restaurecompteBtn_clicked();

    void on_sidentifierBtn_clicked();

private:
    Ui::Dialog *ui;
};

#endif // MOTDEPASSE_H

#ifndef MOTDEPASSE_H
#define MOTDEPASSE_H

#include <QDialog>
#include <QMainWindow>
#include<QSqlDatabase>
#include<QSql>
#include<QSqlQuery>
#include<QMessageBox>
#include <QSqlError>
#include<QString>
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

    void on_sidentifierBtn_clicked();

    void on_restaurecompteBtn_clicked();

private:
    Ui::Dialog *ui;
};

#endif // MOTDEPASSE_H

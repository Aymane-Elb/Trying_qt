#ifndef CREECOMPTE_H
#define CREECOMPTE_H

#include <QDialog>
#include <QMainWindow>
namespace Ui {
class secDialog;
}

class secDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secDialog(QWidget *parent = nullptr);
    ~secDialog();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::secDialog *ui;
};

#endif // CREECOMPTE_H

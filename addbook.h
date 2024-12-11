#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QMainWindow>

namespace Ui {
class AddBook;
}

class AddBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddBook(QWidget *parent = nullptr);
    ~AddBook();

private slots:
    void on_parccourriBtn_clicked();

private:
    Ui::AddBook *ui;
};

#endif // ADDBOOK_H

#ifndef BOOKSINTERFACE_H
#define BOOKSINTERFACE_H

#include <QMainWindow>

namespace Ui {
class BooksInterface;
}

class BooksInterface : public QMainWindow
{
    Q_OBJECT

public:
    explicit BooksInterface(QWidget *parent = nullptr);
    ~BooksInterface();

private:
    Ui::BooksInterface *ui;
};

#endif // BOOKSINTERFACE_H
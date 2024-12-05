#ifndef ACCUEILWINDOW_H
#define ACCUEILWINDOW_H

#include <QMainWindow>

namespace Ui {
class AccueilWindow;
}

class AccueilWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AccueilWindow(QWidget *parent = nullptr);
    ~AccueilWindow();

private:
    Ui::AccueilWindow *ui;
};

#endif // ACCUEILWINDOW_H

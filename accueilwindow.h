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

private slots:
    void on_darkmodeBtn_clicked(bool checked);


private:
    Ui::AccueilWindow *ui;
};

#endif // ACCUEILWINDOW_H

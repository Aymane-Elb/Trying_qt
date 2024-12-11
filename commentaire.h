#ifndef COMMENTAIRE_H
#define COMMENTAIRE_H

#include <QDialog>

namespace Ui {
class commentaire;
}

class commentaire : public QDialog
{
    Q_OBJECT

public:
    explicit commentaire(QWidget *parent = nullptr);
    ~commentaire();

private:
    Ui::commentaire *ui;
};

#endif // COMMENTAIRE_H

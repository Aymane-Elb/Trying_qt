#include "motDePasse.h"
#include "ui_motDePasse.h"
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked(){
    this->destroy(true,true);
}

void Dialog::on_sidentifierBtn_clicked()
{
    this->destroy(true);
}


void Dialog::on_restaurecompteBtn_clicked()
{
    // Connecting to the SQLite database
    QSqlDatabase userDatabase = QSqlDatabase::addDatabase("QSQLITE");
    userDatabase.setDatabaseName("C:/Users/pc/Downloads/BIBLIO (1).db");

    if (userDatabase.open()) {
        // Retrieving data from UI
        QString Email = ui->courrielLine->text();

        // Check if the email field is empty
        if (Email.isEmpty()) {
            ui->msgmissemailLabel->setText("Le champ email est obligatoire");
            return; // Exit if the email is empty
        } else {
            ui->msgmissemailLabel->setText("");
        }

        // Preparing the SQL query to check if the email exists
        QSqlQuery qry;
        qry.prepare("SELECT MotDePasse FROM Utilisateurs WHERE Email = :email");
        qry.bindValue(":email", Email); // Bind the user-provided email

        // Executing the query
        if (qry.exec()) {
            if (qry.next()) { // Check if a matching email is found
                QString motDePasse = qry.value(0).toString(); // Get the password
                QMessageBox::information(nullptr, "Mot de Passe", "Le mot de passe est : " + motDePasse);
            } else {
                QMessageBox::warning(nullptr, "Email non trouvé", "Aucun utilisateur trouvé avec cet email.");
            }
        } else {
            QMessageBox::critical(nullptr, "Erreur SQL", "Erreur lors de l'exécution de la requête : " + qry.lastError().text());
        }
    } else {
        QMessageBox::critical(nullptr, "Erreur de Connexion", "Impossible de se connecter à la base de données.");
    }

}


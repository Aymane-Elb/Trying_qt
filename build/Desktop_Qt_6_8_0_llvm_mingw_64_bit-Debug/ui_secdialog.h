/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *secDialog)
    {
        if (secDialog->objectName().isEmpty())
            secDialog->setObjectName("secDialog");
        secDialog->resize(526, 451);
        secDialog->setMaximumSize(QSize(16777215, 16777215));
        widget = new QWidget(secDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 531, 375));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(15, 0, 15, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(495, 76));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setStyleStrategy(QFont::PreferDefault);
        font1.setHintingPreference(QFont::PreferNoHinting);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("margin: 0;\n"
"padding: 0;"));
        label_2->setFrameShape(QFrame::Shape::NoFrame);
        label_2->setFrameShadow(QFrame::Shadow::Plain);
        label_2->setTextFormat(Qt::TextFormat::AutoText);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_2->setWordWrap(true);
        label_2->setMargin(10);
        label_2->setIndent(-1);
        label_2->setOpenExternalLinks(false);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMaximumSize(QSize(16777215, 32));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        lineEdit_2->setFont(font2);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setMaximumSize(QSize(16777215, 32));
        lineEdit_3->setFont(font2);
        lineEdit_3->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(16777215, 32));
        lineEdit->setFont(font2);

        verticalLayout->addWidget(lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 15));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(10);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: red;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(label_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(16777215, 40));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setItalic(false);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(85, 166, 217);\n"
"border-radius: 6px;}\n"
"QPushButton:hover{\n"
"background-color: rgb(85, 158, 217);\n"
"border: 1px solid #337ab7;\n"
"}"));

        verticalLayout->addWidget(pushButton);

        widget1 = new QWidget(secDialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 380, 501, 61));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(170, 40));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: gray;"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(secDialog);

        QMetaObject::connectSlotsByName(secDialog);
    } // setupUi

    void retranslateUi(QDialog *secDialog)
    {
        secDialog->setWindowTitle(QCoreApplication::translate("secDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("secDialog", "Cr\303\251er un compte", nullptr));
        label_2->setText(QCoreApplication::translate("secDialog", "Cr\303\251ez un compte pour convertir et envoyer des livres vers d'autres plateformes, les ajouter dans vos Favoris et listes de livres, et bien plus encore.", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("secDialog", "Courriel", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("secDialog", "Mot de passe", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("secDialog", "Surnom", nullptr));
        label_3->setText(QCoreApplication::translate("secDialog", "Les info n\303\251cessaires n'ont pas \303\251t\303\251 remplies", nullptr));
        pushButton->setText(QCoreApplication::translate("secDialog", "Cr\303\251er un compte", nullptr));
        label_4->setText(QCoreApplication::translate("secDialog", "On se conna\303\256t d\303\251j\303\240?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("secDialog", "S'identifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secDialog: public Ui_secDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H

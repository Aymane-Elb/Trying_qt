/********************************************************************************
** Form generated from reading UI file 'motDePasse.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTDEPASSE_H
#define UI_MOTDEPASSE_H

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

class Ui_Dialog
{
public:
    QPushButton *restaurecompteBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *courrielLine;
    QLabel *msgmissemailLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *sidentifierBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(423, 259);
        restaurecompteBtn = new QPushButton(Dialog);
        restaurecompteBtn->setObjectName("restaurecompteBtn");
        restaurecompteBtn->setGeometry(QRect(90, 140, 251, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        restaurecompteBtn->setFont(font);
        restaurecompteBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        restaurecompteBtn->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(85, 166, 217);\n"
"border-radius: 6px;}\n"
"QPushButton:hover{\n"
"background-color: rgb(85, 158, 217);\n"
"border: 1px solid #337ab7;\n"
"}"));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 402, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(false);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label);

        courrielLine = new QLineEdit(layoutWidget);
        courrielLine->setObjectName("courrielLine");
        courrielLine->setMinimumSize(QSize(400, 32));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        courrielLine->setFont(font2);

        verticalLayout_2->addWidget(courrielLine);

        msgmissemailLabel = new QLabel(layoutWidget);
        msgmissemailLabel->setObjectName("msgmissemailLabel");
        sizePolicy.setHeightForWidth(msgmissemailLabel->sizePolicy().hasHeightForWidth());
        msgmissemailLabel->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(false);
        msgmissemailLabel->setFont(font3);
        msgmissemailLabel->setStyleSheet(QString::fromUtf8("color:red;"));
        msgmissemailLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(msgmissemailLabel);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 180, 402, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(310, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(10);
        label_2->setFont(font4);

        horizontalLayout->addWidget(label_2);

        sidentifierBtn = new QPushButton(layoutWidget1);
        sidentifierBtn->setObjectName("sidentifierBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sidentifierBtn->sizePolicy().hasHeightForWidth());
        sidentifierBtn->setSizePolicy(sizePolicy1);
        sidentifierBtn->setMaximumSize(QSize(150, 40));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        sidentifierBtn->setFont(font5);
        sidentifierBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sidentifierBtn->setStyleSheet(QString::fromUtf8("background-color: gray;"));

        horizontalLayout->addWidget(sidentifierBtn);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        restaurecompteBtn->setText(QCoreApplication::translate("Dialog", "Restaurer l'acc\303\250s", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Restaurer l\342\200\231acc\303\250s \303\240 votre compte", nullptr));
        courrielLine->setPlaceholderText(QCoreApplication::translate("Dialog", "Courriel", nullptr));
        msgmissemailLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "Vous vous souvenez de votre mot de passe ?", nullptr));
        sidentifierBtn->setText(QCoreApplication::translate("Dialog", "S'identifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTDEPASSE_H

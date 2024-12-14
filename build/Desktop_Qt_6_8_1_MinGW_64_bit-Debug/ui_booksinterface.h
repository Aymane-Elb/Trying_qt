/********************************************************************************
** Form generated from reading UI file 'booksinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSINTERFACE_H
#define UI_BOOKSINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BooksInterface
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *printBtn;
    QPushButton *pushButton_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_16;
    QPushButton *pushButton_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QLabel *label_15;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BooksInterface)
    {
        if (BooksInterface->objectName().isEmpty())
            BooksInterface->setObjectName("BooksInterface");
        BooksInterface->resize(800, 600);
        BooksInterface->setMinimumSize(QSize(800, 600));
        BooksInterface->setMaximumSize(QSize(800, 600));
        BooksInterface->setSizeIncrement(QSize(600, 600));
        centralwidget = new QWidget(BooksInterface);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 50, 801, 411));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(8, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");

        verticalLayout_2->addWidget(label_12);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");

        verticalLayout_2->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName("label_14");

        verticalLayout_2->addWidget(label_14);


        horizontalLayout_2->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 460, 801, 121));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout->setContentsMargins(0, 72, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(150, 35));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{background-color: rgb(0, 255, 0);}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(150, 35));
        pushButton_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5{background-color: rgb(0, 255, 0);}"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        pushButton_5->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMaximumSize(QSize(150, 35));
        pushButton_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("#pushButton_7{background-color: rgb(0, 255, 0);}"));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::MailForward));
        pushButton_7->setIcon(icon2);

        horizontalLayout->addWidget(pushButton_7);

        printBtn = new QPushButton(layoutWidget1);
        printBtn->setObjectName("printBtn");
        printBtn->setMaximumSize(QSize(150, 35));
        printBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        printBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        printBtn->setIcon(icon3);

        horizontalLayout->addWidget(printBtn);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(150, 35));
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"	background-color: rgb(0, 255, 0);}"));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::MailSend));
        pushButton_3->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_3->raise();
        printBtn->raise();
        pushButton_7->raise();
        pushButton_5->raise();
        pushButton->raise();
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(570, 0, 222, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(31);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName("label_16");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setUnderline(true);
        label_16->setFont(font);
        label_16->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(1, 174, 222);\n"
"text-decoration : underline dotted rgb(1, 174, 222) ;\n"
"}\n"
"QLabel:hover{color: rgb(40, 40, 40);\n"
"text-decoration : none ;\n"
"font-weight: bold;\n"
"}"));
        label_16->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_16);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setMaximumSize(QSize(40, 40));
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(73, 175, 208);\n"
"border-radius: 20px ;\n"
"border: 1px  solid white rgb(73, 175, 215) ;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(33, 144, 180);\n"
"}"));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        pushButton_2->setIcon(icon5);

        horizontalLayout_4->addWidget(pushButton_2);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 10, 111, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(30, 30));
        pushButton_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);\n"
"border-radius: 20px;"));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        pushButton_4->setIcon(icon6);

        horizontalLayout_3->addWidget(pushButton_4);

        label_15 = new QLabel(layoutWidget3);
        label_15->setObjectName("label_15");
        QFont font1;
        font1.setUnderline(true);
        label_15->setFont(font1);

        horizontalLayout_3->addWidget(label_15);

        BooksInterface->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BooksInterface);
        statusbar->setObjectName("statusbar");
        BooksInterface->setStatusBar(statusbar);

        retranslateUi(BooksInterface);

        QMetaObject::connectSlotsByName(BooksInterface);
    } // setupUi

    void retranslateUi(QMainWindow *BooksInterface)
    {
        BooksInterface->setWindowTitle(QCoreApplication::translate("BooksInterface", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("BooksInterface", "Titre de livre :", nullptr));
        label->setText(QCoreApplication::translate("BooksInterface", "Auteur :", nullptr));
        label_2->setText(QCoreApplication::translate("BooksInterface", "description :", nullptr));
        label_3->setText(QCoreApplication::translate("BooksInterface", "categories :", nullptr));
        label_4->setText(QCoreApplication::translate("BooksInterface", "ann\303\251e :", nullptr));
        label_6->setText(QCoreApplication::translate("BooksInterface", "langue :", nullptr));
        label_7->setText(QCoreApplication::translate("BooksInterface", "Pages :", nullptr));
        label_8->setText(QCoreApplication::translate("BooksInterface", "Titre de livre", nullptr));
        label_9->setText(QCoreApplication::translate("BooksInterface", "Auteur", nullptr));
        label_10->setText(QCoreApplication::translate("BooksInterface", "description", nullptr));
        label_11->setText(QCoreApplication::translate("BooksInterface", "categories", nullptr));
        label_12->setText(QCoreApplication::translate("BooksInterface", "ann\303\251e", nullptr));
        label_13->setText(QCoreApplication::translate("BooksInterface", "langue", nullptr));
        label_14->setText(QCoreApplication::translate("BooksInterface", "pages", nullptr));
        pushButton->setText(QCoreApplication::translate("BooksInterface", "Lire ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("BooksInterface", "T\303\251l\303\251charger", nullptr));
        pushButton_7->setText(QCoreApplication::translate("BooksInterface", "Comment", nullptr));
        printBtn->setText(QCoreApplication::translate("BooksInterface", "Print", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BooksInterface", "Partager", nullptr));
        label_16->setText(QCoreApplication::translate("BooksInterface", "se connecter", nullptr));
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        label_15->setText(QCoreApplication::translate("BooksInterface", "Titre de livre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BooksInterface: public Ui_BooksInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSINTERFACE_H

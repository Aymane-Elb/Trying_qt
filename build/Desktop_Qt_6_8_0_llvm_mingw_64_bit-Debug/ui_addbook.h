/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddBook)
    {
        if (AddBook->objectName().isEmpty())
            AddBook->setObjectName("AddBook");
        AddBook->resize(797, 292);
        centralwidget = new QWidget(AddBook);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 751, 111));
        label->setMaximumSize(QSize(800, 150));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Unicode MS")});
        font.setPointSize(16);
        label->setFont(font);
        label->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(65, 118, 661, 191));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(650, 36));

        verticalLayout_2->addWidget(lineEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(230, 9, 0, 60);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(200, 35));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(0, 255, 127);\n"
"color: white;\n"
"border: 1px solid white;\n"
"border-radius : 6px;\n"
"display: block;\n"
"justify-content: center;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 230, 127);}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        pushButton_3->setIcon(icon);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(200, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(0, 255, 127);\n"
"color: white;\n"
"border: 1px solid white;\n"
"border-radius : 6px;\n"
"display: block;\n"
"justify-content: center;\n"
"}\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 230, 127);}"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("list-add")));
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        AddBook->setCentralWidget(centralwidget);
        label->raise();
        lineEdit->raise();
        pushButton_3->raise();
        widget->raise();
        statusbar = new QStatusBar(AddBook);
        statusbar->setObjectName("statusbar");
        AddBook->setStatusBar(statusbar);

        retranslateUi(AddBook);

        QMetaObject::connectSlotsByName(AddBook);
    } // setupUi

    void retranslateUi(QMainWindow *AddBook)
    {
        AddBook->setWindowTitle(QCoreApplication::translate("AddBook", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("AddBook", "Add your paper books to share them with others.Before adding books to our system you need to Log In", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AddBook", "Parccourir", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddBook: public Ui_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
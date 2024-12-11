/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *courrielLineEdit;
    QLineEdit *passwordLineedit;
    QLabel *msgMotdepasseLabel;
    QLabel *msgIncorrectEmailLabel;
    QPushButton *sidentifierBtn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *creeuncompteBtn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(530, 386);
        MainWindow->setMaximumSize(QSize(600, 600));
        QFont font;
        font.setPointSize(10);
        font.setUnderline(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background-color: white; \n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 70, 402, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        courrielLineEdit = new QLineEdit(layoutWidget);
        courrielLineEdit->setObjectName("courrielLineEdit");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(18);
        font2.setBold(false);
        courrielLineEdit->setFont(font2);
        courrielLineEdit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: black;\n"
"\n"
" "));

        verticalLayout->addWidget(courrielLineEdit);

        passwordLineedit = new QLineEdit(layoutWidget);
        passwordLineedit->setObjectName("passwordLineedit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(passwordLineedit->sizePolicy().hasHeightForWidth());
        passwordLineedit->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(18);
        passwordLineedit->setFont(font3);
        passwordLineedit->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: black;"));
        passwordLineedit->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(passwordLineedit);

        msgMotdepasseLabel = new QLabel(layoutWidget);
        msgMotdepasseLabel->setObjectName("msgMotdepasseLabel");
        msgMotdepasseLabel->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(msgMotdepasseLabel->sizePolicy().hasHeightForWidth());
        msgMotdepasseLabel->setSizePolicy(sizePolicy1);
        msgMotdepasseLabel->setMaximumSize(QSize(400, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setUnderline(true);
        font4.setKerning(false);
        msgMotdepasseLabel->setFont(font4);
        msgMotdepasseLabel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        msgMotdepasseLabel->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        msgMotdepasseLabel->setAutoFillBackground(false);
        msgMotdepasseLabel->setStyleSheet(QString::fromUtf8("display: block;\n"
"text-align: left;\n"
"margin : 0;\n"
"padding : 0;\n"
"font-weight: bold;\n"
"color: rgb(68, 68, 68); "));
        msgMotdepasseLabel->setFrameShape(QFrame::Shape::NoFrame);
        msgMotdepasseLabel->setTextFormat(Qt::TextFormat::RichText);
        msgMotdepasseLabel->setScaledContents(false);
        msgMotdepasseLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        msgMotdepasseLabel->setWordWrap(false);
        msgMotdepasseLabel->setMargin(-3);
        msgMotdepasseLabel->setIndent(10);
        msgMotdepasseLabel->setTextInteractionFlags(Qt::TextInteractionFlag::TextBrowserInteraction);

        verticalLayout->addWidget(msgMotdepasseLabel);

        msgIncorrectEmailLabel = new QLabel(layoutWidget);
        msgIncorrectEmailLabel->setObjectName("msgIncorrectEmailLabel");
        msgIncorrectEmailLabel->setMaximumSize(QSize(16777215, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(10);
        msgIncorrectEmailLabel->setFont(font5);
        msgIncorrectEmailLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        msgIncorrectEmailLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(msgIncorrectEmailLabel);

        sidentifierBtn = new QPushButton(layoutWidget);
        sidentifierBtn->setObjectName("sidentifierBtn");
        sidentifierBtn->setMaximumSize(QSize(16777215, 35));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(false);
        sidentifierBtn->setFont(font6);
        sidentifierBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sidentifierBtn->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(85, 166, 217);\n"
"border-radius: 6px;}\n"
"QPushButton:hover{\n"
"background-color: rgb(85, 158, 217);\n"
"border: 1px solid #337ab7;\n"
"}"));
        sidentifierBtn->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(sidentifierBtn);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 290, 401, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(12);
        font7.setWeight(QFont::Light);
        font7.setKerning(false);
        label_3->setFont(font7);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(50, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        creeuncompteBtn = new QPushButton(layoutWidget1);
        creeuncompteBtn->setObjectName("creeuncompteBtn");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(creeuncompteBtn->sizePolicy().hasHeightForWidth());
        creeuncompteBtn->setSizePolicy(sizePolicy2);
        creeuncompteBtn->setMaximumSize(QSize(100, 999));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial")});
        font8.setPointSize(14);
        creeuncompteBtn->setFont(font8);
        creeuncompteBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        creeuncompteBtn->setStyleSheet(QString::fromUtf8("background-color: gray;"));

        horizontalLayout->addWidget(creeuncompteBtn);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "S'identifier", nullptr));
        courrielLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Courriel", nullptr));
        passwordLineedit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        msgMotdepasseLabel->setText(QCoreApplication::translate("MainWindow", " Vous avez oubli\303\251 votre mot de passe ?", nullptr));
        msgIncorrectEmailLabel->setText(QString());
        sidentifierBtn->setText(QCoreApplication::translate("MainWindow", "S'identifier", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Pas encore de compte ?", nullptr));
        creeuncompteBtn->setText(QCoreApplication::translate("MainWindow", "Cr\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

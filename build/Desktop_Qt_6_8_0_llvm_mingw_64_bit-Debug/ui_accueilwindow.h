/********************************************************************************
** Form generated from reading UI file 'accueilwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEILWINDOW_H
#define UI_ACCUEILWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccueilWindow
{
public:
    QAction *actionRecherche_De_Livres;
    QAction *actionRecherche_D_articles;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_5;
    QFrame *line;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AccueilWindow)
    {
        if (AccueilWindow->objectName().isEmpty())
            AccueilWindow->setObjectName("AccueilWindow");
        AccueilWindow->resize(800, 800);
        AccueilWindow->setMinimumSize(QSize(800, 800));
        AccueilWindow->setMaximumSize(QSize(2000, 2000));
        AccueilWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        actionRecherche_De_Livres = new QAction(AccueilWindow);
        actionRecherche_De_Livres->setObjectName("actionRecherche_De_Livres");
        actionRecherche_De_Livres->setEnabled(true);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        actionRecherche_De_Livres->setFont(font);
        actionRecherche_De_Livres->setAutoRepeat(false);
        actionRecherche_D_articles = new QAction(AccueilWindow);
        actionRecherche_D_articles->setObjectName("actionRecherche_D_articles");
        actionRecherche_D_articles->setEnabled(true);
        actionRecherche_D_articles->setFont(font);
        centralwidget = new QWidget(AccueilWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 211, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 9);
        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMaximumSize(QSize(150, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(85, 166, 217);\n"
"border-radius: 0px;\n"
"border: 1px solid white;}\n"
"QPushButton:hover{\n"
"background-color: rgb(85, 158, 217);\n"
"border: 1px solid #337ab7;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(150, 40));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(0, 236, 114);\n"
"border: 1px solid white;}\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 220, 114);\n"
"border: 1px solid #337ab7;\n"
"}"));

        horizontalLayout_3->addWidget(pushButton_4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(580, 0, 225, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 9);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(100, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(15);
        font2.setUnderline(true);
        label_3->setFont(font2);
        label_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 166, 217);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setIndent(-1);

        horizontalLayout_4->addWidget(label_3);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMaximumSize(QSize(40, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        pushButton_6->setFont(font3);
        pushButton_6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("pushButton_6:hover {background-color: #656559;}"));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WeatherClear));
        pushButton_6->setIcon(icon);

        horizontalLayout_4->addWidget(pushButton_6);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(30, 30));
        QFont font4;
        font4.setPointSize(14);
        pushButton->setFont(font4);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        pushButton->setIcon(icon1);

        horizontalLayout_4->addWidget(pushButton);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 120, 271, 31));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color:#656559;"));
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 220, 167, 30));
        label_2->setMaximumSize(QSize(200, 30));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(11);
        font6.setUnderline(true);
        label_2->setFont(font6);
        label_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_2->setStyleSheet(QString::fromUtf8("color:#656559;\n"
"text-decoration :  underline dotted #656559;\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 130, 689, 91));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(500, 45));
        lineEdit->setFont(font3);

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(150, 50));
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        pushButton_3->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 300, 751, 301));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_10 = new QLabel(horizontalLayoutWidget);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10);

        label_9 = new QLabel(horizontalLayoutWidget);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_8 = new QLabel(horizontalLayoutWidget);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_3);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 280, 751, 10));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        AccueilWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AccueilWindow);
        statusbar->setObjectName("statusbar");
        AccueilWindow->setStatusBar(statusbar);

        retranslateUi(AccueilWindow);

        QMetaObject::connectSlotsByName(AccueilWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AccueilWindow)
    {
        AccueilWindow->setWindowTitle(QCoreApplication::translate("AccueilWindow", "MainWindow", nullptr));
        actionRecherche_De_Livres->setText(QCoreApplication::translate("AccueilWindow", "Recherche De Livres", nullptr));
        actionRecherche_D_articles->setText(QCoreApplication::translate("AccueilWindow", "Recherche D'articles", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AccueilWindow", "Livres", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AccueilWindow", "Articles", nullptr));
        label_3->setText(QCoreApplication::translate("AccueilWindow", "S'identifier", nullptr));
        pushButton_6->setText(QString());
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("AccueilWindow", "Libre acc\303\250s \303\240 la connaissance et \303\240 la culture.", nullptr));
        label_2->setText(QCoreApplication::translate("AccueilWindow", "Param\303\250tres de recherche", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("AccueilWindow", "Recherche par titre, auteur, ISBN, \303\251diteur, md5...", nullptr));
        pushButton_3->setText(QString());
        label_10->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccueilWindow: public Ui_AccueilWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEILWINDOW_H

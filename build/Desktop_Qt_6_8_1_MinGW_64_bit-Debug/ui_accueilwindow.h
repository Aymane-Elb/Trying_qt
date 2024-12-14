/********************************************************************************
** Form generated from reading UI file 'accueilwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
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
#include <QtWidgets/QRadioButton>
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
    QHBoxLayout *horizontalLayout_4;
    QLabel *sidentifierLink;
    QRadioButton *darkmodeBtn;
    QPushButton *addBookBtn;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QFrame *line;
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
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *livreBtn;
    QPushButton *articleBtn;
    QLabel *picLabel;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *rechercheBtn;
    QLabel *parametrederecherchLink;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AccueilWindow)
    {
        if (AccueilWindow->objectName().isEmpty())
            AccueilWindow->setObjectName("AccueilWindow");
        AccueilWindow->resize(959, 800);
        AccueilWindow->setMinimumSize(QSize(800, 800));
        AccueilWindow->setMaximumSize(QSize(959, 800));
        AccueilWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        AccueilWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
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
        layoutWidget->setGeometry(QRect(750, 0, 201, 51));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 9);
        sidentifierLink = new QLabel(layoutWidget);
        sidentifierLink->setObjectName("sidentifierLink");
        sidentifierLink->setMaximumSize(QSize(100, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(15);
        font1.setUnderline(true);
        sidentifierLink->setFont(font1);
        sidentifierLink->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sidentifierLink->setStyleSheet(QString::fromUtf8("QLabel{color: rgb(85, 166, 217);}\n"
"QLabel:hover	{	\n"
"	color:rgb(0, 255, 127);\n"
"	text-decoration : none;\n"
"}\n"
"QLabel:visited{\n"
"\n"
"	color: rgb(130, 130, 130);\n"
"	text-decoration: underline;}"));
        sidentifierLink->setTextFormat(Qt::TextFormat::RichText);
        sidentifierLink->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sidentifierLink->setIndent(-1);
        sidentifierLink->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByMouse);

        horizontalLayout_4->addWidget(sidentifierLink);

        darkmodeBtn = new QRadioButton(layoutWidget);
        darkmodeBtn->setObjectName("darkmodeBtn");
        darkmodeBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::WeatherClear));
        darkmodeBtn->setIcon(icon);

        horizontalLayout_4->addWidget(darkmodeBtn);

        addBookBtn = new QPushButton(layoutWidget);
        addBookBtn->setObjectName("addBookBtn");
        addBookBtn->setMaximumSize(QSize(30, 30));
        QFont font2;
        font2.setPointSize(14);
        addBookBtn->setFont(font2);
        addBookBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addBookBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        addBookBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("mail-message-new")));
        addBookBtn->setIcon(icon1);
        addBookBtn->setIconSize(QSize(30, 20));

        horizontalLayout_4->addWidget(addBookBtn);

        darkmodeBtn->raise();
        addBookBtn->raise();
        sidentifierLink->raise();
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 360, 941, 411));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        line = new QFrame(layoutWidget1);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName("label_10");

        verticalLayout->addWidget(label_10);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");

        verticalLayout->addWidget(label_9);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 0, 231, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        livreBtn = new QPushButton(layoutWidget2);
        livreBtn->setObjectName("livreBtn");
        livreBtn->setMaximumSize(QSize(150, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        livreBtn->setFont(font3);
        livreBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        livreBtn->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(85, 166, 217);\n"
"border-radius: 0px;\n"
"border: 1px solid white;\n"
"border-radius: 6px;}\n"
"QPushButton:hover{\n"
"background-color: rgb(85, 158, 217);\n"
"border: 1px solid #337ab7;\n"
"}"));

        horizontalLayout_3->addWidget(livreBtn);

        articleBtn = new QPushButton(layoutWidget2);
        articleBtn->setObjectName("articleBtn");
        articleBtn->setMaximumSize(QSize(150, 40));
        articleBtn->setFont(font3);
        articleBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        articleBtn->setStyleSheet(QString::fromUtf8("QPushButton{color: white;\n"
"	font: 14pt \"Arial\";\n"
"font-weight: bold;\n"
"background-color: rgb(0, 236, 114);\n"
"border: 1px solid white;\n"
"border-radius: 6px;}\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 220, 114);\n"
"border: 1px solid #337ab7;\n"
"}"));

        horizontalLayout_3->addWidget(articleBtn);

        picLabel = new QLabel(centralwidget);
        picLabel->setObjectName("picLabel");
        picLabel->setGeometry(QRect(360, 0, 221, 201));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        picLabel->setFont(font4);
        picLabel->setStyleSheet(QString::fromUtf8(""));
        picLabel->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Design sans titre.png")));
        picLabel->setScaledContents(true);
        picLabel->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(140, 210, 701, 111));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(-1, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMaximumSize(QSize(500, 45));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(14);
        lineEdit->setFont(font5);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit:hover{\n"
"color: black;\n"
"background-color: white;\n"
" border: 1px solid rgb(4, 170, 220);\n"
"border-bottom: 2px  solid black;\n"
"border-radius: 6px;\n"
"}"));

        horizontalLayout_2->addWidget(lineEdit);

        rechercheBtn = new QPushButton(layoutWidget3);
        rechercheBtn->setObjectName("rechercheBtn");
        rechercheBtn->setMaximumSize(QSize(150, 50));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(12);
        rechercheBtn->setFont(font6);
        rechercheBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        rechercheBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        rechercheBtn->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"border-color: rgb(12, 223, 255);}"));

        horizontalLayout_2->addWidget(rechercheBtn);


        verticalLayout_6->addLayout(horizontalLayout_2);

        parametrederecherchLink = new QLabel(layoutWidget3);
        parametrederecherchLink->setObjectName("parametrederecherchLink");
        parametrederecherchLink->setMaximumSize(QSize(200, 30));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(11);
        font7.setUnderline(true);
        parametrederecherchLink->setFont(font7);
        parametrederecherchLink->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        parametrederecherchLink->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(85, 166, 217);\n"
"text-decoration :  underline dotted #656559;}\n"
"QLabel:hover{color:rgb(0, 255, 127);\n"
"text-decoration :  underline dotted black;}\n"
""));
        parametrederecherchLink->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_6->addWidget(parametrederecherchLink);

        AccueilWindow->setCentralWidget(centralwidget);
        picLabel->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        statusbar = new QStatusBar(AccueilWindow);
        statusbar->setObjectName("statusbar");
        AccueilWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(AccueilWindow);

        QMetaObject::connectSlotsByName(AccueilWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AccueilWindow)
    {
        AccueilWindow->setWindowTitle(QCoreApplication::translate("AccueilWindow", "MainWindow", nullptr));
        actionRecherche_De_Livres->setText(QCoreApplication::translate("AccueilWindow", "Recherche De Livres", nullptr));
        actionRecherche_D_articles->setText(QCoreApplication::translate("AccueilWindow", "Recherche D'articles", nullptr));
        sidentifierLink->setText(QCoreApplication::translate("AccueilWindow", "S'identifier", nullptr));
        darkmodeBtn->setText(QString());
        addBookBtn->setText(QString());
        label_10->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("AccueilWindow", "TextLabel", nullptr));
        livreBtn->setText(QCoreApplication::translate("AccueilWindow", "Livres", nullptr));
        articleBtn->setText(QCoreApplication::translate("AccueilWindow", "Articles", nullptr));
        picLabel->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("AccueilWindow", "Recherche par titre, auteur, ISBN, \303\251diteur, md5...", nullptr));
        rechercheBtn->setText(QCoreApplication::translate("AccueilWindow", "Recherche", nullptr));
        parametrederecherchLink->setText(QCoreApplication::translate("AccueilWindow", "Param\303\250tres de recherche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccueilWindow: public Ui_AccueilWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEILWINDOW_H

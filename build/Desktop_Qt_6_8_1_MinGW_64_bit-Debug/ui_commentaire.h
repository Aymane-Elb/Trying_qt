/********************************************************************************
** Form generated from reading UI file 'commentaire.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTAIRE_H
#define UI_COMMENTAIRE_H

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

class Ui_commentaire
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *sendBtn;
    QPushButton *pushButton;

    void setupUi(QDialog *commentaire)
    {
        if (commentaire->objectName().isEmpty())
            commentaire->setObjectName("commentaire");
        commentaire->resize(392, 280);
        label = new QLabel(commentaire);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 88, 23));
        label->setMaximumSize(QSize(300, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        label->setFont(font);
        widget = new QWidget(commentaire);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 361, 251));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 200));
        lineEdit->setMaximumSize(QSize(500, 200));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("border: none;"));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 2);
        sendBtn = new QPushButton(widget);
        sendBtn->setObjectName("sendBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sendBtn->sizePolicy().hasHeightForWidth());
        sendBtn->setSizePolicy(sizePolicy1);
        sendBtn->setMaximumSize(QSize(170, 40));
        sendBtn->setFont(font1);
        sendBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendBtn->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 255, 127);\n"
""));

        horizontalLayout->addWidget(sendBtn);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(170, 40));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 255, 127);\n"
""));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(commentaire);

        QMetaObject::connectSlotsByName(commentaire);
    } // setupUi

    void retranslateUi(QDialog *commentaire)
    {
        commentaire->setWindowTitle(QCoreApplication::translate("commentaire", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("commentaire", "Comment", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("commentaire", "Give us your feedback", nullptr));
        sendBtn->setText(QCoreApplication::translate("commentaire", "Send", nullptr));
        pushButton->setText(QCoreApplication::translate("commentaire", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commentaire: public Ui_commentaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTAIRE_H

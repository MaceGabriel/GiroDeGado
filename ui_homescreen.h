/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QWidget *centralwidget;
    QPushButton *cattleButton;
    QPushButton *exitButton;
    QPushButton *financialButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QString::fromUtf8("HomeScreen"));
        HomeScreen->resize(694, 550);
        centralwidget = new QWidget(HomeScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cattleButton = new QPushButton(centralwidget);
        cattleButton->setObjectName(QString::fromUtf8("cattleButton"));
        cattleButton->setGeometry(QRect(80, 130, 531, 71));
        QFont font;
        font.setPointSize(10);
        cattleButton->setFont(font);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(80, 330, 531, 71));
        exitButton->setFont(font);
        financialButton = new QPushButton(centralwidget);
        financialButton->setObjectName(QString::fromUtf8("financialButton"));
        financialButton->setGeometry(QRect(80, 230, 531, 71));
        financialButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 121, 31));
        label->setFont(font);
        HomeScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 694, 21));
        HomeScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HomeScreen->setStatusBar(statusbar);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "Tela Inicial", nullptr));
        cattleButton->setText(QCoreApplication::translate("HomeScreen", "Gado", nullptr));
        exitButton->setText(QCoreApplication::translate("HomeScreen", "Sair", nullptr));
        financialButton->setText(QCoreApplication::translate("HomeScreen", "Financeiro", nullptr));
        label->setText(QCoreApplication::translate("HomeScreen", "Giro de Gado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H

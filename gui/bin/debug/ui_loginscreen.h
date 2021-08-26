/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QWidget *centralwidget;
    QPushButton *loginButton;
    QLabel *labelTitle;
    QLabel *labelUser;
    QLabel *labelPassword;
    QPushButton *exitButton;
    QLineEdit *inputUser;
    QLineEdit *inputPassword;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(900, 600);
        centralwidget = new QWidget(LoginScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(170, 290, 571, 51));
        QFont font;
        font.setPointSize(12);
        loginButton->setFont(font);
        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 16));
        labelTitle->setFont(font);
        labelUser = new QLabel(centralwidget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setGeometry(QRect(170, 130, 61, 16));
        labelUser->setFont(font);
        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(170, 200, 61, 16));
        labelPassword->setFont(font);
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(170, 360, 571, 51));
        exitButton->setFont(font);
        inputUser = new QLineEdit(centralwidget);
        inputUser->setObjectName(QString::fromUtf8("inputUser"));
        inputUser->setGeometry(QRect(170, 150, 571, 41));
        inputUser->setFont(font);
        inputPassword = new QLineEdit(centralwidget);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(170, 220, 571, 41));
        inputPassword->setFont(font);
        inputPassword->setEchoMode(QLineEdit::Password);
        LoginScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 20));
        LoginScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginScreen->setStatusBar(statusbar);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LoginScreen)
    {
        LoginScreen->setWindowTitle(QCoreApplication::translate("LoginScreen", "Tela de Login", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginScreen", "Entrar", nullptr));
        labelTitle->setText(QCoreApplication::translate("LoginScreen", "Giro de Gado", nullptr));
        labelUser->setText(QCoreApplication::translate("LoginScreen", "User", nullptr));
        labelPassword->setText(QCoreApplication::translate("LoginScreen", "Senha", nullptr));
        exitButton->setText(QCoreApplication::translate("LoginScreen", "Sair do programa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H

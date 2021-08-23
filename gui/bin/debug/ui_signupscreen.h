/********************************************************************************
** Form generated from reading UI file 'signupscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPSCREEN_H
#define UI_SIGNUPSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpScreen
{
public:
    QPushButton *signButton;
    QLabel *labelTitle;
    QLabel *labelPassword;
    QLineEdit *inputPassword;
    QLabel *labelUser;
    QLineEdit *inputUser;
    QPushButton *backButton;
    QLineEdit *inputPassword_2;
    QLabel *labelPassword_2;
    QDateEdit *dateEdit;
    QLabel *labelUser_2;
    QComboBox *comboBox;
    QLabel *labelUser_3;

    void setupUi(QDialog *SignUpScreen)
    {
        if (SignUpScreen->objectName().isEmpty())
            SignUpScreen->setObjectName(QString::fromUtf8("SignUpScreen"));
        SignUpScreen->resize(900, 600);
        signButton = new QPushButton(SignUpScreen);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setGeometry(QRect(40, 520, 311, 51));
        QFont font;
        font.setPointSize(10);
        signButton->setFont(font);
        labelTitle = new QLabel(SignUpScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 16));
        QFont font1;
        font1.setPointSize(12);
        labelTitle->setFont(font1);
        labelPassword = new QLabel(SignUpScreen);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(40, 250, 61, 16));
        labelPassword->setFont(font1);
        inputPassword = new QLineEdit(SignUpScreen);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(40, 270, 311, 41));
        inputPassword->setFont(font1);
        inputPassword->setEchoMode(QLineEdit::Password);
        labelUser = new QLabel(SignUpScreen);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setGeometry(QRect(40, 70, 61, 16));
        labelUser->setFont(font1);
        inputUser = new QLineEdit(SignUpScreen);
        inputUser->setObjectName(QString::fromUtf8("inputUser"));
        inputUser->setGeometry(QRect(40, 90, 821, 41));
        inputUser->setFont(font1);
        backButton = new QPushButton(SignUpScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(550, 520, 311, 51));
        backButton->setFont(font);
        inputPassword_2 = new QLineEdit(SignUpScreen);
        inputPassword_2->setObjectName(QString::fromUtf8("inputPassword_2"));
        inputPassword_2->setGeometry(QRect(540, 275, 311, 41));
        inputPassword_2->setFont(font1);
        inputPassword_2->setEchoMode(QLineEdit::Password);
        labelPassword_2 = new QLabel(SignUpScreen);
        labelPassword_2->setObjectName(QString::fromUtf8("labelPassword_2"));
        labelPassword_2->setGeometry(QRect(540, 250, 61, 21));
        labelPassword_2->setFont(font1);
        dateEdit = new QDateEdit(SignUpScreen);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(40, 181, 311, 41));
        dateEdit->setFont(font);
        labelUser_2 = new QLabel(SignUpScreen);
        labelUser_2->setObjectName(QString::fromUtf8("labelUser_2"));
        labelUser_2->setGeometry(QRect(40, 160, 191, 16));
        labelUser_2->setFont(font1);
        comboBox = new QComboBox(SignUpScreen);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(540, 185, 311, 41));
        comboBox->setFont(font);
        labelUser_3 = new QLabel(SignUpScreen);
        labelUser_3->setObjectName(QString::fromUtf8("labelUser_3"));
        labelUser_3->setGeometry(QRect(540, 150, 191, 31));
        labelUser_3->setFont(font1);

        retranslateUi(SignUpScreen);

        QMetaObject::connectSlotsByName(SignUpScreen);
    } // setupUi

    void retranslateUi(QDialog *SignUpScreen)
    {
        SignUpScreen->setWindowTitle(QCoreApplication::translate("SignUpScreen", "Tela de Cadastro", nullptr));
        signButton->setText(QCoreApplication::translate("SignUpScreen", "Cadastrar", nullptr));
        labelTitle->setText(QCoreApplication::translate("SignUpScreen", "Giro de Gado", nullptr));
        labelPassword->setText(QCoreApplication::translate("SignUpScreen", "User", nullptr));
        inputPassword->setText(QString());
        labelUser->setText(QCoreApplication::translate("SignUpScreen", "Nome", nullptr));
        backButton->setText(QCoreApplication::translate("SignUpScreen", "Voltar", nullptr));
        inputPassword_2->setText(QString());
        labelPassword_2->setText(QCoreApplication::translate("SignUpScreen", "Senha", nullptr));
        labelUser_2->setText(QCoreApplication::translate("SignUpScreen", "Data de Nascimento", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SignUpScreen", "Administrador", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SignUpScreen", "Funcion\303\241rio", nullptr));

        labelUser_3->setText(QCoreApplication::translate("SignUpScreen", "Tipo de Usu\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpScreen: public Ui_SignUpScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPSCREEN_H

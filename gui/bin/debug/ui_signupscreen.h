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
    QLabel *labelNickname;
    QLineEdit *inputNickname;
    QLabel *labelSearchUser;
    QLineEdit *inputName;
    QPushButton *backButton;
    QLineEdit *inputPassword;
    QLabel *labelPassword;
    QDateEdit *dateEdit;
    QLabel *labelBirthDate;
    QComboBox *userType;
    QLabel *labelUserType;

    void setupUi(QDialog *SignUpScreen)
    {
        if (SignUpScreen->objectName().isEmpty())
            SignUpScreen->setObjectName(QString::fromUtf8("SignUpScreen"));
        SignUpScreen->resize(900, 600);
        signButton = new QPushButton(SignUpScreen);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setGeometry(QRect(40, 520, 311, 51));
        QFont font;
        font.setPointSize(12);
        signButton->setFont(font);
        labelTitle = new QLabel(SignUpScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 16));
        labelTitle->setFont(font);
        labelNickname = new QLabel(SignUpScreen);
        labelNickname->setObjectName(QString::fromUtf8("labelNickname"));
        labelNickname->setGeometry(QRect(70, 250, 201, 16));
        labelNickname->setFont(font);
        inputNickname = new QLineEdit(SignUpScreen);
        inputNickname->setObjectName(QString::fromUtf8("inputNickname"));
        inputNickname->setGeometry(QRect(70, 270, 371, 41));
        inputNickname->setFont(font);
        inputNickname->setEchoMode(QLineEdit::Normal);
        labelSearchUser = new QLabel(SignUpScreen);
        labelSearchUser->setObjectName(QString::fromUtf8("labelSearchUser"));
        labelSearchUser->setGeometry(QRect(70, 70, 61, 16));
        labelSearchUser->setFont(font);
        inputName = new QLineEdit(SignUpScreen);
        inputName->setObjectName(QString::fromUtf8("inputName"));
        inputName->setGeometry(QRect(70, 90, 761, 41));
        inputName->setFont(font);
        backButton = new QPushButton(SignUpScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(550, 520, 311, 51));
        backButton->setFont(font);
        inputPassword = new QLineEdit(SignUpScreen);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(480, 270, 351, 41));
        inputPassword->setFont(font);
        inputPassword->setEchoMode(QLineEdit::Password);
        labelPassword = new QLabel(SignUpScreen);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(480, 250, 61, 21));
        labelPassword->setFont(font);
        dateEdit = new QDateEdit(SignUpScreen);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(70, 181, 371, 41));
        QFont font1;
        font1.setPointSize(10);
        dateEdit->setFont(font1);
        labelBirthDate = new QLabel(SignUpScreen);
        labelBirthDate->setObjectName(QString::fromUtf8("labelBirthDate"));
        labelBirthDate->setGeometry(QRect(70, 160, 191, 16));
        labelBirthDate->setFont(font);
        userType = new QComboBox(SignUpScreen);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName(QString::fromUtf8("userType"));
        userType->setGeometry(QRect(480, 180, 351, 41));
        userType->setFont(font1);
        labelUserType = new QLabel(SignUpScreen);
        labelUserType->setObjectName(QString::fromUtf8("labelUserType"));
        labelUserType->setGeometry(QRect(480, 160, 191, 21));
        labelUserType->setFont(font);

        retranslateUi(SignUpScreen);

        QMetaObject::connectSlotsByName(SignUpScreen);
    } // setupUi

    void retranslateUi(QDialog *SignUpScreen)
    {
        SignUpScreen->setWindowTitle(QCoreApplication::translate("SignUpScreen", "Tela de Cadastro de Usu\303\241rio", nullptr));
        signButton->setText(QCoreApplication::translate("SignUpScreen", "Cadastrar", nullptr));
        labelTitle->setText(QCoreApplication::translate("SignUpScreen", "Giro de Gado", nullptr));
        labelNickname->setText(QCoreApplication::translate("SignUpScreen", "Nome de usu\303\241rio", nullptr));
        inputNickname->setText(QString());
        labelSearchUser->setText(QCoreApplication::translate("SignUpScreen", "Nome", nullptr));
        backButton->setText(QCoreApplication::translate("SignUpScreen", "Voltar", nullptr));
        inputPassword->setText(QString());
        labelPassword->setText(QCoreApplication::translate("SignUpScreen", "Senha", nullptr));
        labelBirthDate->setText(QCoreApplication::translate("SignUpScreen", "Data de Nascimento", nullptr));
        userType->setItemText(0, QCoreApplication::translate("SignUpScreen", "Administrador", nullptr));
        userType->setItemText(1, QCoreApplication::translate("SignUpScreen", "Funcion\303\241rio", nullptr));

        labelUserType->setText(QCoreApplication::translate("SignUpScreen", "Tipo de Usu\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpScreen: public Ui_SignUpScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPSCREEN_H

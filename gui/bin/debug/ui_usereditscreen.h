/********************************************************************************
** Form generated from reading UI file 'usereditscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEREDITSCREEN_H
#define UI_USEREDITSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserEditScreen
{
public:
    QLineEdit *inputNewNickname;
    QComboBox *userType;
    QLineEdit *inputPassword;
    QLabel *labelNewNickname;
    QLabel *labelName;
    QLineEdit *inputName;
    QLabel *labelTitle;
    QLabel *labelPassword;
    QDateEdit *dateEdit;
    QPushButton *backButton;
    QLabel *labelBirthDate;
    QPushButton *signButton;
    QLabel *labelUserType;
    QPushButton *okButton;
    QLineEdit *inputNickname;
    QLabel *labelNickname;

    void setupUi(QDialog *UserEditScreen)
    {
        if (UserEditScreen->objectName().isEmpty())
            UserEditScreen->setObjectName(QString::fromUtf8("UserEditScreen"));
        UserEditScreen->resize(900, 600);
        inputNewNickname = new QLineEdit(UserEditScreen);
        inputNewNickname->setObjectName(QString::fromUtf8("inputNewNickname"));
        inputNewNickname->setGeometry(QRect(70, 390, 371, 41));
        QFont font;
        font.setPointSize(12);
        inputNewNickname->setFont(font);
        inputNewNickname->setEchoMode(QLineEdit::Normal);
        userType = new QComboBox(UserEditScreen);
        userType->addItem(QString());
        userType->addItem(QString());
        userType->setObjectName(QString::fromUtf8("userType"));
        userType->setGeometry(QRect(480, 300, 351, 41));
        QFont font1;
        font1.setPointSize(10);
        userType->setFont(font1);
        inputPassword = new QLineEdit(UserEditScreen);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(480, 390, 351, 41));
        inputPassword->setFont(font);
        inputPassword->setEchoMode(QLineEdit::Password);
        labelNewNickname = new QLabel(UserEditScreen);
        labelNewNickname->setObjectName(QString::fromUtf8("labelNewNickname"));
        labelNewNickname->setGeometry(QRect(70, 370, 221, 16));
        labelNewNickname->setFont(font);
        labelName = new QLabel(UserEditScreen);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(70, 190, 61, 16));
        labelName->setFont(font);
        inputName = new QLineEdit(UserEditScreen);
        inputName->setObjectName(QString::fromUtf8("inputName"));
        inputName->setGeometry(QRect(70, 210, 761, 41));
        inputName->setFont(font);
        labelTitle = new QLabel(UserEditScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 20, 121, 16));
        labelTitle->setFont(font);
        labelPassword = new QLabel(UserEditScreen);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(480, 370, 61, 21));
        labelPassword->setFont(font);
        dateEdit = new QDateEdit(UserEditScreen);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(70, 301, 371, 41));
        dateEdit->setFont(font1);
        backButton = new QPushButton(UserEditScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(550, 530, 311, 51));
        backButton->setFont(font1);
        labelBirthDate = new QLabel(UserEditScreen);
        labelBirthDate->setObjectName(QString::fromUtf8("labelBirthDate"));
        labelBirthDate->setGeometry(QRect(70, 280, 191, 16));
        labelBirthDate->setFont(font);
        signButton = new QPushButton(UserEditScreen);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setGeometry(QRect(40, 530, 311, 51));
        signButton->setFont(font1);
        labelUserType = new QLabel(UserEditScreen);
        labelUserType->setObjectName(QString::fromUtf8("labelUserType"));
        labelUserType->setGeometry(QRect(480, 280, 191, 21));
        labelUserType->setFont(font);
        okButton = new QPushButton(UserEditScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(760, 130, 75, 41));
        okButton->setFont(font);
        inputNickname = new QLineEdit(UserEditScreen);
        inputNickname->setObjectName(QString::fromUtf8("inputNickname"));
        inputNickname->setGeometry(QRect(70, 130, 651, 41));
        inputNickname->setFont(font);
        labelNickname = new QLabel(UserEditScreen);
        labelNickname->setObjectName(QString::fromUtf8("labelNickname"));
        labelNickname->setGeometry(QRect(70, 110, 151, 16));
        labelNickname->setFont(font);

        retranslateUi(UserEditScreen);

        QMetaObject::connectSlotsByName(UserEditScreen);
    } // setupUi

    void retranslateUi(QDialog *UserEditScreen)
    {
        UserEditScreen->setWindowTitle(QCoreApplication::translate("UserEditScreen", "Tela de Edi\303\247\303\243o de Usu\303\241rio", nullptr));
        inputNewNickname->setText(QString());
        userType->setItemText(0, QCoreApplication::translate("UserEditScreen", "Administrador", nullptr));
        userType->setItemText(1, QCoreApplication::translate("UserEditScreen", "Funcion\303\241rio", nullptr));

        inputPassword->setText(QString());
        labelNewNickname->setText(QCoreApplication::translate("UserEditScreen", "Novo Nome de Usu\303\241rio", nullptr));
        labelName->setText(QCoreApplication::translate("UserEditScreen", "Nome", nullptr));
        labelTitle->setText(QCoreApplication::translate("UserEditScreen", "Giro de Gado", nullptr));
        labelPassword->setText(QCoreApplication::translate("UserEditScreen", "Senha", nullptr));
        backButton->setText(QCoreApplication::translate("UserEditScreen", "Voltar", nullptr));
        labelBirthDate->setText(QCoreApplication::translate("UserEditScreen", "Data de Nascimento", nullptr));
        signButton->setText(QCoreApplication::translate("UserEditScreen", "Editar", nullptr));
        labelUserType->setText(QCoreApplication::translate("UserEditScreen", "Tipo de Usu\303\241rio", nullptr));
        okButton->setText(QCoreApplication::translate("UserEditScreen", "Ok", nullptr));
        labelNickname->setText(QCoreApplication::translate("UserEditScreen", "Nome de Usu\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserEditScreen: public Ui_UserEditScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITSCREEN_H

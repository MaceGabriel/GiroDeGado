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
    QLineEdit *inputUser;
    QComboBox *comboBox;
    QLineEdit *inputPassword;
    QLabel *labelUser;
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
    QLineEdit *inputSearchUser;
    QLabel *labelSearchUser;

    void setupUi(QDialog *UserEditScreen)
    {
        if (UserEditScreen->objectName().isEmpty())
            UserEditScreen->setObjectName(QString::fromUtf8("UserEditScreen"));
        UserEditScreen->resize(900, 600);
        inputUser = new QLineEdit(UserEditScreen);
        inputUser->setObjectName(QString::fromUtf8("inputUser"));
        inputUser->setGeometry(QRect(70, 390, 371, 41));
        QFont font;
        font.setPointSize(12);
        inputUser->setFont(font);
        inputUser->setEchoMode(QLineEdit::Password);
        comboBox = new QComboBox(UserEditScreen);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(480, 300, 351, 41));
        QFont font1;
        font1.setPointSize(10);
        comboBox->setFont(font1);
        inputPassword = new QLineEdit(UserEditScreen);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(480, 390, 351, 41));
        inputPassword->setFont(font);
        inputPassword->setEchoMode(QLineEdit::Password);
        labelUser = new QLabel(UserEditScreen);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setGeometry(QRect(70, 370, 61, 16));
        labelUser->setFont(font);
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
        inputSearchUser = new QLineEdit(UserEditScreen);
        inputSearchUser->setObjectName(QString::fromUtf8("inputSearchUser"));
        inputSearchUser->setGeometry(QRect(70, 130, 651, 41));
        inputSearchUser->setFont(font);
        labelSearchUser = new QLabel(UserEditScreen);
        labelSearchUser->setObjectName(QString::fromUtf8("labelSearchUser"));
        labelSearchUser->setGeometry(QRect(70, 110, 121, 16));
        labelSearchUser->setFont(font);

        retranslateUi(UserEditScreen);

        QMetaObject::connectSlotsByName(UserEditScreen);
    } // setupUi

    void retranslateUi(QDialog *UserEditScreen)
    {
        UserEditScreen->setWindowTitle(QCoreApplication::translate("UserEditScreen", "Tela de Edi\303\247\303\243o de Usu\303\241rio", nullptr));
        inputUser->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("UserEditScreen", "Administrador", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("UserEditScreen", "Funcion\303\241rio", nullptr));

        inputPassword->setText(QString());
        labelUser->setText(QCoreApplication::translate("UserEditScreen", "User", nullptr));
        labelName->setText(QCoreApplication::translate("UserEditScreen", "Nome", nullptr));
        labelTitle->setText(QCoreApplication::translate("UserEditScreen", "Giro de Gado", nullptr));
        labelPassword->setText(QCoreApplication::translate("UserEditScreen", "Senha", nullptr));
        backButton->setText(QCoreApplication::translate("UserEditScreen", "Voltar", nullptr));
        labelBirthDate->setText(QCoreApplication::translate("UserEditScreen", "Data de Nascimento", nullptr));
        signButton->setText(QCoreApplication::translate("UserEditScreen", "Cadastrar", nullptr));
        labelUserType->setText(QCoreApplication::translate("UserEditScreen", "Tipo de Usu\303\241rio", nullptr));
        okButton->setText(QCoreApplication::translate("UserEditScreen", "Ok", nullptr));
        labelSearchUser->setText(QCoreApplication::translate("UserEditScreen", "User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserEditScreen: public Ui_UserEditScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEREDITSCREEN_H

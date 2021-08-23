/********************************************************************************
** Form generated from reading UI file 'usermanagementscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMENTSCREEN_H
#define UI_USERMANAGEMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UserManagementScreen
{
public:
    QPushButton *queryButton;
    QLabel *labelTitle;
    QPushButton *backButton;
    QPushButton *updateButton;
    QPushButton *removeButton;
    QPushButton *registerButton;

    void setupUi(QDialog *UserManagementScreen)
    {
        if (UserManagementScreen->objectName().isEmpty())
            UserManagementScreen->setObjectName(QString::fromUtf8("UserManagementScreen"));
        UserManagementScreen->resize(900, 600);
        queryButton = new QPushButton(UserManagementScreen);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setGeometry(QRect(180, 150, 531, 71));
        QFont font;
        font.setPointSize(12);
        queryButton->setFont(font);
        labelTitle = new QLabel(UserManagementScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 31));
        labelTitle->setFont(font);
        backButton = new QPushButton(UserManagementScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(180, 450, 531, 71));
        backButton->setFont(font);
        updateButton = new QPushButton(UserManagementScreen);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(180, 250, 531, 71));
        updateButton->setFont(font);
        removeButton = new QPushButton(UserManagementScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(180, 350, 531, 71));
        removeButton->setFont(font);
        registerButton = new QPushButton(UserManagementScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(180, 50, 531, 71));
        registerButton->setFont(font);

        retranslateUi(UserManagementScreen);

        QMetaObject::connectSlotsByName(UserManagementScreen);
    } // setupUi

    void retranslateUi(QDialog *UserManagementScreen)
    {
        UserManagementScreen->setWindowTitle(QCoreApplication::translate("UserManagementScreen", "Tela de Gerenciamento de Usu\303\241rios", nullptr));
        queryButton->setText(QCoreApplication::translate("UserManagementScreen", "Consulta", nullptr));
        labelTitle->setText(QCoreApplication::translate("UserManagementScreen", "Giro de Gado", nullptr));
        backButton->setText(QCoreApplication::translate("UserManagementScreen", "Voltar", nullptr));
        updateButton->setText(QCoreApplication::translate("UserManagementScreen", "Atualiza\303\247\303\243o", nullptr));
        removeButton->setText(QCoreApplication::translate("UserManagementScreen", "Exclus\303\243o", nullptr));
        registerButton->setText(QCoreApplication::translate("UserManagementScreen", "Cadastro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserManagementScreen: public Ui_UserManagementScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMENTSCREEN_H

/********************************************************************************
** Form generated from reading UI file 'cattlemanagementscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLEMANAGEMENTSCREEN_H
#define UI_CATTLEMANAGEMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CattleManagementScreen
{
public:
    QPushButton *queryButton;
    QPushButton *updateButton;
    QPushButton *registerButton;
    QLabel *labelTitle;
    QPushButton *removeButton;
    QPushButton *backButton;

    void setupUi(QDialog *CattleManagementScreen)
    {
        if (CattleManagementScreen->objectName().isEmpty())
            CattleManagementScreen->setObjectName(QString::fromUtf8("CattleManagementScreen"));
        CattleManagementScreen->resize(900, 600);
        queryButton = new QPushButton(CattleManagementScreen);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setGeometry(QRect(180, 150, 531, 71));
        QFont font;
        font.setPointSize(12);
        queryButton->setFont(font);
        updateButton = new QPushButton(CattleManagementScreen);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(180, 250, 531, 71));
        updateButton->setFont(font);
        registerButton = new QPushButton(CattleManagementScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(180, 50, 531, 71));
        registerButton->setFont(font);
        labelTitle = new QLabel(CattleManagementScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 31));
        labelTitle->setFont(font);
        removeButton = new QPushButton(CattleManagementScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(180, 350, 531, 71));
        removeButton->setFont(font);
        backButton = new QPushButton(CattleManagementScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(180, 450, 531, 71));
        backButton->setFont(font);

        retranslateUi(CattleManagementScreen);

        QMetaObject::connectSlotsByName(CattleManagementScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleManagementScreen)
    {
        CattleManagementScreen->setWindowTitle(QCoreApplication::translate("CattleManagementScreen", "Tela de Gerenciamento de Gado", nullptr));
        queryButton->setText(QCoreApplication::translate("CattleManagementScreen", "Consulta", nullptr));
        updateButton->setText(QCoreApplication::translate("CattleManagementScreen", "Atualiza\303\247\303\243o", nullptr));
        registerButton->setText(QCoreApplication::translate("CattleManagementScreen", "Cadastro", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleManagementScreen", "Giro de Gado", nullptr));
        removeButton->setText(QCoreApplication::translate("CattleManagementScreen", "Exclus\303\243o", nullptr));
        backButton->setText(QCoreApplication::translate("CattleManagementScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleManagementScreen: public Ui_CattleManagementScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEMANAGEMENTSCREEN_H

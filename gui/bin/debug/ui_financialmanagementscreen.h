/********************************************************************************
** Form generated from reading UI file 'financialmanagementscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALMANAGEMENTSCREEN_H
#define UI_FINANCIALMANAGEMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FinancialManagementScreen
{
public:
    QLabel *labelTitle;
    QPushButton *backButton;
    QPushButton *reportButton;
    QPushButton *removeButton;
    QPushButton *queryButton;
    QPushButton *registerButton;

    void setupUi(QDialog *FinancialManagementScreen)
    {
        if (FinancialManagementScreen->objectName().isEmpty())
            FinancialManagementScreen->setObjectName(QString::fromUtf8("FinancialManagementScreen"));
        FinancialManagementScreen->resize(900, 600);
        labelTitle = new QLabel(FinancialManagementScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 31));
        QFont font;
        font.setPointSize(12);
        labelTitle->setFont(font);
        backButton = new QPushButton(FinancialManagementScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(180, 460, 531, 71));
        backButton->setFont(font);
        reportButton = new QPushButton(FinancialManagementScreen);
        reportButton->setObjectName(QString::fromUtf8("reportButton"));
        reportButton->setGeometry(QRect(180, 360, 531, 71));
        reportButton->setFont(font);
        removeButton = new QPushButton(FinancialManagementScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(180, 260, 531, 71));
        removeButton->setFont(font);
        queryButton = new QPushButton(FinancialManagementScreen);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        queryButton->setGeometry(QRect(180, 160, 531, 71));
        queryButton->setFont(font);
        registerButton = new QPushButton(FinancialManagementScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(180, 60, 531, 71));
        registerButton->setFont(font);

        retranslateUi(FinancialManagementScreen);

        QMetaObject::connectSlotsByName(FinancialManagementScreen);
    } // setupUi

    void retranslateUi(QDialog *FinancialManagementScreen)
    {
        FinancialManagementScreen->setWindowTitle(QCoreApplication::translate("FinancialManagementScreen", "Tela de Gerenciamento Financeiro", nullptr));
        labelTitle->setText(QCoreApplication::translate("FinancialManagementScreen", "Giro de Gado", nullptr));
        backButton->setText(QCoreApplication::translate("FinancialManagementScreen", "Voltar", nullptr));
        reportButton->setText(QCoreApplication::translate("FinancialManagementScreen", "Relat\303\263rio", nullptr));
        removeButton->setText(QCoreApplication::translate("FinancialManagementScreen", "Exclus\303\243o", nullptr));
        queryButton->setText(QCoreApplication::translate("FinancialManagementScreen", "Consulta", nullptr));
        registerButton->setText(QCoreApplication::translate("FinancialManagementScreen", "Cadastro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialManagementScreen: public Ui_FinancialManagementScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALMANAGEMENTSCREEN_H

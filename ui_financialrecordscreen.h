/********************************************************************************
** Form generated from reading UI file 'financialrecordscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALRECORDSCREEN_H
#define UI_FINANCIALRECORDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FinancialRecordScreen
{
public:
    QPushButton *registerButton;
    QLineEdit *inputEarring;
    QLineEdit *inputPrice;
    QLabel *labelDate;
    QPushButton *backButton;
    QLineEdit *inputDate;
    QLabel *labelPrice;
    QLabel *labelTitle;
    QLabel *labelTransaction;
    QLabel *labelEarring;
    QTextEdit *inputDescription;
    QLabel *labelDescription;
    QLabel *labelIdTransaction;

    void setupUi(QDialog *FinancialRecordScreen)
    {
        if (FinancialRecordScreen->objectName().isEmpty())
            FinancialRecordScreen->setObjectName(QString::fromUtf8("FinancialRecordScreen"));
        FinancialRecordScreen->resize(694, 550);
        registerButton = new QPushButton(FinancialRecordScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(50, 470, 191, 51));
        QFont font;
        font.setPointSize(10);
        registerButton->setFont(font);
        inputEarring = new QLineEdit(FinancialRecordScreen);
        inputEarring->setObjectName(QString::fromUtf8("inputBrinco"));
        inputEarring->setGeometry(QRect(50, 170, 591, 41));
        inputEarring->setFont(font);
        inputPrice = new QLineEdit(FinancialRecordScreen);
        inputPrice->setObjectName(QString::fromUtf8("inputPrice"));
        inputPrice->setGeometry(QRect(350, 240, 291, 41));
        inputPrice->setFont(font);
        labelDate = new QLabel(FinancialRecordScreen);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setGeometry(QRect(50, 220, 111, 16));
        labelDate->setFont(font);
        backButton = new QPushButton(FinancialRecordScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(450, 470, 181, 51));
        backButton->setFont(font);
        inputDate = new QLineEdit(FinancialRecordScreen);
        inputDate->setObjectName(QString::fromUtf8("inputDate"));
        inputDate->setGeometry(QRect(50, 240, 281, 41));
        inputDate->setFont(font);
        labelPrice = new QLabel(FinancialRecordScreen);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));
        labelPrice->setGeometry(QRect(350, 220, 121, 16));
        labelPrice->setFont(font);
        labelTitle = new QLabel(FinancialRecordScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 20, 81, 16));
        labelTitle->setFont(font);
        labelTransaction = new QLabel(FinancialRecordScreen);
        labelTransaction->setObjectName(QString::fromUtf8("labelTransaction"));
        labelTransaction->setGeometry(QRect(50, 100, 141, 16));
        labelTransaction->setFont(font);
        labelEarring = new QLabel(FinancialRecordScreen);
        labelEarring->setObjectName(QString::fromUtf8("labelBrinco"));
        labelEarring->setGeometry(QRect(50, 150, 61, 16));
        labelEarring->setFont(font);
        inputDescription = new QTextEdit(FinancialRecordScreen);
        inputDescription->setObjectName(QString::fromUtf8("inputDescription"));
        inputDescription->setGeometry(QRect(50, 320, 591, 71));
        labelDescription = new QLabel(FinancialRecordScreen);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setGeometry(QRect(50, 300, 111, 16));
        labelDescription->setFont(font);
        labelIdTransaction = new QLabel(FinancialRecordScreen);
        labelIdTransaction->setObjectName(QString::fromUtf8("labelIdTransaction"));
        labelIdTransaction->setGeometry(QRect(160, 100, 71, 16));
        labelIdTransaction->setFont(font);

        retranslateUi(FinancialRecordScreen);

        QMetaObject::connectSlotsByName(FinancialRecordScreen);
    } // setupUi

    void retranslateUi(QDialog *FinancialRecordScreen)
    {
        FinancialRecordScreen->setWindowTitle(QCoreApplication::translate("FinancialRecordScreen", "Tela de Cadastro Financeiro", nullptr));
        registerButton->setText(QCoreApplication::translate("FinancialRecordScreen", "Cadastrar", nullptr));
        labelDate->setText(QCoreApplication::translate("FinancialRecordScreen", "Data", nullptr));
        backButton->setText(QCoreApplication::translate("FinancialRecordScreen", "Voltar", nullptr));
        labelPrice->setText(QCoreApplication::translate("FinancialRecordScreen", "Valor", nullptr));
        labelTitle->setText(QCoreApplication::translate("FinancialRecordScreen", "Giro de Gado", nullptr));
        labelTransaction->setText(QCoreApplication::translate("FinancialRecordScreen", "ID da transa\303\247\303\243o: ", nullptr));
        labelEarring->setText(QCoreApplication::translate("FinancialRecordScreen", "Brinco", nullptr));
        labelDescription->setText(QCoreApplication::translate("FinancialRecordScreen", "Descri\303\247\303\243o", nullptr));
        labelIdTransaction->setText(QCoreApplication::translate("FinancialRecordScreen", "#10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialRecordScreen: public Ui_FinancialRecordScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALRECORDSCREEN_H

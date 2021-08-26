/********************************************************************************
** Form generated from reading UI file 'financialremovescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALREMOVESCREEN_H
#define UI_FINANCIALREMOVESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FinancialRemoveScreen
{
public:
    QLineEdit *inputIdTransaction;
    QLabel *labelIdTransaction;
    QLabel *labelTitle;
    QPushButton *okButton;
    QTableWidget *transactionRemoveTable;
    QPushButton *backButton;
    QPushButton *removeButton;

    void setupUi(QDialog *FinancialRemoveScreen)
    {
        if (FinancialRemoveScreen->objectName().isEmpty())
            FinancialRemoveScreen->setObjectName(QString::fromUtf8("FinancialRemoveScreen"));
        FinancialRemoveScreen->resize(900, 600);
        QFont font;
        font.setPointSize(10);
        FinancialRemoveScreen->setFont(font);
        inputIdTransaction = new QLineEdit(FinancialRemoveScreen);
        inputIdTransaction->setObjectName(QString::fromUtf8("inputIdTransaction"));
        inputIdTransaction->setGeometry(QRect(130, 130, 551, 41));
        QFont font1;
        font1.setPointSize(12);
        inputIdTransaction->setFont(font1);
        labelIdTransaction = new QLabel(FinancialRemoveScreen);
        labelIdTransaction->setObjectName(QString::fromUtf8("labelIdTransaction"));
        labelIdTransaction->setGeometry(QRect(130, 110, 121, 16));
        labelIdTransaction->setFont(font1);
        labelTitle = new QLabel(FinancialRemoveScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 30, 101, 16));
        labelTitle->setFont(font1);
        okButton = new QPushButton(FinancialRemoveScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(700, 130, 75, 41));
        okButton->setFont(font1);
        transactionRemoveTable = new QTableWidget(FinancialRemoveScreen);
        if (transactionRemoveTable->columnCount() < 5)
            transactionRemoveTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        transactionRemoveTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transactionRemoveTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        transactionRemoveTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        transactionRemoveTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        transactionRemoveTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (transactionRemoveTable->rowCount() < 1)
            transactionRemoveTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        transactionRemoveTable->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        transactionRemoveTable->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        transactionRemoveTable->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        transactionRemoveTable->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        transactionRemoveTable->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        transactionRemoveTable->setItem(0, 4, __qtablewidgetitem10);
        transactionRemoveTable->setObjectName(QString::fromUtf8("transactionRemoveTable"));
        transactionRemoveTable->setGeometry(QRect(160, 190, 591, 61));
        transactionRemoveTable->setFont(font1);
        backButton = new QPushButton(FinancialRemoveScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(480, 470, 301, 51));
        backButton->setFont(font1);
        removeButton = new QPushButton(FinancialRemoveScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(130, 470, 301, 51));
        removeButton->setFont(font1);

        retranslateUi(FinancialRemoveScreen);

        QMetaObject::connectSlotsByName(FinancialRemoveScreen);
    } // setupUi

    void retranslateUi(QDialog *FinancialRemoveScreen)
    {
        FinancialRemoveScreen->setWindowTitle(QCoreApplication::translate("FinancialRemoveScreen", "Tela de Exclus\303\243o Financeira", nullptr));
        labelIdTransaction->setText(QCoreApplication::translate("FinancialRemoveScreen", "ID da transa\303\247\303\243o", nullptr));
        labelTitle->setText(QCoreApplication::translate("FinancialRemoveScreen", "Giro de Gado", nullptr));
        okButton->setText(QCoreApplication::translate("FinancialRemoveScreen", "Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem = transactionRemoveTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FinancialRemoveScreen", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transactionRemoveTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FinancialRemoveScreen", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = transactionRemoveTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FinancialRemoveScreen", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = transactionRemoveTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FinancialRemoveScreen", "Brinco", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = transactionRemoveTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FinancialRemoveScreen", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = transactionRemoveTable->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FinancialRemoveScreen", "Transa\303\247\303\243o", nullptr));

        const bool __sortingEnabled = transactionRemoveTable->isSortingEnabled();
        transactionRemoveTable->setSortingEnabled(false);
        transactionRemoveTable->setSortingEnabled(__sortingEnabled);

        backButton->setText(QCoreApplication::translate("FinancialRemoveScreen", "Voltar", nullptr));
        removeButton->setText(QCoreApplication::translate("FinancialRemoveScreen", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialRemoveScreen: public Ui_FinancialRemoveScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALREMOVESCREEN_H

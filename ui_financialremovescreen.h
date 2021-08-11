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
    QTableWidget *tableWidget;
    QPushButton *backButton;
    QPushButton *removeButton;

    void setupUi(QDialog *FinancialRemoveScreen)
    {
        if (FinancialRemoveScreen->objectName().isEmpty())
            FinancialRemoveScreen->setObjectName(QString::fromUtf8("FinancialRemoveScreen"));
        FinancialRemoveScreen->resize(694, 550);
        QFont font;
        font.setPointSize(10);
        FinancialRemoveScreen->setFont(font);
        inputIdTransaction = new QLineEdit(FinancialRemoveScreen);
        inputIdTransaction->setObjectName(QString::fromUtf8("inputIdTransaction"));
        inputIdTransaction->setGeometry(QRect(20, 130, 551, 41));
        inputIdTransaction->setFont(font);
        labelIdTransaction = new QLabel(FinancialRemoveScreen);
        labelIdTransaction->setObjectName(QString::fromUtf8("labelIdTransaction"));
        labelIdTransaction->setGeometry(QRect(20, 110, 91, 16));
        labelIdTransaction->setFont(font);
        labelTitle = new QLabel(FinancialRemoveScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 30, 81, 16));
        labelTitle->setFont(font);
        okButton = new QPushButton(FinancialRemoveScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(590, 130, 75, 41));
        tableWidget = new QTableWidget(FinancialRemoveScreen);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 4, __qtablewidgetitem10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(60, 190, 571, 51));
        tableWidget->setFont(font);
        backButton = new QPushButton(FinancialRemoveScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(370, 470, 301, 51));
        backButton->setFont(font);
        removeButton = new QPushButton(FinancialRemoveScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(20, 470, 301, 51));
        removeButton->setFont(font);

        retranslateUi(FinancialRemoveScreen);

        QMetaObject::connectSlotsByName(FinancialRemoveScreen);
    } // setupUi

    void retranslateUi(QDialog *FinancialRemoveScreen)
    {
        FinancialRemoveScreen->setWindowTitle(QCoreApplication::translate("FinancialRemoveScreen", "Tela de Exclus\303\243o Financeira", nullptr));
        labelIdTransaction->setText(QCoreApplication::translate("FinancialRemoveScreen", "ID da transa\303\247\303\243o", nullptr));
        labelTitle->setText(QCoreApplication::translate("FinancialRemoveScreen", "Giro de Gado", nullptr));
        okButton->setText(QCoreApplication::translate("FinancialRemoveScreen", "Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FinancialRemoveScreen", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FinancialRemoveScreen", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FinancialRemoveScreen", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FinancialRemoveScreen", "Brinco", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FinancialRemoveScreen", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FinancialRemoveScreen", "Transa\303\247\303\243o", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("FinancialRemoveScreen", "aa", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("FinancialRemoveScreen", "aaa", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("FinancialRemoveScreen", "aaaaa", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        backButton->setText(QCoreApplication::translate("FinancialRemoveScreen", "Voltar", nullptr));
        removeButton->setText(QCoreApplication::translate("FinancialRemoveScreen", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialRemoveScreen: public Ui_FinancialRemoveScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALREMOVESCREEN_H

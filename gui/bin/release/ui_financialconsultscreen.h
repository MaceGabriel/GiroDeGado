/********************************************************************************
** Form generated from reading UI file 'financialconsultscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALCONSULTSCREEN_H
#define UI_FINANCIALCONSULTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FinancialConsultScreen
{
public:
    QGroupBox *groupBox;
    QTableWidget *transactionConsultTable;
    QLineEdit *inputTransactionDate;
    QLabel *labelTransactionDate;
    QPushButton *okButton;
    QLabel *labelTitle;
    QPushButton *backButton;

    void setupUi(QDialog *FinancialConsultScreen)
    {
        if (FinancialConsultScreen->objectName().isEmpty())
            FinancialConsultScreen->setObjectName(QString::fromUtf8("FinancialConsultScreen"));
        FinancialConsultScreen->resize(900, 600);
        groupBox = new QGroupBox(FinancialConsultScreen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 851, 461));
        transactionConsultTable = new QTableWidget(groupBox);
        if (transactionConsultTable->columnCount() < 5)
            transactionConsultTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        transactionConsultTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        transactionConsultTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font;
        font.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font.setPointSize(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        transactionConsultTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        transactionConsultTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        transactionConsultTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        transactionConsultTable->setObjectName(QString::fromUtf8("transactionConsultTable"));
        transactionConsultTable->setGeometry(QRect(160, 150, 531, 241));
        QFont font1;
        font1.setPointSize(12);
        transactionConsultTable->setFont(font1);
        inputTransactionDate = new QLineEdit(groupBox);
        inputTransactionDate->setObjectName(QString::fromUtf8("inputTransactionDate"));
        inputTransactionDate->setGeometry(QRect(20, 80, 701, 41));
        inputTransactionDate->setFont(font1);
        labelTransactionDate = new QLabel(groupBox);
        labelTransactionDate->setObjectName(QString::fromUtf8("labelTransactionDate"));
        labelTransactionDate->setGeometry(QRect(20, 50, 221, 21));
        labelTransactionDate->setFont(font1);
        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(750, 80, 75, 41));
        okButton->setFont(font1);
        labelTitle = new QLabel(FinancialConsultScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 101, 16));
        QFont font2;
        font2.setPointSize(10);
        labelTitle->setFont(font2);
        backButton = new QPushButton(FinancialConsultScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(360, 530, 181, 51));
        backButton->setFont(font1);

        retranslateUi(FinancialConsultScreen);

        QMetaObject::connectSlotsByName(FinancialConsultScreen);
    } // setupUi

    void retranslateUi(QDialog *FinancialConsultScreen)
    {
        FinancialConsultScreen->setWindowTitle(QCoreApplication::translate("FinancialConsultScreen", "Dialog", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = transactionConsultTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FinancialConsultScreen", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = transactionConsultTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FinancialConsultScreen", "Opera\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = transactionConsultTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FinancialConsultScreen", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = transactionConsultTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FinancialConsultScreen", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = transactionConsultTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FinancialConsultScreen", "Brinco do gado", nullptr));
        inputTransactionDate->setText(QString());
        labelTransactionDate->setText(QCoreApplication::translate("FinancialConsultScreen", "Data da Transa\303\247\303\243o", nullptr));
        okButton->setText(QCoreApplication::translate("FinancialConsultScreen", "Ok", nullptr));
        labelTitle->setText(QCoreApplication::translate("FinancialConsultScreen", "Giro de Gado", nullptr));
        backButton->setText(QCoreApplication::translate("FinancialConsultScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FinancialConsultScreen: public Ui_FinancialConsultScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALCONSULTSCREEN_H

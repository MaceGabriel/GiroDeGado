/********************************************************************************
** Form generated from reading UI file 'reportscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSCREEN_H
#define UI_REPORTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportScreen
{
public:
    QPushButton *backButton;
    QTableWidget *reportTable;
    QLabel *labelTitle;
    QLabel *labelTotalSpending;
    QLabel *labelValueTotalEarnings;
    QLabel *labelAverageSpending;
    QLabel *labelValueProfit;
    QLabel *labelAverageEarnings;
    QLabel *labelProfit;
    QLabel *labelValueAverageSpending;
    QLabel *labelValueTotalSpending;
    QLabel *labelTotalEarnings;
    QLabel *labelValueAverageEarnings;
    QDateEdit *dateIntervalB;
    QLabel *labelIntervalB;
    QLabel *labelIntervalE;
    QDateEdit *dateIntervalE;
    QPushButton *okButton;

    void setupUi(QDialog *ReportScreen)
    {
        if (ReportScreen->objectName().isEmpty())
            ReportScreen->setObjectName(QString::fromUtf8("ReportScreen"));
        ReportScreen->resize(900, 600);
        backButton = new QPushButton(ReportScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(270, 520, 351, 51));
        QFont font;
        font.setPointSize(12);
        backButton->setFont(font);
        reportTable = new QTableWidget(ReportScreen);
        if (reportTable->columnCount() < 4)
            reportTable->setColumnCount(4);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        reportTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        reportTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        reportTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        reportTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        reportTable->setObjectName(QString::fromUtf8("reportTable"));
        reportTable->setGeometry(QRect(150, 200, 411, 271));
        reportTable->setFont(font);
        labelTitle = new QLabel(ReportScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 20, 101, 16));
        labelTitle->setFont(font);
        labelTotalSpending = new QLabel(ReportScreen);
        labelTotalSpending->setObjectName(QString::fromUtf8("labelTotalSpending"));
        labelTotalSpending->setGeometry(QRect(610, 310, 101, 16));
        labelTotalSpending->setFont(font1);
        labelValueTotalEarnings = new QLabel(ReportScreen);
        labelValueTotalEarnings->setObjectName(QString::fromUtf8("labelValueTotalEarnings"));
        labelValueTotalEarnings->setGeometry(QRect(740, 330, 81, 16));
        labelValueTotalEarnings->setFont(font1);
        labelAverageSpending = new QLabel(ReportScreen);
        labelAverageSpending->setObjectName(QString::fromUtf8("labelAverageSpending"));
        labelAverageSpending->setGeometry(QRect(610, 250, 101, 16));
        labelAverageSpending->setFont(font1);
        labelValueProfit = new QLabel(ReportScreen);
        labelValueProfit->setObjectName(QString::fromUtf8("labelValueProfit"));
        labelValueProfit->setGeometry(QRect(740, 380, 81, 16));
        labelValueProfit->setFont(font1);
        labelAverageEarnings = new QLabel(ReportScreen);
        labelAverageEarnings->setObjectName(QString::fromUtf8("labelAverageEarnings"));
        labelAverageEarnings->setGeometry(QRect(610, 270, 111, 16));
        labelAverageEarnings->setFont(font1);
        labelProfit = new QLabel(ReportScreen);
        labelProfit->setObjectName(QString::fromUtf8("labelProfit"));
        labelProfit->setGeometry(QRect(610, 380, 81, 16));
        labelProfit->setFont(font1);
        labelValueAverageSpending = new QLabel(ReportScreen);
        labelValueAverageSpending->setObjectName(QString::fromUtf8("labelValueAverageSpending"));
        labelValueAverageSpending->setGeometry(QRect(740, 250, 81, 16));
        labelValueAverageSpending->setFont(font1);
        labelValueTotalSpending = new QLabel(ReportScreen);
        labelValueTotalSpending->setObjectName(QString::fromUtf8("labelValueTotalSpending"));
        labelValueTotalSpending->setGeometry(QRect(740, 310, 81, 16));
        labelValueTotalSpending->setFont(font1);
        labelTotalEarnings = new QLabel(ReportScreen);
        labelTotalEarnings->setObjectName(QString::fromUtf8("labelTotalEarnings"));
        labelTotalEarnings->setGeometry(QRect(610, 330, 101, 16));
        labelTotalEarnings->setFont(font1);
        labelValueAverageEarnings = new QLabel(ReportScreen);
        labelValueAverageEarnings->setObjectName(QString::fromUtf8("labelValueAverageEarnings"));
        labelValueAverageEarnings->setGeometry(QRect(740, 270, 81, 16));
        labelValueAverageEarnings->setFont(font1);
        dateIntervalB = new QDateEdit(ReportScreen);
        dateIntervalB->setObjectName(QString::fromUtf8("dateIntervalB"));
        dateIntervalB->setGeometry(QRect(100, 111, 291, 41));
        dateIntervalB->setFont(font1);
        labelIntervalB = new QLabel(ReportScreen);
        labelIntervalB->setObjectName(QString::fromUtf8("labelIntervalB"));
        labelIntervalB->setGeometry(QRect(100, 90, 191, 16));
        labelIntervalB->setFont(font);
        labelIntervalE = new QLabel(ReportScreen);
        labelIntervalE->setObjectName(QString::fromUtf8("labelIntervalE"));
        labelIntervalE->setGeometry(QRect(410, 89, 191, 16));
        labelIntervalE->setFont(font);
        dateIntervalE = new QDateEdit(ReportScreen);
        dateIntervalE->setObjectName(QString::fromUtf8("dateIntervalE"));
        dateIntervalE->setGeometry(QRect(410, 110, 291, 41));
        dateIntervalE->setFont(font1);
        okButton = new QPushButton(ReportScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(730, 110, 75, 41));
        okButton->setFont(font);

        retranslateUi(ReportScreen);

        QMetaObject::connectSlotsByName(ReportScreen);
    } // setupUi

    void retranslateUi(QDialog *ReportScreen)
    {
        ReportScreen->setWindowTitle(QCoreApplication::translate("ReportScreen", "Dialog", nullptr));
        backButton->setText(QCoreApplication::translate("ReportScreen", "Voltar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = reportTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReportScreen", "Nro do Brinco", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = reportTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReportScreen", "Opera\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = reportTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReportScreen", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = reportTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReportScreen", "Valor", nullptr));
        labelTitle->setText(QCoreApplication::translate("ReportScreen", "Giro de Gado", nullptr));
        labelTotalSpending->setText(QCoreApplication::translate("ReportScreen", "Total de gastos:", nullptr));
        labelValueTotalEarnings->setText(QCoreApplication::translate("ReportScreen", "R$ 0", nullptr));
        labelAverageSpending->setText(QCoreApplication::translate("ReportScreen", "M\303\251dia de gastos:", nullptr));
        labelValueProfit->setText(QCoreApplication::translate("ReportScreen", "R$ 0", nullptr));
        labelAverageEarnings->setText(QCoreApplication::translate("ReportScreen", "M\303\251dia de ganhos:", nullptr));
        labelProfit->setText(QCoreApplication::translate("ReportScreen", "Lucro:", nullptr));
        labelValueAverageSpending->setText(QCoreApplication::translate("ReportScreen", "R$ 0", nullptr));
        labelValueTotalSpending->setText(QCoreApplication::translate("ReportScreen", "R$ 0", nullptr));
        labelTotalEarnings->setText(QCoreApplication::translate("ReportScreen", "Total de ganhos:", nullptr));
        labelValueAverageEarnings->setText(QCoreApplication::translate("ReportScreen", "R$ 0", nullptr));
        labelIntervalB->setText(QCoreApplication::translate("ReportScreen", "In\303\255cio do intervalo", nullptr));
        labelIntervalE->setText(QCoreApplication::translate("ReportScreen", "Fim do intervalo", nullptr));
        okButton->setText(QCoreApplication::translate("ReportScreen", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportScreen: public Ui_ReportScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSCREEN_H

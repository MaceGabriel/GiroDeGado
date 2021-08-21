/********************************************************************************
** Form generated from reading UI file 'cattleconsultscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLECONSULTSCREEN_H
#define UI_CATTLECONSULTSCREEN_H

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

class Ui_CattleConsultScreen
{
public:
    QLabel *labelTitle;
    QGroupBox *groupBox;
    QTableWidget *cattleConsultTable;
    QLineEdit *inputCattleEarring;
    QLabel *labelCattleEarring;
    QPushButton *okButton;
    QTableWidget *cattleTransactionTable;
    QLabel *labelAverageSpending;
    QLabel *labelAverageEarnings;
    QLabel *labelValueAverageSpending;
    QLabel *labelValueAverageEarnings;
    QLabel *labelProfit;
    QLabel *labelValueProfit;
    QLabel *labelTotalSpending;
    QLabel *labelValueTotalSpending;
    QLabel *labelTotalEarnings;
    QLabel *labelValueTotalEarnings;
    QPushButton *backButton;

    void setupUi(QDialog *CattleConsultScreen)
    {
        if (CattleConsultScreen->objectName().isEmpty())
            CattleConsultScreen->setObjectName(QString::fromUtf8("CattleConsultScreen"));
        CattleConsultScreen->resize(900, 600);
        QFont font;
        font.setPointSize(10);
        CattleConsultScreen->setFont(font);
        labelTitle = new QLabel(CattleConsultScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 101, 16));
        labelTitle->setFont(font);
        groupBox = new QGroupBox(CattleConsultScreen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 851, 451));
        cattleConsultTable = new QTableWidget(groupBox);
        if (cattleConsultTable->columnCount() < 8)
            cattleConsultTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        cattleConsultTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        cattleConsultTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (cattleConsultTable->rowCount() < 1)
            cattleConsultTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        cattleConsultTable->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 0, __qtablewidgetitem9);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font1);
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleConsultTable->setItem(0, 7, __qtablewidgetitem16);
        cattleConsultTable->setObjectName(QString::fromUtf8("cattleConsultTable"));
        cattleConsultTable->setGeometry(QRect(0, 150, 851, 61));
        QFont font2;
        font2.setPointSize(12);
        cattleConsultTable->setFont(font2);
        inputCattleEarring = new QLineEdit(groupBox);
        inputCattleEarring->setObjectName(QString::fromUtf8("inputCattleEarring"));
        inputCattleEarring->setGeometry(QRect(20, 80, 701, 41));
        inputCattleEarring->setFont(font2);
        labelCattleEarring = new QLabel(groupBox);
        labelCattleEarring->setObjectName(QString::fromUtf8("labelCattleEarring"));
        labelCattleEarring->setGeometry(QRect(20, 50, 221, 21));
        labelCattleEarring->setFont(font2);
        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(750, 80, 75, 41));
        okButton->setFont(font2);
        cattleTransactionTable = new QTableWidget(groupBox);
        if (cattleTransactionTable->columnCount() < 2)
            cattleTransactionTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        cattleTransactionTable->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        cattleTransactionTable->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        cattleTransactionTable->setObjectName(QString::fromUtf8("cattleTransactionTable"));
        cattleTransactionTable->setGeometry(QRect(0, 230, 231, 181));
        cattleTransactionTable->setFont(font2);
        labelAverageSpending = new QLabel(groupBox);
        labelAverageSpending->setObjectName(QString::fromUtf8("labelAverageSpending"));
        labelAverageSpending->setGeometry(QRect(310, 230, 101, 16));
        labelAverageSpending->setFont(font);
        labelAverageEarnings = new QLabel(groupBox);
        labelAverageEarnings->setObjectName(QString::fromUtf8("labelAverageEarnings"));
        labelAverageEarnings->setGeometry(QRect(310, 250, 111, 16));
        labelValueAverageSpending = new QLabel(groupBox);
        labelValueAverageSpending->setObjectName(QString::fromUtf8("labelValueAverageSpending"));
        labelValueAverageSpending->setGeometry(QRect(440, 230, 81, 16));
        labelValueAverageSpending->setFont(font);
        labelValueAverageEarnings = new QLabel(groupBox);
        labelValueAverageEarnings->setObjectName(QString::fromUtf8("labelValueAverageEarnings"));
        labelValueAverageEarnings->setGeometry(QRect(440, 250, 81, 16));
        labelProfit = new QLabel(groupBox);
        labelProfit->setObjectName(QString::fromUtf8("labelProfit"));
        labelProfit->setGeometry(QRect(310, 360, 81, 16));
        labelValueProfit = new QLabel(groupBox);
        labelValueProfit->setObjectName(QString::fromUtf8("labelValueProfit"));
        labelValueProfit->setGeometry(QRect(440, 360, 81, 16));
        labelTotalSpending = new QLabel(groupBox);
        labelTotalSpending->setObjectName(QString::fromUtf8("labelTotalSpending"));
        labelTotalSpending->setGeometry(QRect(310, 290, 101, 16));
        labelValueTotalSpending = new QLabel(groupBox);
        labelValueTotalSpending->setObjectName(QString::fromUtf8("labelValueTotalSpending"));
        labelValueTotalSpending->setGeometry(QRect(440, 290, 81, 16));
        labelTotalEarnings = new QLabel(groupBox);
        labelTotalEarnings->setObjectName(QString::fromUtf8("labelTotalEarnings"));
        labelTotalEarnings->setGeometry(QRect(310, 310, 101, 16));
        labelValueTotalEarnings = new QLabel(groupBox);
        labelValueTotalEarnings->setObjectName(QString::fromUtf8("labelValueTotalEarnings"));
        labelValueTotalEarnings->setGeometry(QRect(440, 310, 81, 16));
        backButton = new QPushButton(CattleConsultScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(350, 530, 201, 51));
        backButton->setFont(font);

        retranslateUi(CattleConsultScreen);

        QMetaObject::connectSlotsByName(CattleConsultScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleConsultScreen)
    {
        CattleConsultScreen->setWindowTitle(QCoreApplication::translate("CattleConsultScreen", "Dialog", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleConsultScreen", "Giro de Gado", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = cattleConsultTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CattleConsultScreen", "Brinco", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cattleConsultTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CattleConsultScreen", "Ra\303\247a", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cattleConsultTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CattleConsultScreen", "Aquisicao", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cattleConsultTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CattleConsultScreen", "Nascimento", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cattleConsultTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CattleConsultScreen", "Pai", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = cattleConsultTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CattleConsultScreen", "Mae", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = cattleConsultTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CattleConsultScreen", "Peso", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = cattleConsultTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CattleConsultScreen", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = cattleConsultTable->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CattleConsultScreen", "Gado", nullptr));

        const bool __sortingEnabled = cattleConsultTable->isSortingEnabled();
        cattleConsultTable->setSortingEnabled(false);
        cattleConsultTable->setSortingEnabled(__sortingEnabled);

        labelCattleEarring->setText(QCoreApplication::translate("CattleConsultScreen", "Brinco do gado ", nullptr));
        okButton->setText(QCoreApplication::translate("CattleConsultScreen", "Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = cattleTransactionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("CattleConsultScreen", "Opera\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = cattleTransactionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("CattleConsultScreen", "Valor", nullptr));
        labelAverageSpending->setText(QCoreApplication::translate("CattleConsultScreen", "M\303\251dia de gastos:", nullptr));
        labelAverageEarnings->setText(QCoreApplication::translate("CattleConsultScreen", "M\303\251dia de ganhos:", nullptr));
        labelValueAverageSpending->setText(QCoreApplication::translate("CattleConsultScreen", "R$ 0", nullptr));
        labelValueAverageEarnings->setText(QCoreApplication::translate("CattleConsultScreen", "R$ 0", nullptr));
        labelProfit->setText(QCoreApplication::translate("CattleConsultScreen", "Lucro:", nullptr));
        labelValueProfit->setText(QCoreApplication::translate("CattleConsultScreen", "R$ 0", nullptr));
        labelTotalSpending->setText(QCoreApplication::translate("CattleConsultScreen", "Total de gastos:", nullptr));
        labelValueTotalSpending->setText(QCoreApplication::translate("CattleConsultScreen", "R$ 0", nullptr));
        labelTotalEarnings->setText(QCoreApplication::translate("CattleConsultScreen", "Total de ganhos:", nullptr));
        labelValueTotalEarnings->setText(QCoreApplication::translate("CattleConsultScreen", "R$ 0", nullptr));
        backButton->setText(QCoreApplication::translate("CattleConsultScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleConsultScreen: public Ui_CattleConsultScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLECONSULTSCREEN_H

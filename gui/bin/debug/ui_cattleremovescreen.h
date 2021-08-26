/********************************************************************************
** Form generated from reading UI file 'cattleremovescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLEREMOVESCREEN_H
#define UI_CATTLEREMOVESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CattleRemoveScreen
{
public:
    QLabel *labelTitle;
    QGroupBox *groupBox;
    QRadioButton *radioButtonDeath;
    QRadioButton *radioButtonSell;
    QLabel *labelPrice;
    QLabel *labelReason;
    QTableWidget *cattleRemoveTable;
    QLineEdit *inputCattleEarring;
    QLabel *labelCattleEarring;
    QPushButton *okButton;
    QLineEdit *inputPrice;
    QPushButton *removeButton;
    QPushButton *backButton;

    void setupUi(QDialog *CattleRemoveScreen)
    {
        if (CattleRemoveScreen->objectName().isEmpty())
            CattleRemoveScreen->setObjectName(QString::fromUtf8("CattleRemoveScreen"));
        CattleRemoveScreen->resize(900, 600);
        labelTitle = new QLabel(CattleRemoveScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 31));
        QFont font;
        font.setPointSize(12);
        labelTitle->setFont(font);
        groupBox = new QGroupBox(CattleRemoveScreen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 851, 461));
        radioButtonDeath = new QRadioButton(groupBox);
        radioButtonDeath->setObjectName(QString::fromUtf8("radioButtonDeath"));
        radioButtonDeath->setGeometry(QRect(20, 300, 82, 17));
        radioButtonDeath->setFont(font);
        radioButtonSell = new QRadioButton(groupBox);
        radioButtonSell->setObjectName(QString::fromUtf8("radioButtonSell"));
        radioButtonSell->setGeometry(QRect(110, 300, 82, 17));
        radioButtonSell->setFont(font);
        labelPrice = new QLabel(groupBox);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));
        labelPrice->setGeometry(QRect(20, 370, 47, 13));
        labelPrice->setFont(font);
        labelReason = new QLabel(groupBox);
        labelReason->setObjectName(QString::fromUtf8("labelReason"));
        labelReason->setGeometry(QRect(20, 270, 231, 31));
        labelReason->setFont(font);
        cattleRemoveTable = new QTableWidget(groupBox);
        if (cattleRemoveTable->columnCount() < 8)
            cattleRemoveTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        cattleRemoveTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        cattleRemoveTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (cattleRemoveTable->rowCount() < 1)
            cattleRemoveTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        cattleRemoveTable->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 0, __qtablewidgetitem9);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Shell Dlg 2")});
        font2.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font2);
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        cattleRemoveTable->setItem(0, 7, __qtablewidgetitem16);
        cattleRemoveTable->setObjectName(QString::fromUtf8("cattleRemoveTable"));
        cattleRemoveTable->setGeometry(QRect(0, 150, 851, 61));
        cattleRemoveTable->setFont(font);
        inputCattleEarring = new QLineEdit(groupBox);
        inputCattleEarring->setObjectName(QString::fromUtf8("inputCattleEarring"));
        inputCattleEarring->setGeometry(QRect(20, 80, 701, 41));
        inputCattleEarring->setFont(font);
        labelCattleEarring = new QLabel(groupBox);
        labelCattleEarring->setObjectName(QString::fromUtf8("labelCattleEarring"));
        labelCattleEarring->setGeometry(QRect(20, 50, 221, 16));
        labelCattleEarring->setFont(font);
        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(750, 80, 75, 41));
        okButton->setFont(font);
        inputPrice = new QLineEdit(groupBox);
        inputPrice->setObjectName(QString::fromUtf8("inputPrice"));
        inputPrice->setGeometry(QRect(20, 390, 251, 31));
        inputPrice->setFont(font);
        removeButton = new QPushButton(CattleRemoveScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(110, 530, 301, 51));
        removeButton->setFont(font);
        backButton = new QPushButton(CattleRemoveScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(480, 530, 301, 51));
        backButton->setFont(font);

        retranslateUi(CattleRemoveScreen);

        QMetaObject::connectSlotsByName(CattleRemoveScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleRemoveScreen)
    {
        CattleRemoveScreen->setWindowTitle(QCoreApplication::translate("CattleRemoveScreen", "Tela de Exclus\303\243o de Gado", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleRemoveScreen", "Giro de Gado", nullptr));
        groupBox->setTitle(QString());
        radioButtonDeath->setText(QCoreApplication::translate("CattleRemoveScreen", "Morte", nullptr));
        radioButtonSell->setText(QCoreApplication::translate("CattleRemoveScreen", "Venda", nullptr));
        labelPrice->setText(QCoreApplication::translate("CattleRemoveScreen", "Valor", nullptr));
        labelReason->setText(QCoreApplication::translate("CattleRemoveScreen", "Selecione o motivo da remo\303\247\303\243o:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = cattleRemoveTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CattleRemoveScreen", "Brinco", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = cattleRemoveTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CattleRemoveScreen", "Ra\303\247a", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = cattleRemoveTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CattleRemoveScreen", "Aquisicao", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = cattleRemoveTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CattleRemoveScreen", "Nascimento", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = cattleRemoveTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CattleRemoveScreen", "Pai", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = cattleRemoveTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CattleRemoveScreen", "Mae", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = cattleRemoveTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CattleRemoveScreen", "Peso", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = cattleRemoveTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CattleRemoveScreen", "Valor", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = cattleRemoveTable->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CattleRemoveScreen", "Gado", nullptr));

        const bool __sortingEnabled = cattleRemoveTable->isSortingEnabled();
        cattleRemoveTable->setSortingEnabled(false);
        cattleRemoveTable->setSortingEnabled(__sortingEnabled);

        labelCattleEarring->setText(QCoreApplication::translate("CattleRemoveScreen", "Brinco do gado a ser removido", nullptr));
        okButton->setText(QCoreApplication::translate("CattleRemoveScreen", "Ok", nullptr));
        inputPrice->setText(QCoreApplication::translate("CattleRemoveScreen", "0", nullptr));
        removeButton->setText(QCoreApplication::translate("CattleRemoveScreen", "Remover", nullptr));
        backButton->setText(QCoreApplication::translate("CattleRemoveScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleRemoveScreen: public Ui_CattleRemoveScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEREMOVESCREEN_H

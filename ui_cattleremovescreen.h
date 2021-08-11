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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CattleRemoveScreen
{
public:
    QLabel *labelTitle;
    QGroupBox *groupBox;
    QRadioButton *radioButtonDeath;
    QRadioButton *radioButtonSell;
    QTextEdit *inputPrice;
    QLabel *labelPrice;
    QLabel *labelReason;
    QPushButton *removeButton;
    QPushButton *backButton;

    void setupUi(QDialog *CattleRemoveScreen)
    {
        if (CattleRemoveScreen->objectName().isEmpty())
            CattleRemoveScreen->setObjectName(QString::fromUtf8("CattleRemoveScreen"));
        CattleRemoveScreen->resize(694, 550);
        labelTitle = new QLabel(CattleRemoveScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 31));
        QFont font;
        font.setPointSize(10);
        labelTitle->setFont(font);
        groupBox = new QGroupBox(CattleRemoveScreen);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 651, 261));
        radioButtonDeath = new QRadioButton(groupBox);
        radioButtonDeath->setObjectName(QString::fromUtf8("radioButtonDeath"));
        radioButtonDeath->setGeometry(QRect(40, 60, 82, 17));
        radioButtonDeath->setFont(font);
        radioButtonSell = new QRadioButton(groupBox);
        radioButtonSell->setObjectName(QString::fromUtf8("radioButtonSell"));
        radioButtonSell->setGeometry(QRect(40, 90, 82, 17));
        radioButtonSell->setFont(font);
        inputPrice = new QTextEdit(groupBox);
        inputPrice->setObjectName(QString::fromUtf8("inputPrice"));
        inputPrice->setGeometry(QRect(20, 210, 301, 31));
        labelPrice = new QLabel(groupBox);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));
        labelPrice->setGeometry(QRect(20, 190, 47, 13));
        labelPrice->setFont(font);
        labelReason = new QLabel(groupBox);
        labelReason->setObjectName(QString::fromUtf8("labelReason"));
        labelReason->setGeometry(QRect(20, 10, 201, 31));
        labelReason->setFont(font);
        removeButton = new QPushButton(CattleRemoveScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(20, 470, 301, 51));
        removeButton->setFont(font);
        backButton = new QPushButton(CattleRemoveScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(370, 470, 301, 51));
        backButton->setFont(font);

        retranslateUi(CattleRemoveScreen);
        QObject::connect(radioButtonSell, &QRadioButton::toggled, inputPrice, &QTextEdit::setVisible);
        QObject::connect(radioButtonSell, &QRadioButton::toggled, labelPrice, &QLabel::setVisible);

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
        removeButton->setText(QCoreApplication::translate("CattleRemoveScreen", "Remover", nullptr));
        backButton->setText(QCoreApplication::translate("CattleRemoveScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleRemoveScreen: public Ui_CattleRemoveScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEREMOVESCREEN_H

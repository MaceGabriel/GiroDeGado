/********************************************************************************
** Form generated from reading UI file 'cattleregisterscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLEREGISTERSCREEN_H
#define UI_CATTLEREGISTERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CattleRegisterScreen
{
public:
    QPushButton *buyButton;
    QPushButton *birthButton;
    QLabel *labelTitle;
    QPushButton *backButton;

    void setupUi(QDialog *CattleRegisterScreen)
    {
        if (CattleRegisterScreen->objectName().isEmpty())
            CattleRegisterScreen->setObjectName(QString::fromUtf8("CattleRegisterScreen"));
        CattleRegisterScreen->resize(900, 600);
        buyButton = new QPushButton(CattleRegisterScreen);
        buyButton->setObjectName(QString::fromUtf8("buyButton"));
        buyButton->setGeometry(QRect(180, 145, 531, 71));
        QFont font;
        font.setPointSize(12);
        buyButton->setFont(font);
        birthButton = new QPushButton(CattleRegisterScreen);
        birthButton->setObjectName(QString::fromUtf8("birthButton"));
        birthButton->setGeometry(QRect(180, 240, 531, 71));
        birthButton->setFont(font);
        labelTitle = new QLabel(CattleRegisterScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 121, 31));
        labelTitle->setFont(font);
        backButton = new QPushButton(CattleRegisterScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(180, 340, 531, 71));
        backButton->setFont(font);

        retranslateUi(CattleRegisterScreen);

        QMetaObject::connectSlotsByName(CattleRegisterScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleRegisterScreen)
    {
        CattleRegisterScreen->setWindowTitle(QCoreApplication::translate("CattleRegisterScreen", "Tela de Cadastro de Gado", nullptr));
        buyButton->setText(QCoreApplication::translate("CattleRegisterScreen", "Compra", nullptr));
        birthButton->setText(QCoreApplication::translate("CattleRegisterScreen", "Parto", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleRegisterScreen", "Giro de Gado", nullptr));
        backButton->setText(QCoreApplication::translate("CattleRegisterScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleRegisterScreen: public Ui_CattleRegisterScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEREGISTERSCREEN_H

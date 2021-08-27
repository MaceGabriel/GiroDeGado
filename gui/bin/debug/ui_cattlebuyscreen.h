/********************************************************************************
** Form generated from reading UI file 'cattlebuyscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLEBUYSCREEN_H
#define UI_CATTLEBUYSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CattleBuyScreen
{
public:
    QLabel *labelEarring;
    QLabel *labelBreed;
    QLabel *labelDateA;
    QLabel *labelDateB;
    QLabel *labelWeight;
    QLabel *labelPrice;
    QLabel *labelTitle;
    QPushButton *registerButton;
    QPushButton *backButton;
    QLineEdit *inputBreed;
    QLineEdit *inputDateA;
    QLineEdit *inputDateB;
    QLineEdit *inputWeight;
    QLineEdit *inputPrice;
    QLabel *labelCattleEarring;

    void setupUi(QDialog *CattleBuyScreen)
    {
        if (CattleBuyScreen->objectName().isEmpty())
            CattleBuyScreen->setObjectName(QString::fromUtf8("CattleBuyScreen"));
        CattleBuyScreen->resize(900, 600);
        labelEarring = new QLabel(CattleBuyScreen);
        labelEarring->setObjectName(QString::fromUtf8("labelEarring"));
        labelEarring->setGeometry(QRect(160, 100, 61, 16));
        QFont font;
        font.setPointSize(12);
        labelEarring->setFont(font);
        labelBreed = new QLabel(CattleBuyScreen);
        labelBreed->setObjectName(QString::fromUtf8("labelBreed"));
        labelBreed->setGeometry(QRect(160, 170, 61, 16));
        labelBreed->setFont(font);
        labelDateA = new QLabel(CattleBuyScreen);
        labelDateA->setObjectName(QString::fromUtf8("labelDateA"));
        labelDateA->setGeometry(QRect(160, 240, 131, 16));
        labelDateA->setFont(font);
        labelDateB = new QLabel(CattleBuyScreen);
        labelDateB->setObjectName(QString::fromUtf8("labelDateB"));
        labelDateB->setGeometry(QRect(460, 240, 141, 16));
        labelDateB->setFont(font);
        labelWeight = new QLabel(CattleBuyScreen);
        labelWeight->setObjectName(QString::fromUtf8("labelWeight"));
        labelWeight->setGeometry(QRect(160, 310, 61, 16));
        labelWeight->setFont(font);
        labelPrice = new QLabel(CattleBuyScreen);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));
        labelPrice->setGeometry(QRect(460, 310, 61, 16));
        labelPrice->setFont(font);
        labelTitle = new QLabel(CattleBuyScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 20, 101, 16));
        labelTitle->setFont(font);
        registerButton = new QPushButton(CattleBuyScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(160, 470, 191, 51));
        registerButton->setFont(font);
        backButton = new QPushButton(CattleBuyScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(560, 470, 181, 51));
        backButton->setFont(font);
        inputBreed = new QLineEdit(CattleBuyScreen);
        inputBreed->setObjectName(QString::fromUtf8("inputBreed"));
        inputBreed->setGeometry(QRect(160, 190, 591, 41));
        inputBreed->setFont(font);
        inputDateA = new QLineEdit(CattleBuyScreen);
        inputDateA->setObjectName(QString::fromUtf8("inputDateA"));
        inputDateA->setGeometry(QRect(160, 260, 281, 41));
        inputDateA->setFont(font);
        inputDateB = new QLineEdit(CattleBuyScreen);
        inputDateB->setObjectName(QString::fromUtf8("inputDateB"));
        inputDateB->setGeometry(QRect(460, 260, 291, 41));
        inputDateB->setFont(font);
        inputWeight = new QLineEdit(CattleBuyScreen);
        inputWeight->setObjectName(QString::fromUtf8("inputWeight"));
        inputWeight->setGeometry(QRect(160, 330, 281, 41));
        inputWeight->setFont(font);
        inputPrice = new QLineEdit(CattleBuyScreen);
        inputPrice->setObjectName(QString::fromUtf8("inputPrice"));
        inputPrice->setGeometry(QRect(460, 330, 291, 41));
        inputPrice->setFont(font);
        labelCattleEarring = new QLabel(CattleBuyScreen);
        labelCattleEarring->setObjectName(QString::fromUtf8("labelCattleEarring"));
        labelCattleEarring->setGeometry(QRect(220, 100, 141, 16));
        labelCattleEarring->setFont(font);

        retranslateUi(CattleBuyScreen);

        QMetaObject::connectSlotsByName(CattleBuyScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleBuyScreen)
    {
        CattleBuyScreen->setWindowTitle(QCoreApplication::translate("CattleBuyScreen", "Tela de Compra de Gado", nullptr));
        labelEarring->setText(QCoreApplication::translate("CattleBuyScreen", "Brinco:", nullptr));
        labelBreed->setText(QCoreApplication::translate("CattleBuyScreen", "Ra\303\247a", nullptr));
        labelDateA->setText(QCoreApplication::translate("CattleBuyScreen", "Data de aquisi\303\247\303\243o", nullptr));
        labelDateB->setText(QCoreApplication::translate("CattleBuyScreen", "Data de nascimento", nullptr));
        labelWeight->setText(QCoreApplication::translate("CattleBuyScreen", "Peso", nullptr));
        labelPrice->setText(QCoreApplication::translate("CattleBuyScreen", "Valor", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleBuyScreen", "Giro de Gado", nullptr));
        registerButton->setText(QCoreApplication::translate("CattleBuyScreen", "Cadastrar", nullptr));
        backButton->setText(QCoreApplication::translate("CattleBuyScreen", "Sair", nullptr));
        labelCattleEarring->setText(QCoreApplication::translate("CattleBuyScreen", "#10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleBuyScreen: public Ui_CattleBuyScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEBUYSCREEN_H

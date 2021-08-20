/********************************************************************************
** Form generated from reading UI file 'cattleeditscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLEEDITSCREEN_H
#define UI_CATTLEEDITSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CattleEditScreen
{
public:
    QLabel *labelPrice;
    QLineEdit *inputWeight;
    QLineEdit *inputEarring;
    QLineEdit *inputBreed;
    QLabel *labelDateA;
    QLabel *labelDateB;
    QLabel *labelWeight;
    QPushButton *backButton;
    QLabel *labelBreed;
    QPushButton *editButton;
    QLineEdit *inputPrice;
    QLabel *labelTitle;
    QLabel *labelEarring;
    QLineEdit *inputDateA;
    QLineEdit *inputDateB;
    QPushButton *okButton;
    QLabel *labelFather;
    QLineEdit *inputFather;
    QLabel *labelMother;
    QLineEdit *inputMother;

    void setupUi(QDialog *CattleEditScreen)
    {
        if (CattleEditScreen->objectName().isEmpty())
            CattleEditScreen->setObjectName(QString::fromUtf8("CattleEditScreen"));
        CattleEditScreen->resize(900, 600);
        labelPrice = new QLabel(CattleEditScreen);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));
        labelPrice->setGeometry(QRect(450, 380, 61, 16));
        QFont font;
        font.setPointSize(12);
        labelPrice->setFont(font);
        inputWeight = new QLineEdit(CattleEditScreen);
        inputWeight->setObjectName(QString::fromUtf8("inputWeight"));
        inputWeight->setGeometry(QRect(150, 400, 281, 41));
        inputWeight->setFont(font);
        inputEarring = new QLineEdit(CattleEditScreen);
        inputEarring->setObjectName(QString::fromUtf8("inputEarring"));
        inputEarring->setGeometry(QRect(150, 119, 501, 41));
        inputEarring->setFont(font);
        inputBreed = new QLineEdit(CattleEditScreen);
        inputBreed->setObjectName(QString::fromUtf8("inputBreed"));
        inputBreed->setGeometry(QRect(150, 190, 591, 41));
        inputBreed->setFont(font);
        labelDateA = new QLabel(CattleEditScreen);
        labelDateA->setObjectName(QString::fromUtf8("labelDateA"));
        labelDateA->setGeometry(QRect(150, 240, 131, 16));
        labelDateA->setFont(font);
        labelDateB = new QLabel(CattleEditScreen);
        labelDateB->setObjectName(QString::fromUtf8("labelDateB"));
        labelDateB->setGeometry(QRect(450, 240, 141, 16));
        labelDateB->setFont(font);
        labelWeight = new QLabel(CattleEditScreen);
        labelWeight->setObjectName(QString::fromUtf8("labelWeight"));
        labelWeight->setGeometry(QRect(150, 380, 61, 16));
        labelWeight->setFont(font);
        backButton = new QPushButton(CattleEditScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(550, 470, 181, 51));
        backButton->setFont(font);
        labelBreed = new QLabel(CattleEditScreen);
        labelBreed->setObjectName(QString::fromUtf8("labelBreed"));
        labelBreed->setGeometry(QRect(150, 170, 61, 16));
        labelBreed->setFont(font);
        editButton = new QPushButton(CattleEditScreen);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(160, 470, 191, 51));
        editButton->setFont(font);
        inputPrice = new QLineEdit(CattleEditScreen);
        inputPrice->setObjectName(QString::fromUtf8("inputPrice"));
        inputPrice->setGeometry(QRect(450, 400, 291, 41));
        inputPrice->setFont(font);
        labelTitle = new QLabel(CattleEditScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(10, 20, 101, 16));
        labelTitle->setFont(font);
        labelEarring = new QLabel(CattleEditScreen);
        labelEarring->setObjectName(QString::fromUtf8("labelEarring"));
        labelEarring->setGeometry(QRect(150, 100, 61, 16));
        labelEarring->setFont(font);
        inputDateA = new QLineEdit(CattleEditScreen);
        inputDateA->setObjectName(QString::fromUtf8("inputDateA"));
        inputDateA->setGeometry(QRect(150, 260, 281, 41));
        inputDateA->setFont(font);
        inputDateB = new QLineEdit(CattleEditScreen);
        inputDateB->setObjectName(QString::fromUtf8("inputDateB"));
        inputDateB->setGeometry(QRect(450, 260, 291, 41));
        inputDateB->setFont(font);
        okButton = new QPushButton(CattleEditScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(670, 120, 75, 41));
        okButton->setFont(font);
        labelFather = new QLabel(CattleEditScreen);
        labelFather->setObjectName(QString::fromUtf8("labelFather"));
        labelFather->setGeometry(QRect(150, 310, 61, 16));
        labelFather->setFont(font);
        inputFather = new QLineEdit(CattleEditScreen);
        inputFather->setObjectName(QString::fromUtf8("inputFather"));
        inputFather->setGeometry(QRect(150, 330, 281, 41));
        inputFather->setFont(font);
        labelMother = new QLabel(CattleEditScreen);
        labelMother->setObjectName(QString::fromUtf8("labelMother"));
        labelMother->setGeometry(QRect(450, 310, 61, 16));
        labelMother->setFont(font);
        inputMother = new QLineEdit(CattleEditScreen);
        inputMother->setObjectName(QString::fromUtf8("inputMother"));
        inputMother->setGeometry(QRect(450, 330, 291, 41));
        inputMother->setFont(font);

        retranslateUi(CattleEditScreen);

        QMetaObject::connectSlotsByName(CattleEditScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleEditScreen)
    {
        CattleEditScreen->setWindowTitle(QCoreApplication::translate("CattleEditScreen", "Dialog", nullptr));
        labelPrice->setText(QCoreApplication::translate("CattleEditScreen", "Valor", nullptr));
        labelDateA->setText(QCoreApplication::translate("CattleEditScreen", "Data de aquisi\303\247\303\243o", nullptr));
        labelDateB->setText(QCoreApplication::translate("CattleEditScreen", "Data de nascimento", nullptr));
        labelWeight->setText(QCoreApplication::translate("CattleEditScreen", "Peso", nullptr));
        backButton->setText(QCoreApplication::translate("CattleEditScreen", "Voltar", nullptr));
        labelBreed->setText(QCoreApplication::translate("CattleEditScreen", "Ra\303\247a", nullptr));
        editButton->setText(QCoreApplication::translate("CattleEditScreen", "Editar", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleEditScreen", "Giro de Gado", nullptr));
        labelEarring->setText(QCoreApplication::translate("CattleEditScreen", "Brinco", nullptr));
        okButton->setText(QCoreApplication::translate("CattleEditScreen", "Ok", nullptr));
        labelFather->setText(QCoreApplication::translate("CattleEditScreen", "Pai", nullptr));
        labelMother->setText(QCoreApplication::translate("CattleEditScreen", "M\303\243e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleEditScreen: public Ui_CattleEditScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEEDITSCREEN_H

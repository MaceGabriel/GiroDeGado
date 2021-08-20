/********************************************************************************
** Form generated from reading UI file 'cattlebirthscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATTLEBIRTHSCREEN_H
#define UI_CATTLEBIRTHSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CattleBirthScreen
{
public:
    QLabel *labelMother;
    QLabel *labelBreed;
    QLineEdit *inputMother;
    QLabel *labelEarring;
    QLabel *labelTitle;
    QLineEdit *inputWeight;
    QLabel *labelDate;
    QLineEdit *inputFather;
    QLabel *labelFather;
    QLineEdit *inputBreed;
    QLineEdit *inputDate;
    QLabel *labelWeight;
    QPushButton *registerButton;
    QPushButton *backButton;
    QLabel *labelCattleEarring;

    void setupUi(QDialog *CattleBirthScreen)
    {
        if (CattleBirthScreen->objectName().isEmpty())
            CattleBirthScreen->setObjectName(QString::fromUtf8("CattleBirthScreen"));
        CattleBirthScreen->resize(900, 600);
        labelMother = new QLabel(CattleBirthScreen);
        labelMother->setObjectName(QString::fromUtf8("labelMother"));
        labelMother->setGeometry(QRect(470, 260, 61, 16));
        QFont font;
        font.setPointSize(12);
        labelMother->setFont(font);
        labelBreed = new QLabel(CattleBirthScreen);
        labelBreed->setObjectName(QString::fromUtf8("labelBreed"));
        labelBreed->setGeometry(QRect(160, 180, 61, 16));
        labelBreed->setFont(font);
        inputMother = new QLineEdit(CattleBirthScreen);
        inputMother->setObjectName(QString::fromUtf8("inputMother"));
        inputMother->setGeometry(QRect(470, 280, 261, 41));
        inputMother->setFont(font);
        labelEarring = new QLabel(CattleBirthScreen);
        labelEarring->setObjectName(QString::fromUtf8("labelEarring"));
        labelEarring->setGeometry(QRect(160, 100, 61, 16));
        labelEarring->setFont(font);
        labelTitle = new QLabel(CattleBirthScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 81, 16));
        QFont font1;
        font1.setPointSize(10);
        labelTitle->setFont(font1);
        inputWeight = new QLineEdit(CattleBirthScreen);
        inputWeight->setObjectName(QString::fromUtf8("inputWeight"));
        inputWeight->setGeometry(QRect(470, 360, 261, 41));
        inputWeight->setFont(font);
        labelDate = new QLabel(CattleBirthScreen);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setGeometry(QRect(160, 340, 141, 16));
        labelDate->setFont(font);
        inputFather = new QLineEdit(CattleBirthScreen);
        inputFather->setObjectName(QString::fromUtf8("inputFather"));
        inputFather->setGeometry(QRect(160, 280, 271, 41));
        inputFather->setFont(font);
        labelFather = new QLabel(CattleBirthScreen);
        labelFather->setObjectName(QString::fromUtf8("labelFather"));
        labelFather->setGeometry(QRect(160, 260, 111, 16));
        labelFather->setFont(font);
        inputBreed = new QLineEdit(CattleBirthScreen);
        inputBreed->setObjectName(QString::fromUtf8("inputBreed"));
        inputBreed->setGeometry(QRect(160, 200, 571, 41));
        inputBreed->setFont(font);
        inputDate = new QLineEdit(CattleBirthScreen);
        inputDate->setObjectName(QString::fromUtf8("inputDate"));
        inputDate->setGeometry(QRect(160, 360, 271, 41));
        inputDate->setFont(font);
        labelWeight = new QLabel(CattleBirthScreen);
        labelWeight->setObjectName(QString::fromUtf8("labelWeight"));
        labelWeight->setGeometry(QRect(470, 340, 121, 16));
        labelWeight->setFont(font);
        registerButton = new QPushButton(CattleBirthScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(150, 480, 201, 51));
        registerButton->setFont(font1);
        backButton = new QPushButton(CattleBirthScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 480, 191, 51));
        backButton->setFont(font1);
        labelCattleEarring = new QLabel(CattleBirthScreen);
        labelCattleEarring->setObjectName(QString::fromUtf8("labelCattleEarring"));
        labelCattleEarring->setGeometry(QRect(220, 100, 141, 16));
        labelCattleEarring->setFont(font);

        retranslateUi(CattleBirthScreen);

        QMetaObject::connectSlotsByName(CattleBirthScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleBirthScreen)
    {
        CattleBirthScreen->setWindowTitle(QCoreApplication::translate("CattleBirthScreen", "Tela de Parto de Gado", nullptr));
        labelMother->setText(QCoreApplication::translate("CattleBirthScreen", "M\303\243e", nullptr));
        labelBreed->setText(QCoreApplication::translate("CattleBirthScreen", "Ra\303\247a", nullptr));
        labelEarring->setText(QCoreApplication::translate("CattleBirthScreen", "Brinco:", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleBirthScreen", "Giro de Gado", nullptr));
        labelDate->setText(QCoreApplication::translate("CattleBirthScreen", "Data de nascimento", nullptr));
        labelFather->setText(QCoreApplication::translate("CattleBirthScreen", "Pai", nullptr));
        labelWeight->setText(QCoreApplication::translate("CattleBirthScreen", "Peso", nullptr));
        registerButton->setText(QCoreApplication::translate("CattleBirthScreen", "Cadastrar", nullptr));
        backButton->setText(QCoreApplication::translate("CattleBirthScreen", "Voltar", nullptr));
        labelCattleEarring->setText(QCoreApplication::translate("CattleBirthScreen", "#10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleBirthScreen: public Ui_CattleBirthScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEBIRTHSCREEN_H

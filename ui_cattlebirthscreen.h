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
    QLineEdit *inputEarring;
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

    void setupUi(QDialog *CattleBirthScreen)
    {
        if (CattleBirthScreen->objectName().isEmpty())
            CattleBirthScreen->setObjectName(QString::fromUtf8("CattleBirthScreen"));
        CattleBirthScreen->resize(694, 550);
        labelMother = new QLabel(CattleBirthScreen);
        labelMother->setObjectName(QString::fromUtf8("labelMother"));
        labelMother->setGeometry(QRect(370, 250, 61, 16));
        QFont font;
        font.setPointSize(10);
        labelMother->setFont(font);
        labelBreed = new QLabel(CattleBirthScreen);
        labelBreed->setObjectName(QString::fromUtf8("labelBreed"));
        labelBreed->setGeometry(QRect(60, 170, 61, 16));
        labelBreed->setFont(font);
        inputMother = new QLineEdit(CattleBirthScreen);
        inputMother->setObjectName(QString::fromUtf8("inputMother"));
        inputMother->setGeometry(QRect(370, 270, 261, 41));
        inputMother->setFont(font);
        labelEarring = new QLabel(CattleBirthScreen);
        labelEarring->setObjectName(QString::fromUtf8("labelEarring"));
        labelEarring->setGeometry(QRect(60, 90, 61, 16));
        labelEarring->setFont(font);
        inputEarring = new QLineEdit(CattleBirthScreen);
        inputEarring->setObjectName(QString::fromUtf8("inputEarring"));
        inputEarring->setGeometry(QRect(60, 109, 571, 41));
        inputEarring->setFont(font);
        labelTitle = new QLabel(CattleBirthScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 81, 16));
        labelTitle->setFont(font);
        inputWeight = new QLineEdit(CattleBirthScreen);
        inputWeight->setObjectName(QString::fromUtf8("inputWeight"));
        inputWeight->setGeometry(QRect(370, 350, 261, 41));
        inputWeight->setFont(font);
        labelDate = new QLabel(CattleBirthScreen);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setGeometry(QRect(60, 330, 121, 16));
        labelDate->setFont(font);
        inputFather = new QLineEdit(CattleBirthScreen);
        inputFather->setObjectName(QString::fromUtf8("inputFather"));
        inputFather->setGeometry(QRect(60, 270, 271, 41));
        inputFather->setFont(font);
        labelFather = new QLabel(CattleBirthScreen);
        labelFather->setObjectName(QString::fromUtf8("labelFather"));
        labelFather->setGeometry(QRect(60, 250, 111, 16));
        labelFather->setFont(font);
        inputBreed = new QLineEdit(CattleBirthScreen);
        inputBreed->setObjectName(QString::fromUtf8("inputBreed"));
        inputBreed->setGeometry(QRect(60, 190, 571, 41));
        inputBreed->setFont(font);
        inputDate = new QLineEdit(CattleBirthScreen);
        inputDate->setObjectName(QString::fromUtf8("inputDate"));
        inputDate->setGeometry(QRect(60, 350, 271, 41));
        inputDate->setFont(font);
        labelWeight = new QLabel(CattleBirthScreen);
        labelWeight->setObjectName(QString::fromUtf8("labelWeight"));
        labelWeight->setGeometry(QRect(370, 330, 121, 16));
        labelWeight->setFont(font);
        registerButton = new QPushButton(CattleBirthScreen);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(60, 470, 201, 51));
        registerButton->setFont(font);
        backButton = new QPushButton(CattleBirthScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(430, 470, 191, 51));
        backButton->setFont(font);

        retranslateUi(CattleBirthScreen);

        QMetaObject::connectSlotsByName(CattleBirthScreen);
    } // setupUi

    void retranslateUi(QDialog *CattleBirthScreen)
    {
        CattleBirthScreen->setWindowTitle(QCoreApplication::translate("CattleBirthScreen", "Tela de Parto de Gado", nullptr));
        labelMother->setText(QCoreApplication::translate("CattleBirthScreen", "M\303\243e", nullptr));
        labelBreed->setText(QCoreApplication::translate("CattleBirthScreen", "Ra\303\247a", nullptr));
        labelEarring->setText(QCoreApplication::translate("CattleBirthScreen", "Brinco", nullptr));
        labelTitle->setText(QCoreApplication::translate("CattleBirthScreen", "Giro de Gado", nullptr));
        labelDate->setText(QCoreApplication::translate("CattleBirthScreen", "Data de nascimento", nullptr));
        labelFather->setText(QCoreApplication::translate("CattleBirthScreen", "Pai", nullptr));
        labelWeight->setText(QCoreApplication::translate("CattleBirthScreen", "Peso", nullptr));
        registerButton->setText(QCoreApplication::translate("CattleBirthScreen", "Cadastrar", nullptr));
        backButton->setText(QCoreApplication::translate("CattleBirthScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CattleBirthScreen: public Ui_CattleBirthScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATTLEBIRTHSCREEN_H

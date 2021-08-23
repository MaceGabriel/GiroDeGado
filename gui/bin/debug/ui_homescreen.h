/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomeScreen
{
public:
    QPushButton *exitButton;
    QLabel *label;
    QPushButton *financialButton;
    QPushButton *cattleButton;

    void setupUi(QDialog *HomeScreen)
    {
        if (HomeScreen->objectName().isEmpty())
            HomeScreen->setObjectName(QString::fromUtf8("HomeScreen"));
        HomeScreen->resize(900, 600);
        exitButton = new QPushButton(HomeScreen);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(180, 440, 531, 71));
        QFont font;
        font.setPointSize(12);
        exitButton->setFont(font);
        label = new QLabel(HomeScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 121, 31));
        label->setFont(font);
        financialButton = new QPushButton(HomeScreen);
        financialButton->setObjectName(QString::fromUtf8("financialButton"));
        financialButton->setGeometry(QRect(180, 280, 531, 71));
        financialButton->setFont(font);
        cattleButton = new QPushButton(HomeScreen);
        cattleButton->setObjectName(QString::fromUtf8("cattleButton"));
        cattleButton->setGeometry(QRect(180, 120, 531, 71));
        cattleButton->setFont(font);

        retranslateUi(HomeScreen);

        QMetaObject::connectSlotsByName(HomeScreen);
    } // setupUi

    void retranslateUi(QDialog *HomeScreen)
    {
        HomeScreen->setWindowTitle(QCoreApplication::translate("HomeScreen", "Tela Inicial", nullptr));
        exitButton->setText(QCoreApplication::translate("HomeScreen", "Sair", nullptr));
        label->setText(QCoreApplication::translate("HomeScreen", "Giro de Gado", nullptr));
        financialButton->setText(QCoreApplication::translate("HomeScreen", "Financeiro", nullptr));
        cattleButton->setText(QCoreApplication::translate("HomeScreen", "Gado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeScreen: public Ui_HomeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H

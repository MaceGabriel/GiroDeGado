/********************************************************************************
** Form generated from reading UI file 'userremovescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREMOVESCREEN_H
#define UI_USERREMOVESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_UserRemoveScreen
{
public:
    QLabel *labelNickname;
    QLabel *labelTitle;
    QLineEdit *inputNickname;
    QPushButton *removeButton;
    QTableWidget *userRemoveTable;
    QPushButton *okButton;
    QPushButton *backButton;

    void setupUi(QDialog *UserRemoveScreen)
    {
        if (UserRemoveScreen->objectName().isEmpty())
            UserRemoveScreen->setObjectName(QString::fromUtf8("UserRemoveScreen"));
        UserRemoveScreen->resize(900, 600);
        labelNickname = new QLabel(UserRemoveScreen);
        labelNickname->setObjectName(QString::fromUtf8("labelNickname"));
        labelNickname->setGeometry(QRect(130, 100, 201, 16));
        QFont font;
        font.setPointSize(12);
        labelNickname->setFont(font);
        labelTitle = new QLabel(UserRemoveScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 20, 101, 16));
        labelTitle->setFont(font);
        inputNickname = new QLineEdit(UserRemoveScreen);
        inputNickname->setObjectName(QString::fromUtf8("inputNickname"));
        inputNickname->setGeometry(QRect(130, 120, 551, 41));
        inputNickname->setFont(font);
        removeButton = new QPushButton(UserRemoveScreen);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(130, 460, 301, 51));
        removeButton->setFont(font);
        userRemoveTable = new QTableWidget(UserRemoveScreen);
        if (userRemoveTable->columnCount() < 4)
            userRemoveTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        userRemoveTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userRemoveTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userRemoveTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        userRemoveTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (userRemoveTable->rowCount() < 1)
            userRemoveTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        userRemoveTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        userRemoveTable->setObjectName(QString::fromUtf8("userRemoveTable"));
        userRemoveTable->setGeometry(QRect(180, 190, 471, 61));
        userRemoveTable->setFont(font);
        okButton = new QPushButton(UserRemoveScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(700, 120, 75, 41));
        okButton->setFont(font);
        backButton = new QPushButton(UserRemoveScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(480, 460, 301, 51));
        backButton->setFont(font);

        retranslateUi(UserRemoveScreen);

        QMetaObject::connectSlotsByName(UserRemoveScreen);
    } // setupUi

    void retranslateUi(QDialog *UserRemoveScreen)
    {
        UserRemoveScreen->setWindowTitle(QCoreApplication::translate("UserRemoveScreen", "Tela de Exclus\303\243o de Usu\303\241rio", nullptr));
        labelNickname->setText(QCoreApplication::translate("UserRemoveScreen", "Nome de Usu\303\241rio", nullptr));
        labelTitle->setText(QCoreApplication::translate("UserRemoveScreen", "Giro de Gado", nullptr));
        removeButton->setText(QCoreApplication::translate("UserRemoveScreen", "Remover", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userRemoveTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UserRemoveScreen", "Nome de Usu\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userRemoveTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UserRemoveScreen", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userRemoveTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UserRemoveScreen", "Nascimento", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = userRemoveTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("UserRemoveScreen", "Tipo", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = userRemoveTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("UserRemoveScreen", "Usu\303\241rio", nullptr));
        okButton->setText(QCoreApplication::translate("UserRemoveScreen", "Ok", nullptr));
        backButton->setText(QCoreApplication::translate("UserRemoveScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserRemoveScreen: public Ui_UserRemoveScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREMOVESCREEN_H

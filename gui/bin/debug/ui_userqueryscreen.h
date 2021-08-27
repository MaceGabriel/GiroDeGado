/********************************************************************************
** Form generated from reading UI file 'userqueryscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERQUERYSCREEN_H
#define UI_USERQUERYSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_UserQueryScreen
{
public:
    QLineEdit *inputNickname;
    QPushButton *okButton;
    QTableWidget *userQueryTable;
    QLabel *labelNickname;
    QLabel *labelTitle;
    QPushButton *backButton;

    void setupUi(QDialog *UserQueryScreen)
    {
        if (UserQueryScreen->objectName().isEmpty())
            UserQueryScreen->setObjectName(QString::fromUtf8("UserQueryScreen"));
        UserQueryScreen->resize(900, 600);
        inputNickname = new QLineEdit(UserQueryScreen);
        inputNickname->setObjectName(QString::fromUtf8("inputNickname"));
        inputNickname->setGeometry(QRect(130, 110, 551, 41));
        QFont font;
        font.setPointSize(12);
        inputNickname->setFont(font);
        okButton = new QPushButton(UserQueryScreen);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(700, 110, 75, 41));
        okButton->setFont(font);
        userQueryTable = new QTableWidget(UserQueryScreen);
        if (userQueryTable->columnCount() < 4)
            userQueryTable->setColumnCount(4);
        QFont font1;
        font1.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        userQueryTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        userQueryTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        userQueryTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        userQueryTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (userQueryTable->rowCount() < 1)
            userQueryTable->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        userQueryTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        userQueryTable->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        userQueryTable->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        userQueryTable->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        userQueryTable->setItem(0, 3, __qtablewidgetitem8);
        userQueryTable->setObjectName(QString::fromUtf8("userQueryTable"));
        userQueryTable->setGeometry(QRect(200, 170, 471, 61));
        userQueryTable->setFont(font);
        labelNickname = new QLabel(UserQueryScreen);
        labelNickname->setObjectName(QString::fromUtf8("labelNickname"));
        labelNickname->setGeometry(QRect(130, 90, 171, 16));
        labelNickname->setFont(font);
        labelTitle = new QLabel(UserQueryScreen);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 10, 101, 16));
        labelTitle->setFont(font);
        backButton = new QPushButton(UserQueryScreen);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(270, 450, 351, 51));
        backButton->setFont(font);

        retranslateUi(UserQueryScreen);

        QMetaObject::connectSlotsByName(UserQueryScreen);
    } // setupUi

    void retranslateUi(QDialog *UserQueryScreen)
    {
        UserQueryScreen->setWindowTitle(QCoreApplication::translate("UserQueryScreen", "Tela de Consulta de Usu\303\241rio", nullptr));
        okButton->setText(QCoreApplication::translate("UserQueryScreen", "Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem = userQueryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UserQueryScreen", "Nome de Usu\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = userQueryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UserQueryScreen", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = userQueryTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UserQueryScreen", "Nascimento", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = userQueryTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("UserQueryScreen", "Tipo", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = userQueryTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("UserQueryScreen", "Usu\303\241rio", nullptr));

        const bool __sortingEnabled = userQueryTable->isSortingEnabled();
        userQueryTable->setSortingEnabled(false);
        userQueryTable->setSortingEnabled(__sortingEnabled);

        labelNickname->setText(QCoreApplication::translate("UserQueryScreen", "Nome de Usu\303\241rio", nullptr));
        labelTitle->setText(QCoreApplication::translate("UserQueryScreen", "Giro de Gado", nullptr));
        backButton->setText(QCoreApplication::translate("UserQueryScreen", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserQueryScreen: public Ui_UserQueryScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERQUERYSCREEN_H

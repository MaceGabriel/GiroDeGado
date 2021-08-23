/********************************************************************************
** Form generated from reading UI file 'usermanagementscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMANAGEMENTSCREEN_H
#define UI_USERMANAGEMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_UserManagementScreen
{
public:

    void setupUi(QDialog *UserManagementScreen)
    {
        if (UserManagementScreen->objectName().isEmpty())
            UserManagementScreen->setObjectName(QString::fromUtf8("UserManagementScreen"));
        UserManagementScreen->resize(400, 300);

        retranslateUi(UserManagementScreen);

        QMetaObject::connectSlotsByName(UserManagementScreen);
    } // setupUi

    void retranslateUi(QDialog *UserManagementScreen)
    {
        UserManagementScreen->setWindowTitle(QCoreApplication::translate("UserManagementScreen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserManagementScreen: public Ui_UserManagementScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMANAGEMENTSCREEN_H

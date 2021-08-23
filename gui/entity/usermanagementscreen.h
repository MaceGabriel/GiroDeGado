#ifndef USERMANAGEMENTSCREEN_H
#define USERMANAGEMENTSCREEN_H

#include <QDialog>
#include "../../api/includes/farm.h"
namespace Ui {
class UserManagementScreen;
}

class UserManagementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit UserManagementScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~UserManagementScreen();
    Farm* getFarm();

private slots:
    void on_registerButton_clicked();

    void on_queryButton_clicked();

    void on_updateButton_clicked();

    void on_removeButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UserManagementScreen *ui_;
    QWidget* backScreen_;
    Farm* farm_;
};

#endif // USERMANAGEMENTSCREEN_H

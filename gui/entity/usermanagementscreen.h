#ifndef USERMANAGEMENTSCREEN_H
#define USERMANAGEMENTSCREEN_H

#include <QDialog>

namespace Ui {
class UserManagementScreen;
}

class UserManagementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit UserManagementScreen(QWidget *parent = nullptr);
    ~UserManagementScreen();

private slots:
    void on_registerButton_clicked();

    void on_queryButton_clicked();

    void on_updateButton_clicked();

    void on_removeButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UserManagementScreen *ui;
};

#endif // USERMANAGEMENTSCREEN_H

#ifndef FINANCIALMANAGEMENTSCREEN_H
#define FINANCIALMANAGEMENTSCREEN_H

#include <QDialog>
#include "homescreen.h"

namespace Ui {
class FinancialManagementScreen;
}

class FinancialManagementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialManagementScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~FinancialManagementScreen();

    Farm* getFarm();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

    void on_queryButton_clicked();

    void on_removeButton_clicked();

    void on_reportButton_clicked();

private:
    Ui::FinancialManagementScreen *ui;
    QWidget* backScreen;
    Farm* farm;
};

#endif // FINANCIALMANAGEMENTSCREEN_H

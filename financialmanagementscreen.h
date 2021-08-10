#ifndef FINANCIALMANAGEMENTSCREEN_H
#define FINANCIALMANAGEMENTSCREEN_H

#include <QDialog>

namespace Ui {
class FinancialManagementScreen;
}

class FinancialManagementScreen : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialManagementScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~FinancialManagementScreen();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

    void on_queryButton_clicked();

    void on_removeButton_clicked();

    void on_reportButton_clicked();

private:
    Ui::FinancialManagementScreen *ui;
    QWidget* backScreen;
};

#endif // FINANCIALMANAGEMENTSCREEN_H

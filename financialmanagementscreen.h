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
    void on_pushButton_5_clicked();

private:
    Ui::FinancialManagementScreen *ui;
    QWidget* backScreen;
};

#endif // FINANCIALMANAGEMENTSCREEN_H

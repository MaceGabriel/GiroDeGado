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
    explicit FinancialManagementScreen(QWidget *parent = nullptr);
    ~FinancialManagementScreen();

private:
    Ui::FinancialManagementScreen *ui;
};

#endif // FINANCIALMANAGEMENTSCREEN_H

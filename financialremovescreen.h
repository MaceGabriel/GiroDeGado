#ifndef FINANCIALREMOVESCREEN_H
#define FINANCIALREMOVESCREEN_H

#include <QDialog>

namespace Ui {
class FinancialRemoveScreen;
}

class FinancialRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialRemoveScreen(QWidget *parent = nullptr);
    ~FinancialRemoveScreen();

private:
    Ui::FinancialRemoveScreen *ui;
};

#endif // FINANCIALREMOVESCREEN_H

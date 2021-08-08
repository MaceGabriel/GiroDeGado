#ifndef FINANCIALRECORDSCREEN_H
#define FINANCIALRECORDSCREEN_H

#include <QDialog>

namespace Ui {
class FinancialRecordScreen;
}

class FinancialRecordScreen : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialRecordScreen(QWidget *parent = nullptr);
    ~FinancialRecordScreen();

private:
    Ui::FinancialRecordScreen *ui;
};

#endif // FINANCIALRECORDSCREEN_H

#ifndef FINANCIALRECORDSCREEN_H
#define FINANCIALRECORDSCREEN_H

#include <QDialog>
#include "financialmanagementscreen.h"

namespace Ui {
class FinancialRecordScreen;
}

class FinancialRecordScreen : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialRecordScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~FinancialRecordScreen();

    Farm* getFarm();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::FinancialRecordScreen *ui;
    QWidget* backScreen;
    Farm* farm;
};

#endif // FINANCIALRECORDSCREEN_H
#ifndef FINANCIALREMOVESCREEN_H
#define FINANCIALREMOVESCREEN_H

#include <QDialog>
#include "financialmanagementscreen.h"

namespace Ui {
class FinancialRemoveScreen;
}

class FinancialRemoveScreen : public QDialog
{
    Q_OBJECT

public:
    explicit FinancialRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr, Farm* f = nullptr);
    ~FinancialRemoveScreen();

    Farm* getFarm();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

    void on_okButton_clicked();

private:
    Ui::FinancialRemoveScreen *ui;
    QWidget* backScreen;
    Farm* farm;
};

#endif // FINANCIALREMOVESCREEN_H

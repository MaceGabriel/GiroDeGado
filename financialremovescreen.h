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
    explicit FinancialRemoveScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~FinancialRemoveScreen();

private slots:
    void on_backButton_clicked();

    void on_removeButton_clicked();

private:
    Ui::FinancialRemoveScreen *ui;
    QWidget* backScreen;
};

#endif // FINANCIALREMOVESCREEN_H

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
    explicit FinancialRecordScreen(QWidget *parent = nullptr, QWidget* backScreen = nullptr);
    ~FinancialRecordScreen();

private slots:
    void on_backButton_clicked();

    void on_registerButton_clicked();

private:
    Ui::FinancialRecordScreen *ui;
    QWidget* backScreen;
};

#endif // FINANCIALRECORDSCREEN_H

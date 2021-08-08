#include "financialrecordscreen.h"
#include "ui_financialrecordscreen.h"

FinancialRecordScreen::FinancialRecordScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinancialRecordScreen)
{
    ui->setupUi(this);
}

FinancialRecordScreen::~FinancialRecordScreen()
{
    delete ui;
}

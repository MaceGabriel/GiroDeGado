#include "financialremovescreen.h"
#include "ui_financialremovescreen.h"

FinancialRemoveScreen::FinancialRemoveScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinancialRemoveScreen)
{
    ui->setupUi(this);
}

FinancialRemoveScreen::~FinancialRemoveScreen()
{
    delete ui;
}

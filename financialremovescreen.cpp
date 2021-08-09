#include "financialremovescreen.h"
#include "ui_financialremovescreen.h"

FinancialRemoveScreen::FinancialRemoveScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::FinancialRemoveScreen)
{
    this-> backScreen = backScreen;
    ui->setupUi(this);
}

FinancialRemoveScreen::~FinancialRemoveScreen()
{
    delete ui;
}

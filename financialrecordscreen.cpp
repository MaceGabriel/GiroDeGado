#include "financialrecordscreen.h"
#include "ui_financialrecordscreen.h"

FinancialRecordScreen::FinancialRecordScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::FinancialRecordScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

FinancialRecordScreen::~FinancialRecordScreen()
{
    delete ui;
}

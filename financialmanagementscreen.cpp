#include "financialmanagementscreen.h"
#include "ui_financialmanagementscreen.h"

FinancialManagementScreen::FinancialManagementScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinancialManagementScreen)
{
    ui->setupUi(this);
}

FinancialManagementScreen::~FinancialManagementScreen()
{
    delete ui;
}

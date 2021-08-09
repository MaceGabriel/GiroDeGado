#include "financialmanagementscreen.h"
#include "ui_financialmanagementscreen.h"

FinancialManagementScreen::FinancialManagementScreen(QWidget *parent, QWidget *backScreen) :
    QDialog(parent),
    ui(new Ui::FinancialManagementScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

FinancialManagementScreen::~FinancialManagementScreen()
{
    delete ui;
}

void FinancialManagementScreen::on_pushButton_5_clicked()
{
    backScreen->show();
    this->close();
}


#include "financialrecordscreen.h"
#include "ui_financialrecordscreen.h"

FinancialRecordScreen::FinancialRecordScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::FinancialRecordScreen)
{
    setFixedSize(694, 550);
    this->backScreen = backScreen;
    ui->setupUi(this);
}

FinancialRecordScreen::~FinancialRecordScreen()
{
    delete ui;
}

void FinancialRecordScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void FinancialRecordScreen::on_registerButton_clicked()
{

}


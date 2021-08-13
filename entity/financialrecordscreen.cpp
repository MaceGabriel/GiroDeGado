#include "financialrecordscreen.h"
#include "ui_financialrecordscreen.h"

FinancialRecordScreen::FinancialRecordScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialRecordScreen)
{
    setFixedSize(900, 600);
    farm = f;
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

Farm* FinancialRecordScreen::getFarm()
{
    return farm;
}

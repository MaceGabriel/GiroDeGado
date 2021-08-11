#include "financialremovescreen.h"
#include "ui_financialremovescreen.h"

FinancialRemoveScreen::FinancialRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialRemoveScreen)
{
    setFixedSize(694, 550);
    farm = f;
    this-> backScreen = backScreen;
    ui->setupUi(this);
}

FinancialRemoveScreen::~FinancialRemoveScreen()
{
    delete ui;
}

void FinancialRemoveScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void FinancialRemoveScreen::on_removeButton_clicked()
{

}

Farm* FinancialRemoveScreen::getFarm()
{
    return farm;
}

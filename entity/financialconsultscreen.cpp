#include "financialconsultscreen.h"
#include "ui_financialconsultscreen.h"

FinancialConsultScreen::FinancialConsultScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialConsultScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

FinancialConsultScreen::~FinancialConsultScreen()
{
    delete ui;
}

void FinancialConsultScreen::on_okButton_clicked()
{

}


void FinancialConsultScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}

Farm* FinancialConsultScreen::getFarm()
{
    return farm;
}

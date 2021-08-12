#include "financialmanagementscreen.h"
#include "financialrecordscreen.h"
#include "financialremovescreen.h"
#include "ui_financialmanagementscreen.h"

FinancialManagementScreen::FinancialManagementScreen(QWidget *parent, QWidget *backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialManagementScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

FinancialManagementScreen::~FinancialManagementScreen()
{
    delete ui;
}

void FinancialManagementScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void FinancialManagementScreen::on_registerButton_clicked()
{
    FinancialRecordScreen* record = new FinancialRecordScreen(nullptr, this, getFarm());
    this->hide();
    record->show();
}


void FinancialManagementScreen::on_queryButton_clicked()
{

}


void FinancialManagementScreen::on_removeButton_clicked()
{
    FinancialRemoveScreen* remove = new FinancialRemoveScreen(nullptr, this, getFarm());
    this->hide();
    remove->show();
}


void FinancialManagementScreen::on_reportButton_clicked()
{

}

Farm* FinancialManagementScreen::getFarm()
{
    return farm;
}
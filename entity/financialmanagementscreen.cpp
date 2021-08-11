#include "financialmanagementscreen.h"
#include "financialrecordscreen.h"
#include "financialremovescreen.h"
#include "ui_financialmanagementscreen.h"

FinancialManagementScreen::FinancialManagementScreen(QWidget *parent, QWidget *backScreen) :
    QDialog(parent),
    ui(new Ui::FinancialManagementScreen)
{
    setFixedSize(694, 550);
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
    FinancialRecordScreen* record = new FinancialRecordScreen(nullptr, this);
    this->hide();
    record->show();
}


void FinancialManagementScreen::on_queryButton_clicked()
{

}


void FinancialManagementScreen::on_removeButton_clicked()
{
    FinancialRemoveScreen* remove = new FinancialRemoveScreen(nullptr, this);
    this->hide();
    remove->show();
}


void FinancialManagementScreen::on_reportButton_clicked()
{

}


#include "financialmanagementscreen.h"
#include "financialrecordscreen.h"
#include "financialconsultscreen.h"
#include "financialremovescreen.h"
#include "reportscreen.h"
#include "ui_financialmanagementscreen.h"

FinancialManagementScreen::FinancialManagementScreen(QWidget *parent, QWidget *backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::FinancialManagementScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this->backScreen_ = backScreen;
    ui_->setupUi(this);
}

FinancialManagementScreen::~FinancialManagementScreen()
{
    delete ui_;
}

void FinancialManagementScreen::on_backButton_clicked()
{
    backScreen_->show();
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
    FinancialConsultScreen* consult = new FinancialConsultScreen(nullptr, this, getFarm());
    this->hide();
    consult->show();
}

void FinancialManagementScreen::on_removeButton_clicked()
{
    FinancialRemoveScreen* remove = new FinancialRemoveScreen(nullptr, this, getFarm());
    this->hide();
    remove->show();
}

void FinancialManagementScreen::on_reportButton_clicked()
{
    ReportScreen* report = new ReportScreen(nullptr, this, getFarm());
    this->hide();
    report->show();
}

Farm* FinancialManagementScreen::getFarm()
{
    return farm_;
}

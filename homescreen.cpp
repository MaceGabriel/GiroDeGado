#include "homescreen.h"
#include "cattlemanagementscreen.h"
#include "financialmanagementscreen.h"
#include "ui_homescreen.h"

HomeScreen::HomeScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}


void HomeScreen::on_exitButton_clicked()
{
    this->close();
}


void HomeScreen::on_cattleButton_clicked()
{
    CattleManagementScreen* cattleManagement = new CattleManagementScreen(nullptr, this);
    this->hide();
    cattleManagement->exec();
}


void HomeScreen::on_financialButton_clicked()
{
    FinancialManagementScreen* financialManagement = new FinancialManagementScreen(nullptr, this);
    this->hide();
    financialManagement->exec();
}


#include "homescreen.h"
#include "cattlemanagementscreen.h"
#include "financialmanagementscreen.h"
#include "usermanagementscreen.h"
#include "ui_homescreen.h"

HomeScreen::HomeScreen(QWidget *parent, QWidget* backScreen, Farm* f)
    : QDialog(parent)
    , ui_(new Ui::HomeScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui_->setupUi(this);
}

HomeScreen::~HomeScreen()
{
    delete ui_;
}

void HomeScreen::on_cattleButton_clicked()
{
    CattleManagementScreen* cattleManagement = new CattleManagementScreen(nullptr, this, getFarm());
    this->hide();
    cattleManagement->exec();
}

void HomeScreen::on_financialButton_clicked()
{
    FinancialManagementScreen* financialManagement = new FinancialManagementScreen(nullptr, this, getFarm());
    this->hide();
    financialManagement->exec();
}

void HomeScreen::on_logoutButton_clicked()
{
    backScreen_->show();
    this->close();
}

Farm* HomeScreen::getFarm()
{
    return farm_;
}

void HomeScreen::on_userButton_clicked()
{
    UserManagementScreen* userManagement = new UserManagementScreen(nullptr,this,getFarm());
    this->hide();
    userManagement->show();
}


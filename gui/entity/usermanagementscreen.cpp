#include "usermanagementscreen.h"
#include "signupscreen.h"
#include "userremovescreen.h"
#include "usereditscreen.h"
#include "userqueryscreen.h"
#include "ui_usermanagementscreen.h"

UserManagementScreen::UserManagementScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::UserManagementScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this->backScreen_ = backScreen;
    ui_->setupUi(this);
}

UserManagementScreen::~UserManagementScreen()
{
    delete ui_;
}

void UserManagementScreen::on_registerButton_clicked()
{
    SignUpScreen* sign_ = new SignUpScreen(nullptr,this,getFarm());
    this->hide();
    sign_->show();
}


void UserManagementScreen::on_queryButton_clicked()
{
    UserQueryScreen* query_ = new UserQueryScreen(nullptr, this, getFarm());
    this->hide();
    query_->show();
}


void UserManagementScreen::on_updateButton_clicked()
{
    UserEditScreen* update_ = new UserEditScreen(nullptr,this,getFarm());
    this->hide();
    update_->show();
}


void UserManagementScreen::on_removeButton_clicked()
{
    UserRemoveScreen* remove_ = new UserRemoveScreen(nullptr,this,getFarm());
    this->hide();
    remove_->show();
}

Farm* UserManagementScreen::getFarm()
{
    return farm_;
}

void UserManagementScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}


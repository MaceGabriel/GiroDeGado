#include "usermanagementscreen.h"
#include "signupscreen.h"
#include "ui_usermanagementscreen.h"

UserManagementScreen::UserManagementScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserManagementScreen)
{
    ui->setupUi(this);
}

UserManagementScreen::~UserManagementScreen()
{
    delete ui;
}

void UserManagementScreen::on_registerButton_clicked()
{
    SignUpScreen* sign_ = new SignUpScreen(nullptr);
    this->hide();
    sign_->show();
}


void UserManagementScreen::on_queryButton_clicked()
{

}


void UserManagementScreen::on_updateButton_clicked()
{

}


void UserManagementScreen::on_removeButton_clicked()
{

}


void UserManagementScreen::on_backButton_clicked()
{

}


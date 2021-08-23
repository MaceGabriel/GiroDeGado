#include "signupscreen.h"
#include "ui_signupscreen.h"
#include<iostream>

SignUpScreen::SignUpScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::SignUpScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui_->setupUi(this);
}

SignUpScreen::~SignUpScreen()
{
    delete ui_;
}

void SignUpScreen::on_dateEdit_userDateChanged(const QDate &date)
{
    std::cout<<ui_->dateEdit->text().toStdString();
}

void SignUpScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}

Farm* SignUpScreen::getFarm()
{
    return farm_;
}

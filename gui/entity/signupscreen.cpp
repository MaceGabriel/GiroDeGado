#include "signupscreen.h"
#include "ui_signupscreen.h"
#include<iostream>

SignUpScreen::SignUpScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::SignUpScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui->setupUi(this);    
}

SignUpScreen::~SignUpScreen()
{
    delete ui;
}

void SignUpScreen::on_dateEdit_userDateChanged(const QDate &date)
{
    std::cout<<ui->dateEdit->text().toStdString();
}

void SignUpScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}


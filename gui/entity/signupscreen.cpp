#include "signupscreen.h"
#include "ui_signupscreen.h"
#include<iostream>

SignUpScreen::SignUpScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpScreen)
{
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


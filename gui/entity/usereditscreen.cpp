#include "usereditscreen.h"
#include "ui_usereditscreen.h"

UserEditScreen::UserEditScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::UserEditScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui_->setupUi(this);
}

UserEditScreen::~UserEditScreen()
{
    delete ui_;
}

void UserEditScreen::on_okButton_clicked()
{

}


void UserEditScreen::on_signButton_clicked()
{

}


void UserEditScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}

Farm* UserEditScreen::getFarm()
{
    return farm_;
}

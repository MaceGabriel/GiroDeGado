#include "userremovescreen.h"
#include "ui_userremovescreen.h"

UserRemoveScreen::UserRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::UserRemoveScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui_->setupUi(this);
}

UserRemoveScreen::~UserRemoveScreen()
{
    delete ui_;
}

void UserRemoveScreen::on_removeButton_clicked()
{

}


void UserRemoveScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}


void UserRemoveScreen::on_okButton_clicked()
{

}

Farm* UserRemoveScreen::getFarm()
{
    return farm_;
}

#include "userqueryscreen.h"
#include "ui_userqueryscreen.h"

UserQueryScreen::UserQueryScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::UserQueryScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this->backScreen_ = backScreen;
    ui_->setupUi(this);
}

UserQueryScreen::~UserQueryScreen()
{
    delete ui_;
}

void UserQueryScreen::on_okButton_clicked()
{

}


void UserQueryScreen::on_backButton_clicked()
{
    this->close();
    backScreen_->show();
}


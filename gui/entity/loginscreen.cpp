#include "loginscreen.h"
#include "ui_loginscreen.h"
#include "homescreen.h"

LoginScreen::LoginScreen(QWidget *parent, Farm* f) :
    QMainWindow(parent),
    ui_(new Ui::LoginScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    ui_->setupUi(this);
}

LoginScreen::~LoginScreen()
{
    delete ui_;
}

void LoginScreen::on_loginButton_clicked()
{
    HomeScreen* home = new HomeScreen(nullptr, this, getFarm());
    this->hide();
    home->exec();
}

void LoginScreen::on_exitButton_clicked()
{
    this->close();
}

Farm* LoginScreen::getFarm()
{
    return farm_;
}

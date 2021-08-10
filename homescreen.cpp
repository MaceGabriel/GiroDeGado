#include "homescreen.h"
#include "cattlemanagementscreen.h"
#include "ui_homescreen.h"

HomeScreen::HomeScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomeScreen)
{
    ui->setupUi(this);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}


void HomeScreen::on_pushButton_3_clicked()
{

}


void HomeScreen::on_pushButton_clicked()
{
    CattleManagementScreen *c = new CattleManagementScreen(nullptr,this);
    this->hide();
    c->exec();


}


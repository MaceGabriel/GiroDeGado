#include "cattlemanagementscreen.h"
#include "cattleregisterscreen.h"
#include "cattleremovescreen.h"
#include "homescreen.h"
#include "ui_cattlemanagementscreen.h"

CattleManagementScreen::CattleManagementScreen(QWidget* parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleManagementScreen)
{
    setFixedSize(694, 550);
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleManagementScreen::~CattleManagementScreen()
{
    delete ui;
}

void CattleManagementScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}

void CattleManagementScreen::on_registerButton_clicked()
{
    CattleRegisterScreen* cattleRegister = new CattleRegisterScreen(nullptr, this);
    this->hide();
    cattleRegister->show();
}


void CattleManagementScreen::on_queryButton_clicked()
{

}


void CattleManagementScreen::on_updateButton_clicked()
{

}


void CattleManagementScreen::on_removeButton_clicked()
{
    CattleRemoveScreen* remove = new CattleRemoveScreen(nullptr, this);
    this->hide();
    remove->show();
}


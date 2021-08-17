#include "cattlemanagementscreen.h"
#include "cattleregisterscreen.h"
#include "cattleeditscreen.h"
#include "cattleremovescreen.h"
#include "ui_cattlemanagementscreen.h"

CattleManagementScreen::CattleManagementScreen(QWidget* parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::CattleManagementScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this->backScreen_ = backScreen;
    ui_->setupUi(this);
}

CattleManagementScreen::~CattleManagementScreen()
{
    delete ui_;
}

void CattleManagementScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}

void CattleManagementScreen::on_registerButton_clicked()
{
    CattleRegisterScreen* cattleRegister = new CattleRegisterScreen(nullptr, this, getFarm());
    this->hide();
    cattleRegister->show();
}

void CattleManagementScreen::on_queryButton_clicked()
{

}

void CattleManagementScreen::on_updateButton_clicked()
{
    CattleEditScreen* cattleEdit = new CattleEditScreen(nullptr, this, getFarm());
    this->hide();
    cattleEdit->show();
}

void CattleManagementScreen::on_removeButton_clicked()
{
    CattleRemoveScreen* remove = new CattleRemoveScreen(nullptr, this, getFarm());
    this->hide();
    remove->show();
}

Farm* CattleManagementScreen::getFarm()
{
    return farm_;
}

#include "cattlemanagementscreen.h"
#include "cattleregisterscreen.h"
#include "cattleremovescreen.h"
#include "homescreen.h"
#include "ui_cattlemanagementscreen.h"

CattleManagementScreen::CattleManagementScreen(QWidget* parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleManagementScreen)
{
    setFixedSize(694, 550);
    farm = f;
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
    CattleRegisterScreen* cattleRegister = new CattleRegisterScreen(nullptr, this, getFarm());

    // TESTE
    if(farm->beginCattleContainer() != farm->endCattleContainer()){
        auto it = farm->beginCattleContainer();
        std::cout << "Breed: " << (*it)->getBreed() << std::endl;
    }
    // TESTE

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

Farm* CattleManagementScreen::getFarm()
{
    return farm;
}

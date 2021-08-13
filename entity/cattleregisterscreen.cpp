#include "cattleregisterscreen.h"
#include "cattlebuyscreen.h"
#include "cattlebirthscreen.h"
#include "ui_cattleregisterscreen.h"

CattleRegisterScreen::CattleRegisterScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleRegisterScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRegisterScreen::~CattleRegisterScreen()
{
    delete ui;
}

void CattleRegisterScreen::on_buyButton_clicked()
{
    CattleBuyScreen* buy = new CattleBuyScreen(nullptr, this, getFarm());
    this->hide();
    buy->show();
}


void CattleRegisterScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void CattleRegisterScreen::on_birthButton_clicked()
{
    CattleBirthScreen* birth = new CattleBirthScreen(nullptr, this, getFarm());
    this->hide();
    birth->show();
}

Farm* CattleRegisterScreen::getFarm()
{
    return farm;
}


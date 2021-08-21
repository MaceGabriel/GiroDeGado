#include "cattleregisterscreen.h"
#include "cattlebuyscreen.h"
#include "cattlebirthscreen.h"
#include "ui_cattleregisterscreen.h"

CattleRegisterScreen::CattleRegisterScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::CattleRegisterScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this->backScreen_ = backScreen;
    ui_->setupUi(this);
}

CattleRegisterScreen::~CattleRegisterScreen()
{
    delete ui_;
}

void CattleRegisterScreen::on_buyButton_clicked()
{
    CattleBuyScreen* buy = new CattleBuyScreen(nullptr, this, getFarm());
    this->hide();
    buy->show();
}

void CattleRegisterScreen::on_backButton_clicked()
{
    backScreen_->show();
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
    return farm_;
}

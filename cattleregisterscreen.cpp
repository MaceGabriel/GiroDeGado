#include "cattleregisterscreen.h"
#include "cattlebuyscreen.h"
#include "cattlebirthscreen.h"
#include "ui_cattleregisterscreen.h"

CattleRegisterScreen::CattleRegisterScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleRegisterScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRegisterScreen::~CattleRegisterScreen()
{
    delete ui;
}

void CattleRegisterScreen::on_buyButton_clicked()
{
    CattleBuyScreen* buy = new CattleBuyScreen(nullptr, this);
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
    CattleBirthScreen* birth = new CattleBirthScreen(nullptr, this);
    this->hide();
    birth->show();
}


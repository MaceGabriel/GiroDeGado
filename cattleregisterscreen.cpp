#include "cattleregisterscreen.h"
#include "ui_cattleregisterscreen.h"

CattleRegisterScreen::CattleRegisterScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CattleRegisterScreen)
{
    ui->setupUi(this);
}

CattleRegisterScreen::~CattleRegisterScreen()
{
    delete ui;
}

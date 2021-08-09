#include "cattleremovescreen.h"
#include "ui_cattleremovescreen.h"

CattleRemoveScreen::CattleRemoveScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleRemoveScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRemoveScreen::~CattleRemoveScreen()
{
    delete ui;
}

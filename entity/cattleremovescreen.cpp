#include "cattleremovescreen.h"
#include "ui_cattleremovescreen.h"

CattleRemoveScreen::CattleRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleRemoveScreen)
{
    setFixedSize(694, 550);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRemoveScreen::~CattleRemoveScreen()
{
    delete ui;
}


void CattleRemoveScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void CattleRemoveScreen::on_removeButton_clicked()
{

}

Farm* CattleRemoveScreen::getFarm()
{
    return farm;
}

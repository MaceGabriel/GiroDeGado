#include "cattleeditscreen.h"
#include "ui_cattleeditscreen.h"

CattleEditScreen::CattleEditScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleEditScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleEditScreen::~CattleEditScreen()
{
    delete ui;
}

void CattleEditScreen::on_okButton_clicked()
{

}


void CattleEditScreen::on_editButton_clicked()
{

}


void CattleEditScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}

Farm* CattleEditScreen::getFarm()
{
    return farm;
}


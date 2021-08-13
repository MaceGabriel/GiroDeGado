#include "cattleremovescreen.h"
#include "ui_cattleremovescreen.h"

CattleRemoveScreen::CattleRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleRemoveScreen)
{
    setFixedSize(900, 600);
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

void CattleRemoveScreen::on_okButton_clicked()
{

}


void CattleRemoveScreen::on_removeButton_clicked()
{

}

Farm* CattleRemoveScreen::getFarm()
{
    return farm;
}

void CattleRemoveScreen::on_radioButtonDeath_clicked()
{
    ui->inputPrice->setText("");
    ui->labelPrice->setVisible(false);
    ui->inputPrice->setVisible(false);
}

void CattleRemoveScreen::on_radioButtonSell_clicked()
{
    ui->inputPrice->setVisible(true);
    ui->labelPrice->setVisible(true);
    ui->inputPrice->setText("0");
}

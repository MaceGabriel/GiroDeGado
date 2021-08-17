#include "cattleconsultscreen.h"
#include "ui_cattleconsultscreen.h"

CattleConsultScreen::CattleConsultScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleConsultScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleConsultScreen::~CattleConsultScreen()
{
    delete ui;
}

void CattleConsultScreen::on_okButton_clicked()
{

}


void CattleConsultScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}

Farm* CattleConsultScreen::getFarm()
{
    return farm;
}


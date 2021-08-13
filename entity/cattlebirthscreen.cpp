#include "cattlebirthscreen.h"
#include "ui_cattlebirthscreen.h"

CattleBirthScreen::CattleBirthScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleBirthScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleBirthScreen::~CattleBirthScreen()
{
    delete ui;
}

void CattleBirthScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}

void CattleBirthScreen::on_registerButton_clicked()
{

}

Farm* CattleBirthScreen::getFarm()
{
    return farm;
}

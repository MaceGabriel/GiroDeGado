#include "cattlebirthscreen.h"
#include "homescreen.h"
#include "ui_cattlebirthscreen.h"

CattleBirthScreen::CattleBirthScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleBirthScreen)
{
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


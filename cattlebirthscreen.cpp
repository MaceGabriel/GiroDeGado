#include "cattlebirthscreen.h"
#include "homescreen.h"
#include "ui_cattlebirthscreen.h"

CattleBirthScreen::CattleBirthScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CattleBirthScreen)
{
    ui->setupUi(this);
}

CattleBirthScreen::~CattleBirthScreen()
{
    delete ui;
}

void CattleBirthScreen::on_pushButton_4_clicked()
{

}


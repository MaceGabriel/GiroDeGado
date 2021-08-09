#include "cattlebirthscreen.h"
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

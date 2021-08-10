#include "cattlebuyscreen.h"
#include "ui_cattlebuyscreen.h"

CattleBuyScreen::CattleBuyScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleBuyScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleBuyScreen::~CattleBuyScreen()
{
    delete ui;
}

void CattleBuyScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void CattleBuyScreen::on_registerButton_clicked()
{

}


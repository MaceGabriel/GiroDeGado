#include "cattlebuyscreen.h"
#include "ui_cattlebuyscreen.h"

CattleBuyScreen::CattleBuyScreen(QWidget *parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleBuyScreen)
{
    setFixedSize(694, 550);
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


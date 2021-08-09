#include "cattleregisterscreen.h"
#include "cattlebuyscreen.h"
#include "ui_cattleregisterscreen.h"

CattleRegisterScreen::CattleRegisterScreen(QWidget *parent, CattleManagementScreen* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleRegisterScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRegisterScreen::~CattleRegisterScreen()
{
    delete ui;
}

void CattleRegisterScreen::on_pushButton_clicked()
{
    CattleBuyScreen* buy = new CattleBuyScreen(nullptr, this);
    this->hide();
    buy->exec();
}


void CattleRegisterScreen::on_pushButton_4_clicked()
{
    backScreen->show();
    this->close();
}


#include "cattleregisterscreen.h"
#include "cattlebuyscreen.h"
#include "cattlebirthscreen.h"
#include "ui_cattleregisterscreen.h"

CattleRegisterScreen::CattleRegisterScreen(QWidget *parent, QWidget* backScreen, Farm* f, QSqlQuery* q) :
    QDialog(parent),
    ui(new Ui::CattleRegisterScreen)
{
    setFixedSize(900, 600);
    farm = f;
    query = q;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRegisterScreen::~CattleRegisterScreen()
{
    delete ui;
}

void CattleRegisterScreen::on_buyButton_clicked()
{
    CattleBuyScreen* buy = new CattleBuyScreen(nullptr, this, getFarm(), getQuery());
    this->hide();
    buy->show();
}


void CattleRegisterScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void CattleRegisterScreen::on_birthButton_clicked()
{
    CattleBirthScreen* birth = new CattleBirthScreen(nullptr, this, getFarm(), getQuery());
    this->hide();
    birth->show();
}

Farm* CattleRegisterScreen::getFarm()
{
    return farm;
}

QSqlQuery* CattleRegisterScreen::getQuery()
{
    return query;
}

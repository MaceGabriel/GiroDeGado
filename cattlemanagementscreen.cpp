#include "cattlemanagementscreen.h"
#include "cattleregisterscreen.h"
#include "homescreen.h"
#include "ui_cattlemanagementscreen.h"

CattleManagementScreen::CattleManagementScreen(QWidget* parent, QWidget* backScreen) :
    QDialog(parent),
    ui(new Ui::CattleManagementScreen)
{
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleManagementScreen::~CattleManagementScreen()
{
    delete ui;
}

void CattleManagementScreen::on_pushButton_5_clicked()
{
    backScreen->show();
    this->close();
}

void CattleManagementScreen::on_pushButton_clicked()
{
    CattleRegisterScreen* cattleRegister = new CattleRegisterScreen(nullptr, this);
    this->hide();
    cattleRegister->exec();
}


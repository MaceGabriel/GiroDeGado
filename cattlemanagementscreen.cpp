#include "cattlemanagementscreen.h"
#include "ui_cattlemanagementscreen.h"

CattleManagementScreen::CattleManagementScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CattleManagementScreen)
{
    ui->setupUi(this);
}

CattleManagementScreen::~CattleManagementScreen()
{
    delete ui;
}

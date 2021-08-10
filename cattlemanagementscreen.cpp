#include "cattlemanagementscreen.h"
#include "ui_cattlemanagementscreen.h"

CattleManagementScreen::CattleManagementScreen(QWidget *parent, QWidget* backScreen) :
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
    this->backScreen->show();
    this->close();
}


#include "homescreen.h"
#include "cattlemanagementscreen.h"
#include "financialmanagementscreen.h"
#include "ui_homescreen.h"

HomeScreen::HomeScreen(QWidget *parent, Farm* f, QSqlQuery* q)
    : QMainWindow(parent)
    , ui(new Ui::HomeScreen)
{
    setFixedSize(900, 600);
    farm = f;
    query = q;
    ui->setupUi(this);
}

HomeScreen::~HomeScreen()
{
    delete ui;
}

void HomeScreen::on_cattleButton_clicked()
{
    CattleManagementScreen* cattleManagement = new CattleManagementScreen(nullptr, this, getFarm(), getQuery());
    this->hide();
    cattleManagement->exec();
}


void HomeScreen::on_financialButton_clicked()
{
    FinancialManagementScreen* financialManagement = new FinancialManagementScreen(nullptr, this, getFarm(), getQuery());
    this->hide();
    financialManagement->exec();
}


void HomeScreen::on_exitButton_clicked()
{
    this->close();
}


Farm* HomeScreen::getFarm()
{
    return farm;
}

QSqlQuery* HomeScreen::getQuery()
{
    return query;
}

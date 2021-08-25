#include "reportscreen.h"
#include "ui_reportscreen.h"

ReportScreen::ReportScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::ReportScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui->setupUi(this);
}

ReportScreen::~ReportScreen()
{
    delete ui;
}

void ReportScreen::on_okButton_clicked()
{

}


void ReportScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}

Farm* ReportScreen::getFarm()
{
    return farm_;
}


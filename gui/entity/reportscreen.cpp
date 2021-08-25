#include "reportscreen.h"
#include "ui_reportscreen.h"

ReportScreen::ReportScreen(QWidget *parent, QWidget* backScreen, QWidget* loginScreen, Farm* f, std::string current_user) :
    QDialog(parent),
    ui(new Ui::ReportScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    back_screen_ = backScreen;
    login_screen_ = loginScreen;
    current_user_ = current_user;
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
    back_screen_->show();
    this->close();
}

Farm* ReportScreen::getFarm()
{
    return farm_;
}


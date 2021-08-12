#include "cattlebirthscreen.h"
#include "ui_cattlebirthscreen.h"

CattleBirthScreen::CattleBirthScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleBirthScreen)
{
    setFixedSize(900, 600);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleBirthScreen::~CattleBirthScreen()
{
    delete ui;
}

void CattleBirthScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void CattleBirthScreen::on_registerButton_clicked()
{
    QString earring = ui->inputEarring->text();
    std::string earring_2 = earring.toLocal8Bit().constData();

    QString breed = ui->inputBreed->text();
    std::string breed_2 = breed.toLocal8Bit().constData();

    QString date = ui->inputDate->text();
    std::string date_2 = date.toLocal8Bit().constData();

    QString father = ui->inputFather->text();
    std::string father_2 = father.toLocal8Bit().constData();

    QString mother = ui->inputMother->text();
    std::string mother_2 = mother.toLocal8Bit().constData();

    QString weight = ui->inputWeight->text();
    double weight_2 = weight.toDouble();

    Farm* f = getFarm();
    f->createCattle(earring_2, breed_2, date_2, date_2, father_2, mother_2, weight_2, 0.0);

    backScreen->show();
    this->close();
}


Farm* CattleBirthScreen::getFarm()
{
    return farm;
}

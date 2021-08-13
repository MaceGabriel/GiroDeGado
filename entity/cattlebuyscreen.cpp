#include "cattlebuyscreen.h"
#include "ui_cattlebuyscreen.h"

CattleBuyScreen::CattleBuyScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::CattleBuyScreen)
{
    setFixedSize(900, 600);
    farm = f;
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
    QString earring = ui->inputEarring->text();
    std::string earring_2 = earring.toLocal8Bit().constData();

    QString breed = ui->inputBreed->text();
    std::string breed_2 = breed.toLocal8Bit().constData();

    QString dateA = ui->inputDateA->text();
    std::string dateA_2 = dateA.toLocal8Bit().constData();

    QString dateB = ui->inputDateB->text();
    std::string dateB_2 = dateB.toLocal8Bit().constData();

    QString price = ui->inputPrice->text();
    double price_2 = price.toDouble();

    QString weight = ui->inputWeight->text();
    double weight_2 = weight.toDouble();

    if(earring != "" && earring != "INVALIDO"){
        Farm* f = getFarm();
        f->createCattle(earring_2, breed_2, dateA_2, dateB_2, "COMPRADO", "COMPRADO", weight_2, price_2);

        int number = farm->getLastNumberAvailable();

        f->createTransaction(number, price_2, "Compra de Gado", dateA_2, earring_2);

        backScreen->show();
        this->close();
    }
    else{
        ui->inputEarring->setText("INVALIDO");

        if(breed_2 == "")
            ui->inputBreed->setText("A DEFINIR");

        if(dateA_2 == "")
            ui->inputDateA->setText("A DEFINIR");

        if(dateB_2 == "")
            ui->inputDateB->setText("A DEFINIR");

        if(price == "" || price == "0")
            ui->inputPrice->setText("0.0");

        if(weight == "" || weight == "0")
            ui->inputWeight->setText("0.0");
    }
}

Farm* CattleBuyScreen::getFarm()
{
    return farm;
}


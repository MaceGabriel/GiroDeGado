#include "financialrecordscreen.h"
#include "ui_financialrecordscreen.h"

FinancialRecordScreen::FinancialRecordScreen(QWidget *parent, QWidget* backScreen, Farm* f, QSqlQuery* q) :
    QDialog(parent),
    ui(new Ui::FinancialRecordScreen)
{
    setFixedSize(900, 600);
    farm = f;
    query = q;
    this->backScreen = backScreen;
    ui->setupUi(this);

    int number = farm->getLastNumberAvailable(query);
    QString number_str = QString::number(number);

    ui->labelIdTransaction->setText("#" + number_str);
}

FinancialRecordScreen::~FinancialRecordScreen()
{
    delete ui;
}

void FinancialRecordScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void FinancialRecordScreen::on_registerButton_clicked()
{
    QSqlQuery* q = getQuery();

    int number = farm->getLastNumberAvailable(query);

    QString price = ui->inputPrice->text();
    double price_2 = price.toDouble();

    QString description = ui->inputDescription->toPlainText();
    std::string description_2 = description.toLocal8Bit().constData();

    QString date = ui->inputDate->text();
    std::string date_2 = date.toLocal8Bit().constData();

    QString earring = ui->inputEarring->text();
    std::string earring_2 = earring.toLocal8Bit().constData();

    if(price_2 != 0){
        Farm* f = getFarm();
        f->createTransaction(q, number, price_2, description_2, date_2, earring_2);
        backScreen->show();
        this->close();
    }
    else{
        ui->inputPrice->setText("0.0");

        if(description_2 == "")
            ui->inputDescription->setText("A DEFINIR");

        if(date_2 == "")
            ui->inputDate->setText("A DEFINIR");

        if(earring_2 == "")
            ui->inputEarring->setText("A DEFINIR");
    }

}

Farm* FinancialRecordScreen::getFarm()
{
    return farm;
}

QSqlQuery* FinancialRecordScreen::getQuery()
{
    return query;
}

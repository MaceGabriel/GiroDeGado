#include "financialrecordscreen.h"
#include "ui_financialrecordscreen.h"

FinancialRecordScreen::FinancialRecordScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialRecordScreen)
{
    setFixedSize(694, 550);
    farm = f;
    this->backScreen = backScreen;
    ui->setupUi(this);

    int id = 1;

    if(farm->beginTransactionContainer() != farm->endTransactionContainer()){
        for(auto it = farm->beginTransactionContainer(); it < farm->endTransactionContainer(); ++it){
            id++;
        }
    }

    QString id_str = QString::number(id);
    ui->labelIdTransaction->setText("#" + id_str);
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
    int id = 1;

    if(farm->beginTransactionContainer() != farm->endTransactionContainer()){
        for(auto it = farm->beginTransactionContainer(); it < farm->endTransactionContainer(); ++it){
            id++;
        }
    }

    QString price = ui->inputPrice->text();
    double price_2 = price.toDouble();

    QString description = ui->inputDescription->toPlainText();
    std::string description_2 = description.toLocal8Bit().constData();

    QString date = ui->inputDate->text();
    std::string date_2 = date.toLocal8Bit().constData();

    QString earring = ui->inputEarring->text();
    std::string earring_2 = earring.toLocal8Bit().constData();

    Farm* f = getFarm();
    f->createTransaction(id, price_2, description_2, date_2, earring_2);

    backScreen->show();
    this->close();
}

Farm* FinancialRecordScreen::getFarm()
{
    return farm;
}

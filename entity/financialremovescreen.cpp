#include "financialremovescreen.h"
#include "ui_financialremovescreen.h"

FinancialRemoveScreen::FinancialRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f, QSqlQuery* q) :
    QDialog(parent),
    ui(new Ui::FinancialRemoveScreen)
{
    setFixedSize(900, 600);
    farm = f;
    query = q;
    this-> backScreen = backScreen;
    ui->setupUi(this);
}

FinancialRemoveScreen::~FinancialRemoveScreen()
{
    delete ui;
}

void FinancialRemoveScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void FinancialRemoveScreen::on_okButton_clicked()
{
    QString number = ui->inputIdTransaction->text();

    QSqlQuery* q = getQuery();

    auto model = ui->transactionRemoveTable->model();

    if(q->exec("select * from financial where number='"+number+"'")){
        int count = 0;
        while(q->next()){
            count++;
        }
        if(count > 0){
            q->first();
            QString number = q->value(1).toString();
            QString date = q->value(2).toString();
            QString value = q->value(3).toString();
            QString cattle_earring = q->value(4).toString();
            QString description = q->value(5).toString();

            model->setData(model->index(0,0),number);
            model->setData(model->index(0,1),date);
            model->setData(model->index(0,2),value);
            model->setData(model->index(0,3),cattle_earring);
            model->setData(model->index(0,4),description);
        } else {
            model->setData(model->index(0,0),QString("INVALIDO"));
            model->setData(model->index(0,1),QString("INVALIDO"));
            model->setData(model->index(0,2),QString("INVALIDO"));
            model->setData(model->index(0,3),QString("INVALIDO"));
            model->setData(model->index(0,4),QString("INVALIDO"));
        }
    }
}


void FinancialRemoveScreen::on_removeButton_clicked()
{
    QString number = ui->inputIdTransaction->text();
    auto number_2 = ui->transactionRemoveTable->item(0,0)->text();

    if(number != "" && number_2 != "INVALIDO"){
        std::string number_3 = number_2.toUtf8().constData();

        QSqlQuery* q = getQuery();
        q->exec("delete from financial where number='"+number+"'");

        backScreen->show();
        this->close();
    }

}

Farm* FinancialRemoveScreen::getFarm()
{
    return farm;
}

QSqlQuery* FinancialRemoveScreen::getQuery()
{
    return query;
}


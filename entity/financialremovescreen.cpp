#include "financialremovescreen.h"
#include "ui_financialremovescreen.h"

FinancialRemoveScreen::FinancialRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialRemoveScreen)
{
    setFixedSize(900, 600);
    farm = f;
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
    Farm* f = getFarm();
    auto model = ui->transactionRemoveTable->model();

    if(f->queryExec("select * from financial where number='"+number+"'")){
        int count = 0;
        while(f->queryNext()){
            count++;
        }
        if(count > 0){
            f->queryFirst();
            QString number = f->queryValue(1);
            QString date = f->queryValue(2);
            QString value = f->queryValue(3);
            QString cattle_earring = f->queryValue(4);
            QString description = f->queryValue(5);

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
    Farm* f = getFarm();

    if(number != "" && number_2 != "INVALIDO"){
        std::string number_3 = number_2.toUtf8().constData();

        f->queryExec("delete from financial where number='"+number+"'");

        backScreen->show();
        this->close();
    }

}

Farm* FinancialRemoveScreen::getFarm()
{
    return farm;
}


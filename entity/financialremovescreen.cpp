#include "financialremovescreen.h"
#include "ui_financialremovescreen.h"

FinancialRemoveScreen::FinancialRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui(new Ui::FinancialRemoveScreen)
{
    setFixedSize(694, 550);
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
    QString id = ui->inputIdTransaction->text();
    int id_2 = id.toInt();

    Farm* f = getFarm();
    Transaction* t = f->getTransaction(id_2);

    auto model = ui->transactionRemoveTable->model();

    if(t != NULL){
        QString date = QString::fromStdString(t->getDate());
        QString value = QString::number(t->getValue());
        QString cattle_earring = QString::fromStdString(t->getCattleEarring());
        QString description = QString::fromStdString(t->getDescription());

        model->setData(model->index(0,0),id);
        model->setData(model->index(0,1),date);
        model->setData(model->index(0,2),value);
        model->setData(model->index(0,3),cattle_earring);
        model->setData(model->index(0,4),description);
    }
    else{
        model->setData(model->index(0,0),QString("INVALIDO"));
        model->setData(model->index(0,1),QString("INVALIDO"));
        model->setData(model->index(0,2),QString("INVALIDO"));
        model->setData(model->index(0,3),QString("INVALIDO"));
        model->setData(model->index(0,4),QString("INVALIDO"));
    }
}


void FinancialRemoveScreen::on_removeButton_clicked()
{
    auto id = ui->transactionRemoveTable->item(0,0)->text();

    if(id != "" && id != "INVALIDO"){
        int id_2 = id.toInt();

        Farm* f = getFarm();
        Transaction* t = f->getTransaction(id_2);

        f->remove(t);

        backScreen->show();
        this->close();
    }

}

Farm* FinancialRemoveScreen::getFarm()
{
    return farm;
}


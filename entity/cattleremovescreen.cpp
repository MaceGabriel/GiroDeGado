#include "cattleremovescreen.h"
#include "ui_cattleremovescreen.h"

CattleRemoveScreen::CattleRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f, QSqlQuery* q) :
    QDialog(parent),
    ui(new Ui::CattleRemoveScreen)
{
    setFixedSize(900, 600);
    farm = f;
    query = q;
    this->backScreen = backScreen;
    ui->setupUi(this);
}

CattleRemoveScreen::~CattleRemoveScreen()
{
    delete ui;
}


void CattleRemoveScreen::on_backButton_clicked()
{
    backScreen->show();
    this->close();
}


void CattleRemoveScreen::on_okButton_clicked()
{
    QString cattle_earring = ui->inputCattleEarring->text();

    QSqlQuery* q = getQuery();

    auto model = ui->cattleRemoveTable->model();

    if(q->exec("select * from cattle where earring='"+cattle_earring+"'")){
        int count = 0;
        while(q->next()){
            count++;
        }
        if(count > 0){
            q->first();
            QString earring = q->value(1).toString();
            QString breed = q->value(2).toString();
            QString acquisition_date = q->value(3).toString();
            QString birth_date = q->value(4).toString();
            QString father = q->value(5).toString();
            QString mother = q->value(6).toString();
            QString weight = q->value(7).toString();
            QString value = q->value(8).toString();

            model->setData(model->index(0,0),earring);
            model->setData(model->index(0,1),breed);
            model->setData(model->index(0,2),acquisition_date);
            model->setData(model->index(0,3),birth_date);
            model->setData(model->index(0,4),father);
            model->setData(model->index(0,5),mother);
            model->setData(model->index(0,6),weight);
            model->setData(model->index(0,7),value);
        } else{
            model->setData(model->index(0,0),QString("INVALIDO"));
            model->setData(model->index(0,1),QString("INVALIDO"));
            model->setData(model->index(0,2),QString("INVALIDO"));
            model->setData(model->index(0,3),QString("INVALIDO"));
            model->setData(model->index(0,4),QString("INVALIDO"));
            model->setData(model->index(0,5),QString("INVALIDO"));
            model->setData(model->index(0,6),QString("INVALIDO"));
            model->setData(model->index(0,7),QString("INVALIDO"));
        }
    }
}


void CattleRemoveScreen::on_removeButton_clicked()
{
    QString cattle_earring = ui->inputCattleEarring->text();
    auto earring = ui->cattleRemoveTable->item(0,0)->text();

    if(cattle_earring != "" && earring != "INVALIDO"){
        std::string earring_2 = earring.toUtf8().constData();

        Farm* f = getFarm();
        QSqlQuery* q = getQuery();
        q->exec("delete from cattle where earring='"+cattle_earring+"'");

        if(ui->radioButtonSell->isChecked()){
            int number = farm->getLastNumberAvailable(query);

            QString price = ui->inputPrice->text();
            if(price != ""){
                double price_2 = price.toDouble();

                f->createTransaction(q, number, price_2, "Venda de Gado", "A DEFINIR", earring_2);
            }
        }

        backScreen->show();
        this->close();
    }
}

Farm* CattleRemoveScreen::getFarm()
{
    return farm;
}

void CattleRemoveScreen::on_radioButtonDeath_clicked()
{
    ui->inputPrice->setText("");
    ui->labelPrice->setVisible(false);
    ui->inputPrice->setVisible(false);
}

void CattleRemoveScreen::on_radioButtonSell_clicked()
{
    ui->inputPrice->setVisible(true);
    ui->labelPrice->setVisible(true);
    ui->inputPrice->setText("0");
}

QSqlQuery* CattleRemoveScreen::getQuery()
{
    return query;
}


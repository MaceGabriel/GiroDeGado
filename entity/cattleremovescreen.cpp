#include "cattleremovescreen.h"
#include "ui_cattleremovescreen.h"

CattleRemoveScreen::CattleRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::CattleRemoveScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this->backScreen_ = backScreen;
    ui_->setupUi(this);
}

CattleRemoveScreen::~CattleRemoveScreen()
{
    delete ui_;
}

void CattleRemoveScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}

void CattleRemoveScreen::on_okButton_clicked()
{
    QString cattle_earring = ui_->inputCattleEarring->text();
    Farm* f = getFarm();
    auto model = ui_->cattleRemoveTable->model();

    if(f->queryExec("select * from cattle where earring='"+cattle_earring+"'")){
        int count = 0;
        while(f->queryNext()){
            count++;
        }
        if(count > 0){
            f->queryFirst();
            QString earring = f->queryValue(1);
            QString breed = f->queryValue(2);
            QString acquisition_date = f->queryValue(3);
            QString birth_date = f->queryValue(4);
            QString father = f->queryValue(5);
            QString mother = f->queryValue(6);
            QString weight = f->queryValue(7);
            QString value = f->queryValue(8);

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
    QString cattle_earring = ui_->inputCattleEarring->text();
    auto earring = ui_->cattleRemoveTable->item(0,0)->text();

    if(cattle_earring != "" && earring != "INVALIDO"){
        int earring_2 = earring.toInt();

        Farm* f = getFarm();
        f->queryExec("delete from cattle where earring='"+cattle_earring+"'");

        if(ui_->radioButtonSell->isChecked()){
            int number = farm_->getLastNumberAvailable();

            QString price = ui_->inputPrice->text();
            if(price != ""){
                double price_2 = price.toDouble();

                f->createTransaction(number, price_2, "Venda de Gado", "A DEFINIR", earring_2);
            }
        }

        backScreen_->show();
        this->close();
    }
}

Farm* CattleRemoveScreen::getFarm()
{
    return farm_;
}

void CattleRemoveScreen::on_radioButtonDeath_clicked()
{
    ui_->inputPrice->setText("");
    ui_->labelPrice->setVisible(false);
    ui_->inputPrice->setVisible(false);
}

void CattleRemoveScreen::on_radioButtonSell_clicked()
{
    ui_->inputPrice->setVisible(true);
    ui_->labelPrice->setVisible(true);
    ui_->inputPrice->setText("0");
}

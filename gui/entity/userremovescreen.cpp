#include "userremovescreen.h"
#include "ui_userremovescreen.h"

UserRemoveScreen::UserRemoveScreen(QWidget *parent, QWidget* backScreen, Farm* f) :
    QDialog(parent),
    ui_(new Ui::UserRemoveScreen)
{
    setFixedSize(900, 600);
    farm_ = f;
    this-> backScreen_ = backScreen;
    ui_->setupUi(this);
}

UserRemoveScreen::~UserRemoveScreen()
{
    delete ui_;
}

void UserRemoveScreen::on_okButton_clicked()
{
    QString nickname_q = ui_->inputNickname->text();
    std::string nickname = nickname_q.toUtf8().constData();
    Farm* f = getFarm();
    auto model = ui_->userRemoveTable->model();

    nickname_q = f->getUserNickname(nickname);

    if(nickname_q != ""){
        QString name = f->getUserName(nickname);
        QString date = f->getUserDate(nickname);
        QString type = f->getUserType(nickname);

        model->setData(model->index(0,0),nickname_q);
        model->setData(model->index(0,1),name);
        model->setData(model->index(0,2),date);
        model->setData(model->index(0,3),type);
    }
    else{
        model->setData(model->index(0,0),QString("INVALIDO"));
        model->setData(model->index(0,1),QString("INVALIDO"));
        model->setData(model->index(0,2),QString("INVALIDO"));
        model->setData(model->index(0,3),QString("INVALIDO"));
    }
}

void UserRemoveScreen::on_removeButton_clicked()
{
    Farm* f = getFarm();

    std::string nickname = ui_->inputNickname->text().toUtf8().constData();
    QString nickname_q = f->getUserNickname(nickname);
    nickname = nickname_q.toUtf8().constData();

    QString type = ui_->userRemoveTable->item(0,0)->text();

    if(nickname != "" && type != "INVALIDO" && type != ""){
        f->deleteUser(nickname);

        backScreen_->show();
        this->close();
    }
}

void UserRemoveScreen::on_backButton_clicked()
{
    backScreen_->show();
    this->close();
}

Farm* UserRemoveScreen::getFarm()
{
    return farm_;
}

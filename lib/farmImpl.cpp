#include "../includes/farmImpl.h"

// GLOBAL VARIABLES
vector<Farm*> FarmBody::farm_container_;

// METHODS

FarmBody::farmIterator FarmBody::beginFarmContainer( void ){return farm_container_.begin();} 
FarmBody::farmIterator FarmBody::endFarmContainer( void ){return farm_container_.end();} 

FarmBody::FarmBody(int number, QSqlQuery* query){
    setNumber(number);
    setQuery(query);
}

FarmBody::~FarmBody(){
    std::cout << "size before: " << farm_container_.size() << std::endl;

    // Deletes the farm from the farm container
    farmIterator it = beginFarmContainer();

    for(auto item: farm_container_){
        //if(dynamic_cast<Farm*>(this) == item){
        FarmHandle* itemHandle = static_cast<FarmHandle*>(item);
        if(this->getNumber() == itemHandle->getNumber()){
            std::cout << "LOL" << std::endl;
            farm_container_.erase(it);
            break;
        }
        ++it;
    }

    std::cout << "size after: " << farm_container_.size() << std::endl;
}

void FarmBody::setNumber(int number){
    number_ = number;
}

int FarmBody::getNumber() const{
    return number_;
}

void FarmBody::setQuery(QSqlQuery* query){
    query_ = query;
}

QSqlQuery* FarmBody::getQuery() const{
    return query_;
}

bool FarmBody::queryExec(QString command){
    return query_->exec(command);
}

bool FarmBody::queryNext(){
    return query_->next();
}

bool FarmBody::queryFirst(){
    return query_->first();
}

QString FarmBody::queryValue(int pos){
    return query_->value(pos).toString();
}

void FarmBody::createCattle(int earring, std::string breed, std::string acquisition_date, std::string birth_date,
                            int father, int mother, double weight, double value){
    query_->prepare("insert into cattle (earring, breed, acquisition_date, birth_date, father, mother, weight, value)"
                   "values (:earring, :breed, :acquisition_date, :birth_date, :father, :mother, :weight, :value)");
    query_->bindValue(":earring", earring);
    query_->bindValue(":breed", QString::fromStdString(breed));
    query_->bindValue(":acquisition_date", QString::fromStdString(acquisition_date));
    query_->bindValue(":birth_date", QString::fromStdString(birth_date));
    query_->bindValue(":father", father);
    query_->bindValue(":mother", mother);
    query_->bindValue(":weight", weight);
    query_->bindValue(":value", value);
    query_->exec();
}

void FarmBody::createTransaction(int number, double value, std::string description,
                                 std::string date, int cattle_earring){
    query_->prepare("insert into financial (number, value, description, date, cattle_earring)"
                   "values (:number, :value, :description, :date, :cattle_earring)");
    query_->bindValue(":number", number);
    query_->bindValue(":value", value);
    query_->bindValue(":description", QString::fromStdString(description));
    query_->bindValue(":date", QString::fromStdString(date));
    query_->bindValue(":cattle_earring", cattle_earring);
    query_->exec();
}

Farm* Farm::createFarm(int number, QSqlQuery* query){
    return FarmHandle::createFarm(number, query);
}

Farm* FarmBody::createFarm(int number, QSqlQuery* query){
    Farm* f = new FarmHandle(number, query);
    farm_container_.push_back(f);
    return f;
}

void FarmBody::deleteCattle(int cattle_earring){
    QString earring = QString::number(cattle_earring);

    query_->exec("delete from cattle where earring="+earring);
}

void FarmBody::deleteTransaction(int transaction_number){
    QString number = QString::number(transaction_number);

    query_->exec("delete from financial where number="+number);
}

void FarmBody::setCattleEarring(int actual_cattle_earring, int new_cattle_earring){
    QString actual_earring = QString::number(actual_cattle_earring);
    QString new_earring = QString::number(new_cattle_earring);

    query_->exec("update cattle set earring="+new_earring+" where earring="+actual_earring);
}

QString FarmBody::getCattleEarring(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(1).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleBreed(int cattle_earring, std::string cattle_breed){
    QString earring = QString::number(cattle_earring);
    QString breed = QString::fromStdString(cattle_breed);

    query_->exec("update cattle set breed='"+breed+"' where earring="+earring);
}

QString FarmBody::getCattleBreed(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(2).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleAcquisitionDate(int cattle_earring, std::string cattle_acquisition_date){
    QString earring = QString::number(cattle_earring);
    QString acquisition_date = QString::fromStdString(cattle_acquisition_date);

    query_->exec("update cattle set acquisition_date='"+acquisition_date+"' where earring="+earring);
}

QString FarmBody::getCattleAcquisitionDate(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(3).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleBirthDate(int cattle_earring, std::string cattle_birth_date){
    QString earring = QString::number(cattle_earring);
    QString birth_date = QString::fromStdString(cattle_birth_date);

    query_->exec("update cattle set birth_date='"+birth_date+"' where earring="+earring);
}

QString FarmBody::getCattleBirthDate(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(4).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleFather(int cattle_earring, int cattle_father){
    QString earring = QString::number(cattle_earring);
    QString father = QString::number(cattle_father);

    query_->exec("update cattle set father="+father+" where earring="+earring);
}

QString FarmBody::getCattleFather(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(5).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleMother(int cattle_earring, int cattle_mother){
    QString earring = QString::number(cattle_earring);
    QString mother = QString::number(cattle_mother);

    query_->exec("update cattle set mother="+mother+" where earring="+earring);
}

QString FarmBody::getCattleMother(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(6).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleWeight(int cattle_earring, double cattle_weight){
    QString earring = QString::number(cattle_earring);
    QString weight = QString::number(cattle_weight);

    query_->exec("update cattle set weight="+weight+" where earring="+earring);
}

QString FarmBody::getCattleWeight(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(7).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

void FarmBody::setCattleValue(int cattle_earring, double cattle_value){
    QString earring = QString::number(cattle_earring);
    QString value = QString::number(cattle_value);

    query_->exec("update cattle set value="+value+" where earring="+earring);
}

QString FarmBody::getCattleValue(int cattle_earring) const{
    QString earring = QString::number(cattle_earring);

    query_->exec("select * from cattle where earring="+earring);
    int count = 0;
    while(query_->next()){
        count++;
    }
    if(count > 0){
        query_->first();
        return query_->value(8).toString();
    }
    else{
        QString empty("");
        return empty;
    }
}

int FarmBody::getLastEarringAvailable(){
    query_->exec("select max(earring) from cattle");
    query_->first();
    QString earring_str= query_->value(0).toString();
    int earring = 0;
    if(earring_str != "")
        earring = earring_str.toInt();
    earring++;

    return earring;
}

int FarmBody::getLastNumberAvailable(){
    query_->exec("select max(number) from financial");
    query_->first();
    QString number_str= query_->value(0).toString();
    int number = 0;
    if(number_str != "")
        number = number_str.toInt();
    number++;

    return number;
}

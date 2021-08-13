#include "../includes/farmImpl.h"

// GLOBAL VARIABLES
vector<Farm*> FarmBody::farm_container_;

// METHODS

FarmBody::cattleIterator FarmBody::beginCattleContainer( void ){return cattle_container_.begin();}
FarmBody::cattleIterator FarmBody::endCattleContainer( void ){return cattle_container_.end();}
FarmBody::transactionIterator FarmBody::beginTransactionContainer( void ){return transaction_container_.begin();} 
FarmBody::transactionIterator FarmBody::endTransactionContainer( void ){return transaction_container_.end();}
FarmBody::farmIterator FarmBody::beginFarmContainer( void ){return farm_container_.begin();} 
FarmBody::farmIterator FarmBody::endFarmContainer( void ){return farm_container_.end();} 

FarmBody::FarmBody(QSqlQuery* query){
    setQuery(query);
}

FarmBody::~FarmBody(){
    // Deletes all cattle from the farm
    for (Cattle* item : cattle_container_) {
        delete (item);
    }
    cattle_container_.clear();

    // Deletes all transactions from the farm
    for (Transaction* item : transaction_container_) {
        delete (item);
    }
    transaction_container_.clear();

    // Deletes the farm from the farm container
    farmIterator it = beginFarmContainer();
    for(Farm* item: farm_container_){
        if(dynamic_cast<Farm*>(this) == item){
            farm_container_.erase(it);
            break;
        }
        ++it;
    }
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

Cattle* FarmBody::farmCreateCattle(std::string earring, std::string breed, std::string acquisition_date, std::string birth_date, 
                               std::string father, std::string mother, double weight,  double value){
    Cattle* cattle = new CattleHandle(earring, breed, acquisition_date, birth_date, father, mother, weight, value);
    add(cattle);
    return cattle;
}

void FarmBody::createCattle(std::string earring, std::string breed, std::string acquisition_date,
                            std::string birth_date, std::string father, std::string mother, double weight,
                            double value){
    query_->prepare("insert into cattle (earring, breed, acquisition_date, birth_date, father, mother, weight, value)"
                   "values (:earring, :breed, :acquisition_date, :birth_date, :father, :mother, :weight, :value)");
    query_->bindValue(":earring", QString::fromStdString(earring));
    query_->bindValue(":breed", QString::fromStdString(breed));
    query_->bindValue(":acquisition_date", QString::fromStdString(acquisition_date));
    query_->bindValue(":birth_date", QString::fromStdString(birth_date));
    query_->bindValue(":father", QString::fromStdString(father));
    query_->bindValue(":mother", QString::fromStdString(mother));
    query_->bindValue(":weight", weight);
    query_->bindValue(":value", value);
    query_->exec();
}

Transaction* FarmBody::farmCreateTransaction(int id, double value, std::string description, std::string date, std::string cattle_earring){
    Transaction* transaction = new TransactionHandle(id, value, description, date, cattle_earring);
    add(transaction);
    return transaction;
}

void FarmBody::createTransaction(int number, double value, std::string description,
                                 std::string date, std::string cattle_earring){
    query_->prepare("insert into financial (number, value, description, date, cattle_earring)"
                   "values (:number, :value, :description, :date, :cattle_earring)");
    query_->bindValue(":number", number);
    query_->bindValue(":value", value);
    query_->bindValue(":description", QString::fromStdString(description));
    query_->bindValue(":date", QString::fromStdString(date));
    query_->bindValue(":cattle_earring", QString::fromStdString(cattle_earring));
    query_->exec();
}

Farm* Farm::createFarm(QSqlQuery* query){
    return FarmHandle::createFarm(query);
}

Farm* FarmBody::createFarm(QSqlQuery* query){
    Farm* f = new FarmHandle(query);
    farm_container_.push_back(f);
    return f;
}

void FarmBody::add(Cattle* cattle){
    cattle_container_.insert(endCattleContainer(), cattle);
}

void FarmBody::add(Transaction* transaction){
    transaction_container_.insert(endTransactionContainer(), transaction);
}

void FarmBody::remove(Cattle* cattle){
    auto i = beginCattleContainer();
    for (Cattle* item : cattle_container_){
        if (cattle == item){
            cattle_container_.erase(i);                    
            break;
        }
        ++i;
    }
}

void FarmBody::remove(Transaction* transaction){
    auto i = beginTransactionContainer();
    for (Transaction* item : transaction_container_){
        if (transaction == item){
            transaction_container_.erase(i);                    
            break;
        }
        ++i;
    }
}

void FarmBody::setEarring(Cattle* cattle, std::string cattle_earring){
    cattle->setEarring(cattle_earring);
}

std::string FarmBody::getEarring(Cattle* cattle) const{
    return cattle->getEarring();
}

void FarmBody::setBreed(Cattle* cattle, std::string cattle_breed){
    cattle->setBreed(cattle_breed);
}

std::string FarmBody::getBreed(Cattle* cattle) const{
    return cattle->getBreed();
}

void FarmBody::setAcquisitionDate(Cattle* cattle, std::string cattle_acquisition_date){
    cattle->setAcquisitionDate(cattle_acquisition_date);
}

std::string FarmBody::getAcquisitionDate(Cattle* cattle) const{
    return cattle->getAcquisitionDate();
}

void FarmBody::setBirthDate(Cattle* cattle, std::string cattle_birth_date){
    cattle->setBirthDate(cattle_birth_date);
}

std::string FarmBody::getBirthDate(Cattle* cattle) const{
    return cattle->getBirthDate();
}

void FarmBody::setFather(Cattle* cattle, std::string cattle_father){
    cattle->setFather(cattle_father);
}

std::string FarmBody::getFather(Cattle* cattle) const{
    return cattle->getFather();
}

void FarmBody::setMother(Cattle* cattle, std::string cattle_mother){
    cattle->setMother(cattle_mother);
}

std::string FarmBody::getMother(Cattle* cattle) const{
    return cattle->getMother();
}

void FarmBody::setWeight(Cattle* cattle, double cattle_weight){
    cattle->setWeight(cattle_weight);
}

double FarmBody::getWeight(Cattle* cattle) const{
    return cattle->getWeight();
}

void FarmBody::setValue(Cattle* cattle, double cattle_value){
    cattle->setValue(cattle_value);
}

double FarmBody::getValue(Cattle* cattle) const{
    return cattle->getValue();
}

void FarmBody::setNumber(Transaction* transaction, int transaction_id){
    transaction->setNumber(transaction_id);
}

int FarmBody::getNumber(Transaction* transaction) const{
    return transaction->getNumber();
}

void FarmBody::setValue(Transaction* transaction, double transaction_value){
    transaction->setValue(transaction_value);
}

double FarmBody::getValue(Transaction* transaction) const{
    return transaction->getValue();
}

void FarmBody::setDescription(Transaction* transaction, std::string transaction_description){
    transaction->setDescription(transaction_description);
}

std::string FarmBody::getDescription(Transaction* transaction) const{
    return transaction->getDescription();
}

void FarmBody::setDate(Transaction* transaction, std::string transaction_date){
    transaction->setDate(transaction_date);
}

std::string FarmBody::getDate(Transaction* transaction) const{
    return transaction->getDate();
}

void FarmBody::setCattleEarring(Transaction* transaction, std::string transaction_cattle_earring){
    transaction->setCattleEarring(transaction_cattle_earring);
}

std::string FarmBody::getCattleEarring(Transaction* transaction) const{
    return transaction->getCattleEarring();
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

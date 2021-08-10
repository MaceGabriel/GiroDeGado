// #include "../include/farmImpl.h"
// #include "../include/transactionImpl.h"
// #include "../include/cattleImpl.h"

// // GLOBAL VARIABLES
// vector<Farm*> FarmBody::farm_container_;

// // METHODS

// FarmBody::cattleIterator FarmBody::beginCattleContainer( void ){return cattle_container_.begin();}
// FarmBody::cattleIterator FarmBody::endCattleContainer( void ){return cattle_container_.end();}
// FarmBody::transactionIterator FarmBody::beginTransactionContainer( void ){return transaction_container_.begin();} 
// FarmBody::transactionIterator FarmBody::endTransactionContainer( void ){return transaction_container_.end();}
// FarmBody::farmIterator FarmBody::beginFarmContainer( void ){return farm_container_.begin();} 
// FarmBody::farmIterator FarmBody::endFarmContainer( void ){return farm_container_.end();} 

// FarmBody::FarmBody(){}

// virtual FarmBody::~FarmBody(){
//     // Deletes all cattle from the farm
//     for (Cattle* item : cattle_container_) {
//         delete (item);
//     }
//     cattle_container_.clear();

//     // Deletes all transactions from the farm
//     for (Transaction* item : transaction_container_) {
//         delete (item);
//     }
//     transaction_container_.clear();

//     // Deletes the farm from the farm container
//     farmIterator it = beginFarmContainer();
//     for(Farm* item: farm_container_){
//         if(dynamic_cast<Farn*>(this) == item){
//             farm_container_.erase(it);
//             break;
//         }
//         ++it;
//     }
// }

// Cattle* FarmBody::createCattle(string earring = "", string breed = "", string acquisition_date = "", 
//                         string birth_date = "", string father = "", string mother = "",
//                         double weight = 0.0,  double value = 0.0){
//     Cattle* cattle = new CattleHandle(earring, breed, acquisition_date, birth_date, father, mother, weight, value);
//     add(cattle);
//     return cattle;
// }

// Transaction* FarmBody::createTransaction(int id = 0, double value = 0.0, string description = "", 
//                                 string date = "", string cattle_earring = ""){
//     Transaction* transaction = new TransactionHandle(id, value, description, date, cattle_earring);
//     add(transaction);
//     return transaction;
// }

// Farm* Farm::createFarm(){
//     return FarmHandle::createFarm();
// }

// Farm* FarmBody::createFarm(){
//     Farm* f = new FarmHandle();
//     farm_container_.push_back(f);
//     return f;
// }

// void FarmBody::add(Cattle* cattle){
//     cattle_container_.insert(endCattleContainer(), cattle);
// }

// void FarmBody::add(Transaction* transaction){
//     transaction_container_.insert(endTransactionContainer(), transaction);
// }

// void FarmBody::remove(Cattle* cattle){
//     auto i = beginCattleContainer();
//     for (Cattle* item : cattle_container_){
//         if (cattle == item){
//             cattle_container_.erase(i);                    
//             break;
//         }
//         ++i;
//     }
// }

// void FarmBody::remove(Transaction* transaction){
//     auto i = beginTransactionContainer();
//     for (Transaction* item : transaction_container_){
//         if (transaction == item){
//             transaction_container_.erase(i);                    
//             break;
//         }
//         ++i;
//     }
// }

// void FarmBody::setEarring(Cattle* cattle, string cattle_earring){
//     cattle->setEarring(cattle_earring);
// }

// string FarmBody::getEarring(Cattle* cattle) const{
//     return cattle->getEarring();
// }

// void FarmBody::setBreed(Cattle* cattle, string cattle_breed){
//     cattle->setBreed(cattle_breed);
// }

// string FarmBody::getBreed(Cattle* cattle) const{
//     return cattle->getBreed();
// }

// void FarmBody::setAcquisitionDate(Cattle* cattle, string cattle_acquisition_date){
//     cattle->setAcquisitionDate(cattle_acquisition_date);
// }

// string FarmBody::getAcquisitionDate(Cattle* cattle) const{
//     return cattle->getAcquisitionDate();
// }

// void FarmBody::setBirthDate(Cattle* cattle, string cattle_birth_date){
//     cattle->setBirthDate(cattle_birth_date);
// }

// string FarmBody::getBirthDate(Cattle* cattle) const{
//     return cattle->getBirthDate();
// }

// void FarmBody::setFather(Cattle* cattle, string cattle_father){
//     cattle->setFather(cattle_father);
// }

// string FarmBody::getFather(Cattle* cattle) const{
//     return cattle->getFather();
// }

// void FarmBody::setMother(Cattle* cattle, string cattle_mother){
//     cattle->setMother(cattle_mother);
// }

// string FarmBody::getMother(Cattle* cattle) const{
//     return cattle->getMother();
// }

// void FarmBody::setWeight(Cattle* cattle, double cattle_weight){
//     cattle->setWeight(cattle_weight);
// }

// double FarmBody::getWeight(Cattle* cattle) const{
//     return cattle->getWeight();
// }

// void FarmBody::setValue(Cattle* cattle, double cattle_value){
//     cattle->setValue(cattle_value);
// }

// double FarmBody::getValue(Cattle* cattle) const{
//     return cattle->getValue();
// }

// void FarmBody::setId(Transaction* transaction, int transaction_id){
//     transaction->setId(transaction_id);
// }

// int FarmBody::getId(Transaction* transaction) const{
//     return transaction->getId();
// }

// void FarmBody::setValue(Transaction* transaction, double transaction_value){
//     transaction->setValue(transaction_value);
// }

// double FarmBody::getValue(Transaction* transaction) const{
//     return transaction->getValue();
// }

// void FarmBody::setDescription(Transaction* transaction, string transaction_description){
//     transaction->setDescription(transaction_description);
// }

// string FarmBody::getDescription(Transaction* transaction) const{
//     return transaction->getDescription();
// }

// void FarmBody::setDate(Transaction* transaction, string transaction_date){
//     transaction->setDate(transaction_date);
// }

// string FarmBody::getDate(Transaction* transaction) const{
//     return transaction->getDate();
// }

// void FarmBody::setCattleEarring(Transaction* transaction, string transaction_cattle_earring){
//     transaction->setCattleEarring(transaction_cattle_earring);
// }

// string FarmBody::getCattleEarring(Transaction* transaction) const{
//     return transaction->getCattleEarring();
// }
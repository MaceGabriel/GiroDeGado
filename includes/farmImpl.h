/*!
 \file farmImpl.h
 \brief This file contains the handle/body of a Farm for the GiroDeGado software.
*/

#ifndef FARMIMPL_H
#define FARMIMPL_H

#include "./farm.h"
#include "../includes/transactionImpl.h"
#include "../includes/cattleImpl.h"
#include "./handlebody.h"

/** 
 * \brief
 * This Class represents the body of a Handle/Body idiom of a Farm for the GiroDeGado software.
*/
class FarmBody : public Body{

    protected:
        QSqlQuery* query_; /*!< The query of the GiroDeGado's database. */
        std::vector<Cattle*> cattle_container_; /*!< This attribute stores pointers to the cattle contained in the farm. */
        std::vector<Transaction*> transaction_container_; /*!< This attribute stores pointers to the transactions contained in the farm. */       
        static std::vector<Farm*> farm_container_; /*!< This static attribute stores pointers to the farms created in the application. */

    private:
        // No copy allowed

        /*!
            This is the copy constructor for the FarmBody Class.
            \param sys the FarmBody that is going to be cloned.
        */
        FarmBody (const FarmBody& sys);

        /*!
            This is the overloaded assignment operator for the FarmBody Class.
        */
        FarmBody& operator=(const FarmBody& sys);

    public:
        typedef std::vector<Cattle*>::iterator cattleIterator;
        typedef std::vector<Transaction*>::iterator transactionIterator;
        typedef std::vector<Farm*>::iterator farmIterator;

        cattleIterator beginCattleContainer(); /*!< Returns the iterator to the beginning of the cattle container attribute. */
        cattleIterator endCattleContainer(); /*!< Returns the iterator to the end of the cattle container attribute. */
        transactionIterator beginTransactionContainer(); /*!< Returns the iterator to the beginning of the transaction container attribute. */
        transactionIterator endTransactionContainer(); /*!< Returns the iterator to the end of the transaction container attribute. */
        farmIterator beginFarmContainer(); /*!< Returns the iterator to the beginning of the global farm container std::vector. */
        farmIterator endFarmContainer(); /*!< Returns the iterator to the end of the global farm container std::vector. */

        /*!
            This is the default constructor for the FarmBody Class.
            \return FarmBody - a FarmBody Class object.
        */
        FarmBody(QSqlQuery* query = NULL);

        /*!
            This is the default destructor for the FarmBody Class.
        */
        virtual ~FarmBody();

        /*!
            Sets the query attribute in the Farm Class.
        */
        void setQuery(QSqlQuery* query);

        /*!
            Returns the query attribute in the Farm Class.
        */
        QSqlQuery* getQuery() const;

        /*!
            Executes the exec() method of the query.
        */
        bool queryExec(QString command);

        /*!
            Executes the next() method of the query.
        */
        bool queryNext();

        /*!
            Executes the first() method of the query.
        */
        bool queryFirst();

        /*!
            Executes the value(pos).toString() method of the query.
        */
        QString queryValue(int pos);

        /*!
            Creates a cattle and adds it to the database.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father of the Cattle.
            \param mother the mother of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
            \return Cattle* - a Cattle with a determined earring on the cattle container.
        */
        Cattle* farmCreateCattle(std::string earring = "", std::string breed = "", 
                          std::string acquisition_date = "", std::string birth_date = "", std::string father = "",
                          std::string mother = "", double weight = 0.0,  double value = 0.0);

        /*!
            Creates a cattle and adds it to the database.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father's earring of the Cattle.
            \param mother the mother's earring of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
        */
        void createCattle(int earring = 0, std::string breed = "", std::string acquisition_date = "",
                          std::string birth_date = "", int father = 0, int mother = 0,
                          double weight = 0.0,  double value = 0.0);

        /*!
            Creates a transaction and adds it to the database.
            \param number the number of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
            \return Transaction* - a Transaction with a determined number on the transaction container.
        */
        Transaction* farmCreateTransaction(int number = 0, double value = 0.0, std::string description = "",
                               std::string date = "", std::string cattle_earring = "");

        /*!
            Creates a transaction and adds it to the database.
            \param number the number of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
        */
        void createTransaction(int number = 0, double value = 0.0, std::string description = "",
                               std::string date = "", int cattle_earring = 0);

        /*!
            Creates a Farm and returns it's pointer.
            \return Farm - a Farm Class object.
        */
        static Farm* createFarm(QSqlQuery* query = NULL);

        /*!
           Adds a cattle's pointer to the the cattle container.
           \param cattle the cattle to be added.
        */ 
        void add(Cattle* cattle);
        
        /*!        
           Adds a transaction's pointer to the transaction container.
           \param transaction the transaction to be added.
        */ 
        void add(Transaction* transaction);

        /*!        
           Removes a cattle's pointer on the cattle container.
           \param cattle which will be removed from the cattle container.
        */ 
        void remove(Cattle* cattle);
      
        /*!
           Removes a transaction's pointer on the transaction container.
           \param transaction which will be removed from the transaction container.
        */
        void remove(Transaction* transaction);

        /*!
            Sets the earring attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_earring which will be set to the current Cattle.
        */
        void setEarring(Cattle* cattle, std::string cattle_earring);

        /*!
            Returns the earring attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content earring attribute.  
        */
        std::string getEarring(Cattle* cattle) const;
        
        /*!
            Sets the breed attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_breed which will be set to the current Cattle.
        */
        void setBreed(Cattle* cattle, std::string cattle_breed);

        /*!
            Returns the breed attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content Breed attribute.  
        */
        std::string getBreed(Cattle* cattle) const;

        /*!
            Sets the acquisition date attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_acquisition_date which will be set to the current Cattle.
        */
        void setAcquisitionDate(Cattle* cattle, std::string cattle_acquisition_date);

        /*!
            Returns the acquisition date attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content acquisition date attribute.  
        */
        std::string getAcquisitionDate(Cattle* cattle) const;

        /*!
            Sets the birth date attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_birth_date which will be set to the current Cattle.
        */
        void setBirthDate(Cattle* cattle, std::string cattle_birth_date);

        /*!
            Returns the birth date attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content birth date attribute.  
        */
        std::string getBirthDate(Cattle* cattle) const;

        /*!
            Sets the father attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_father which will be set to the current Cattle.
        */
        void setFather(Cattle* cattle, std::string cattle_father);

        /*!
            Returns the father attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content father attribute.  
        */
        std::string getFather(Cattle* cattle) const;

        /*!
            Sets the mother attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_mother which will be set to the current Cattle.
        */
        void setMother(Cattle* cattle, std::string cattle_mother);

        /*!
            Returns the mother attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content mother attribute.  
        */
        std::string getMother(Cattle* cattle) const;

        /*!
            Sets the weight attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_weight which will be set to the current Cattle.
        */
        void setWeight(Cattle* cattle, double cattle_weight);

        /*!
            Returns the weight attribute of a cattle.
            \param cattle the Cattle at matter.
            \return double - the content weight attribute.  
        */
        double getWeight(Cattle* cattle) const;

        /*!
            Sets the value attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_value which will be set to the current Cattle.
        */
        void setValue(Cattle* cattle, double cattle_value);

        /*!
            Returns the value attribute of a cattle.
            \param cattle the Cattle at matter.
            \return double - the content value attribute.  
        */
        double getValue(Cattle* cattle) const;

        /*!
            Sets the number attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_number which will be set to the current Transaction.
        */
        void setNumber(Transaction* transaction, int transaction_number);

        /*!
            Returns the number attribute of a transaction.
            \param transaction the Transaction at matter.
            \return int - the content number attribute.
        */
        int getNumber(Transaction* transaction) const;

        /*!
            Sets the value attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_value which will be set to the current Transaction.
        */
        void setValue(Transaction* transaction, double transaction_value);

        /*!
            Returns the value attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content value attribute.  
        */
        double getValue(Transaction* transaction) const;
        
        /*!
            Sets the description attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_description which will be set to the current Transaction.
        */
        void setDescription(Transaction* transaction, std::string transaction_description);

        /*!
            Returns the description attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content description attribute.  
        */
        std::string getDescription(Transaction* transaction) const;

        /*!
            Sets the date attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_date which will be set to the current Transaction.
        */
        void setDate(Transaction* transaction, std::string transaction_date);

        /*!
            Returns the date attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content date attribute.  
        */
        std::string getDate(Transaction* transaction) const;

        /*!
            Sets the cattle earring attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_cattle_earring which will be set to the current Transaction.
        */
        void setCattleEarring(Transaction* transaction, std::string transaction_cattle_earring);

        /*!
            Returns the cattle earring attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content cattle earring attribute.  
        */
        std::string getCattleEarring(Transaction* transaction) const;

        /*!
            Returns the last available earring on the cattle container.
            \return int - the last available earring on the cattle container.
        */
        int getLastEarringAvailable();

        /*!
            Returns the last available number on the transaction container.
            \return int - the last available number on the transaction container.
        */
        int getLastNumberAvailable();

};

/** 
 * \brief
 * This Class represents the handle of a Handle/Body idiom of a Farm for the GiroDeGado software implemented in this code.
*/
class FarmHandle : public Handle<FarmBody>, public Farm{
    protected:
        /*!
           Calls the overloaded add() method with a Cattle* parameter implemented in the FarmBody Class.
           \param cattle the cattle to be added.
        */ 
        void add(Cattle* cattle){
            pImpl_->add(cattle);
        }
        
        /*!        
           Calls the overloaded add() method with a Transaction* parameter implemented in the FarmBody Class.
           \param transaction the transaction to be added.
        */ 
        void add(Transaction* transaction){
            pImpl_->add(transaction);
        }

    public:
        friend class UnitFarm; /*!< This Class is used to do some unit tests of the Farm class. */

        typedef std::vector<Cattle*>::iterator cattleIterator;
        typedef std::vector<Transaction*>::iterator transactionIterator;
        typedef std::vector<Farm*>::iterator farmIterator;

        cattleIterator beginCattleContainer(){return pImpl_->beginCattleContainer();} /*!< Returns the iterator to the beginning of the cattle container attribute. */
        cattleIterator endCattleContainer(){return pImpl_->endCattleContainer();} /*!< Returns the iterator to the end of the cattle container attribute. */
        transactionIterator beginTransactionContainer(){return pImpl_->beginTransactionContainer();} /*!< Returns the iterator to the beginning of the transaction container attribute. */
        transactionIterator endTransactionContainer(){return pImpl_->endTransactionContainer();} /*!< Returns the iterator to the end of the transaction container attribute. */
        farmIterator beginFarmContainer(){return pImpl_->beginFarmContainer();} /*!< Returns the iterator to the beginning of the global farm container std::vector. */
        farmIterator endFarmContainer(){return pImpl_->endFarmContainer();} /*!< Returns the iterator to the end of the global farm container std::vector. */

        /*!
            This is the default constructor for the FarmHandle Class.
            \return FarmHandle - a FarmHandle Class object.
        */
        FarmHandle(QSqlQuery* query = NULL){
            pImpl_->setQuery(query);
        };

        /*!
            This is the default destructor for the FarmHandle Class.
        */
        virtual ~FarmHandle(){};

        /*!
            Calls the setQuery() method implemented in the FarmBody Class.
        */
        void setQuery(QSqlQuery* query){
            pImpl_->setQuery(query);
        }

        /*!
            Calls the getQuery() method implemented in the FarmBody Class.
        */
        QSqlQuery* getQuery() const{
            return pImpl_->getQuery();
        }

        /*!
            Executes the exec() method of the query.
        */
        bool queryExec(QString command){
            return pImpl_->queryExec(command);
        }

        /*!
            Calls the queryNext() method implemented in the FarmBody Class.
        */
        bool queryNext(){
            return pImpl_->queryNext();
        }

        /*!
            Calls the queryFirst() method implemented in the FarmBody Class.
        */
        bool queryFirst(){
            return pImpl_->queryFirst();
        }

        /*!
            Calls the queryValue() method implemented in the FarmBody Class.
        */
        QString queryValue(int pos){
            return pImpl_->queryValue(pos);
        }
        
        /*!
            Calls the createCattle() method implemented in the FarmBody Class.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father of the Cattle.
            \param mother the mother of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
            \return Cattle - a Cattle Class object.
        */
        Cattle* farmCreateCattle(std::string earring = "", std::string breed = "", std::string acquisition_date = "", 
                             std::string birth_date = "", std::string father = "", std::string mother = "",
                             double weight = 0.0,  double value = 0.0){
            return pImpl_->farmCreateCattle(earring, breed, acquisition_date, birth_date, father, mother, weight, value);
        }

        /*!
            Calls the createCattle() method implemented in the FarmBody Class.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father of the Cattle.
            \param mother the mother of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
        */
        void createCattle(int earring = 0, std::string breed = "", std::string acquisition_date = "",
                          std::string birth_date = "", int father = 0, int mother = 0, double weight = 0.0,
                          double value = 0.0){
            return pImpl_->createCattle(earring, breed, acquisition_date, birth_date, father, mother, weight, value);
        }

        /*!
            Calls the createTransaction() method implemented in the FarmBody Class.
            \param number the number of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
            \return Transaction* - a Transaction Class object.
        */
        Transaction* farmCreateTransaction(int number = 0, double value = 0.0, std::string description = "", 
                               std::string date = "", std::string cattle_earring = ""){
            return pImpl_->farmCreateTransaction(number, value, description, date, cattle_earring);
        }

        /*!
            Calls the createTransaction() method implemented in the FarmBody Class.
            \param number the number of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
        */
        void createTransaction(int number = 0, double value = 0.0, std::string description = "", 
                               std::string date = "", int cattle_earring = 0){
            return pImpl_->createTransaction(number, value, description, date, cattle_earring);
        }

        /*!
            Calls the getCattleEarring() method implemented in the FarmBody Class.
            \return Farm - a Farm Class object.
        */
        static Farm* createFarm(QSqlQuery* query = NULL){
            return FarmBody::createFarm(query);
        }

        /*!        
           Calls the overloaded remove() method implemented in the FarmBody Class.
           \param cattle which will be removed from the cattle container.
        */ 
        void remove(Cattle* cattle){
            pImpl_->remove(cattle);
        }
      
        /*!
           Calls the overloaded remove() method implemented in the FarmBody Class.
           \param transaction which will be removed from the transaction container.
        */
        void remove(Transaction* transaction){
            pImpl_->remove(transaction);
        }

        /*!
            Calls the setEarring() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_earring which will be set to the current Cattle.
        */
        void setEarring(Cattle* cattle, std::string cattle_earring){
            pImpl_->setEarring(cattle, cattle_earring);
        }

        /*!
            Calls the getEarring() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return std::string - the content earring attribute.  
        */
        std::string getEarring(Cattle* cattle) const{
            return pImpl_->getEarring(cattle);
        }
        
        /*!
            Calls the setBreed() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_breed which will be set to the current Cattle.
        */
        void setBreed(Cattle* cattle, std::string cattle_breed){
            pImpl_->setBreed(cattle, cattle_breed);
        }

        /*!
            Calls the getBreed() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return std::string - the content Breed attribute.  
        */
        std::string getBreed(Cattle* cattle) const{
            return pImpl_->getBreed(cattle);
        }

        /*!
            Calls the setAcquisitionDate() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_acquisition_date which will be set to the current Cattle.
        */
        void setAcquisitionDate(Cattle* cattle, std::string cattle_acquisition_date){
            pImpl_->setAcquisitionDate(cattle, cattle_acquisition_date);
        }

        /*!
            Calls the getAcquisitionDate() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return std::string - the content acquisition date attribute.  
        */
        std::string getAcquisitionDate(Cattle* cattle) const{
            return pImpl_->getAcquisitionDate(cattle);
        }

        /*!
            Calls the setBirthDate() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_birth_date which will be set to the current Cattle.
        */
        void setBirthDate(Cattle* cattle, std::string cattle_birth_date){
            pImpl_->setBirthDate(cattle, cattle_birth_date);
        }

        /*!
            Calls the getBirthDate() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return std::string - the content birth date attribute.  
        */
        std::string getBirthDate(Cattle* cattle) const{
            return pImpl_->getBirthDate(cattle);
        }

        /*!
            Calls the setFather() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_father which will be set to the current Cattle.
        */
        void setFather(Cattle* cattle, std::string cattle_father){
            pImpl_->setFather(cattle, cattle_father);
        }

        /*!
            Calls the getFather() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return std::string - the content father attribute.  
        */
        std::string getFather(Cattle* cattle) const{
            return pImpl_->getFather(cattle);
        }

        /*!
            Calls the setMother() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_mother which will be set to the current Cattle.
        */
        void setMother(Cattle* cattle, std::string cattle_mother){
            pImpl_->setMother(cattle, cattle_mother);
        }

        /*!
            Calls the getMother() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return std::string - the content mother attribute.  
        */
        std::string getMother(Cattle* cattle) const{
            return pImpl_->getMother(cattle);
        }

        /*!
            Calls the setWeight() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_weight which will be set to the current Cattle.
        */
        void setWeight(Cattle* cattle, double cattle_weight){
            pImpl_->setWeight(cattle, cattle_weight);
        }

        /*!
            Calls the getWeight() method implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return double - the content weight attribute.  
        */
        double getWeight(Cattle* cattle) const{
            return pImpl_->getWeight(cattle);
        }

        /*!
            Calls the overloaded setValue() method with a Cattle* parameter implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \param cattle_value which will be set to the current Cattle.
        */
        void setValue(Cattle* cattle, double cattle_value){
            pImpl_->setValue(cattle, cattle_value);
        }

        /*!
            Calls the overloaded getValue() method with a Cattle* parameter implemented in the FarmBody Class.
            \param cattle the Cattle at matter.
            \return double - the content value attribute.  
        */
        double getValue(Cattle* cattle) const{
            return pImpl_->getValue(cattle);
        }

        /*!
            Calls the setNumber() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \param transaction_number which will be set to the current Transaction.
        */
        void setNumber(Transaction* transaction, int transaction_number){
            pImpl_->setNumber(transaction, transaction_number);
        }

        /*!
            Calls the getNumber() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \return int - the content number attribute.
        */
        int getNumber(Transaction* transaction) const{
            return pImpl_->getNumber(transaction);
        }

        /*!
            Calls the overloaded setValue() method with a Transaction* parameter implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \param transaction_value which will be set to the current Transaction.
        */
        void setValue(Transaction* transaction, double transaction_value){
            pImpl_->setValue(transaction, transaction_value);
        }

        /*!
            Calls the overloaded getValue() method with a Transaction* parameter implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \return std::string - the content value attribute.  
        */
        double getValue(Transaction* transaction) const{
            return pImpl_->getValue(transaction);
        }
        
        /*!
            Calls the setDescription() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \param transaction_description which will be set to the current Transaction.
        */
        void setDescription(Transaction* transaction, std::string transaction_description){
            pImpl_->setDescription(transaction, transaction_description);
        }

        /*!
            Calls the getDescription() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \return std::string - the content description attribute.  
        */
        std::string getDescription(Transaction* transaction) const{
            return pImpl_->getDescription(transaction);
        }

        /*!
            Calls the setDate() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \param transaction_date which will be set to the current Transaction.
        */
        void setDate(Transaction* transaction, std::string transaction_date){
            pImpl_->setDate(transaction, transaction_date);
        }

        /*!
            Calls the getDate() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \return std::string - the content date attribute.  
        */
        std::string getDate(Transaction* transaction) const{
            return pImpl_->getDate(transaction);
        }

        /*!
            Calls the setCattleEarring() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \param transaction_cattle_earring which will be set to the current Transaction.
        */
        void setCattleEarring(Transaction* transaction, std::string transaction_cattle_earring){
            pImpl_->setCattleEarring(transaction, transaction_cattle_earring);
        }

        /*!
            Calls the getCattleEarring() method implemented in the FarmBody Class.
            \param transaction the Transaction at matter.
            \return std::string - the content cattle earring attribute.  
        */
        std::string getCattleEarring(Transaction* transaction) const{
            return pImpl_->getCattleEarring(transaction);
        }

        /*!
            Calls the getLastEarringAvailable() method implemented in the FarmBody Class.
            \return int - the last available earring on the cattle container.
        */
        int getLastEarringAvailable(){
            return pImpl_->getLastEarringAvailable();
        }

        /*!
            Calls the getLastNumberAvailable() method implemented in the FarmBody Class.
            \return int - the last available number on the transaction container.
        */
        int getLastNumberAvailable(){
            return pImpl_->getLastNumberAvailable();
        }

};

#endif

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
        int number_; /*!< The number of the farm. */
        QSqlQuery* query_; /*!< The query of the GiroDeGado's database. */
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
        typedef std::vector<Farm*>::iterator farmIterator;

        farmIterator beginFarmContainer(); /*!< Returns the iterator to the beginning of the global farm container std::vector. */
        farmIterator endFarmContainer(); /*!< Returns the iterator to the end of the global farm container std::vector. */

        /*!
            This is the default constructor for the FarmBody Class.
            \return FarmBody - a FarmBody Class object.
        */
        FarmBody(int number = 0, QSqlQuery* query = NULL);

        /*!
            This is the default destructor for the FarmBody Class.
        */
        virtual ~FarmBody();

        /*!
            missing
        */
        void setNumber(int number);

        /*!
            missing
        */
        int getNumber() const;

        /*!
            Sets the query attribute in the Farm Class.
            \param query the query of a database.
        */
        void setQuery(QSqlQuery* query);

        /*!
            Returns the query attribute in the Farm Class.
            \return QSqlQuery* - the content query attribute.  
        */
        QSqlQuery* getQuery() const;

        /*!
            Executes the exec() method of the query.
            \param command the command that will be executed by the query.
            \return bool - if the method was successful or not. 
        */
        bool queryExec(QString command);

        /*!
            Executes the next() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryNext();

        /*!
            Executes the first() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryFirst();

        /*!
            Executes the value(pos).toString() methods of the query.
            \param pos the position of the field in the current record.
            \return QString - the value of the field in the current record, converted to a QString. 
        */
        QString queryValue(int pos);
        
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
                          std::string birth_date = "", int father = 0, int mother = 0, double weight = 0.0,
                          double value = 0.0);
        
        /*!
            Creates a transaction and adds it to the database.
            \param id the id of the Transaction.
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
        static Farm* createFarm(int number = 0, QSqlQuery* query = NULL);

        /*!        
           Deletes a cattle from the database.
           \param cattle_earring earring of the cattle that will be deleted.
        */ 
        void deleteCattle(int cattle_earring);
      
        /*!
           Deletes a transaction from the database.
           \param transaction_number number of the transaction that will be deleted.
        */
        void deleteTransaction(int transaction_number);

        /*!
            Sets the earring of a registered Cattle in the database.
            \param actual_cattle_earring the earring of the Cattle.
            \param new_cattle_earring which will be set to the Cattle.
        */
        void setCattleEarring(int actual_cattle_earring, int new_cattle_earring);

        /*!
            Returns the earring of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content earring attribute.  
        */
        QString getCattleEarring(int cattle_earring) const;
        
        /*!
            Sets the breed of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_breed which will be set to the Cattle.
        */
        void setCattleBreed(int cattle_earring, std::string cattle_breed);

        /*!
            Returns the breed of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content Breed attribute.  
        */
        QString getCattleBreed(int cattle_earring) const;

        /*!
            Sets the acquisition date of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_acquisition_date which will be set to the Cattle.
        */
        void setCattleAcquisitionDate(int cattle_earring, std::string cattle_acquisition_date);

        /*!
            Returns the acquisition date of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content acquisition date attribute.  
        */
        QString getCattleAcquisitionDate(int cattle_earring) const;

        /*!
            Sets the birth date of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_birth_date which will be set to the Cattle.
        */
        void setCattleBirthDate(int cattle_earring, std::string cattle_birth_date);

        /*!
            Returns the birth date of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content birth date attribute.  
        */
        QString getCattleBirthDate(int cattle_earring) const;

        /*!
            Sets the father's earring of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_father which will be set to the Cattle.
        */
        void setCattleFather(int cattle_earring, int cattle_father);

        /*!
            Returns the father's earring of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content father attribute.  
        */
        QString getCattleFather(int cattle_earring) const;

        /*!
            Sets the mother's earring of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_mother which will be set to the Cattle.
        */
        void setCattleMother(int cattle_earring, int cattle_mother);

        /*!
            Returns the mother's earring of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content mother attribute.  
        */
        QString getCattleMother(int cattle_earring) const;

        /*!
            Sets the weight of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_weight which will be set to the Cattle.
        */
        void setCattleWeight(int cattle_earring, double cattle_weight);

        /*!
            Returns the weight of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content weight attribute.  
        */
        QString getCattleWeight(int cattle_earring) const;

        /*!
            Sets the value of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \param cattle_value which will be set to the Cattle.
        */
        void setCattleValue(int cattle_earring, double cattle_value);

        /*!
            Returns the value of a registered Cattle in the database.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content value attribute.  
        */
        QString getCattleValue(int cattle_earring) const;

        /*!
            Returns the last available earring on the cattle table from the database.
            \return int - the last available earring on the cattle table from the database.
        */
        int getLastEarringAvailable();

        /*!
            Returns the last available number on the financial table from the database.
            \return int - the last available number on the financial table from the database.
        */
        int getLastNumberAvailable();

};

/** 
 * \brief
 * This Class represents the handle of a Handle/Body idiom of a Farm for the GiroDeGado software implemented in this code.
*/
class FarmHandle : public Handle<FarmBody>, public Farm{

    public:
        typedef std::vector<Farm*>::iterator farmIterator;

        farmIterator beginFarmContainer(){return pImpl_->beginFarmContainer();} /*!< Returns the iterator to the beginning of the global farm container std::vector. */
        farmIterator endFarmContainer(){return pImpl_->endFarmContainer();} /*!< Returns the iterator to the end of the global farm container std::vector. */

        /*!
            This is the default constructor for the FarmHandle Class.
            \return FarmHandle - a FarmHandle Class object.
        */
        FarmHandle(int number = 0, QSqlQuery* query = NULL){
            pImpl_->setNumber(number);
            pImpl_->setQuery(query);
        };

        /*!
            This is the default destructor for the FarmHandle Class.
        */
        virtual ~FarmHandle(){
            // Deletes the farm from the farm container
            // for(farmIterator it = beginFarmContainer(); it != endFarmContainer(); ++it){
            //     if(dynamic_cast<Farm*>(this) == (*it)){
            //         farm_container_.erase(it);
            //         break;
            //     }
            // }
        };

        void setNumber(int number){
            pImpl_->setNumber(number);
        }

        int getNumber() const{
            return pImpl_->getNumber();
        }

        /*!
            Sets the query attribute in the Farm Class.
            \param query the query of a database.
        */
        void setQuery(QSqlQuery* query){
            pImpl_->setQuery(query);
        }

        /*!
            Returns the query attribute in the Farm Class.
            \return QSqlQuery* - the content query attribute.  
        */
        QSqlQuery* getQuery() const{
            return pImpl_->getQuery();
        }

        /*!
            Executes the exec() method of the query.
            \param command the command that will be executed by the query.
            \return bool - if the method was successful or not. 
        */
        bool queryExec(QString command){
            return pImpl_->queryExec(command);
        }

        /*!
            Executes the next() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryNext(){
            return pImpl_->queryNext();
        }

        /*!
            Executes the first() method of the query.
            \return bool - if the method was successful or not. 
        */
        bool queryFirst(){
            return pImpl_->queryFirst();
        }

        /*!
            Executes the value(pos).toString() methods of the query.
            \param pos the position of the field in the current record.
            \return QString - the value of the field in the current record, converted to a QString. 
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
            \param father the father's earring of the Cattle.
            \param mother the mother's earring of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
        */
        void createCattle(int earring = 0, std::string breed = "", std::string acquisition_date = "",
                          std::string birth_date = "", int father = 0, int mother = 0, double weight = 0.0,
                          double value = 0.0){
            pImpl_->createCattle(earring, breed, acquisition_date, birth_date, father, mother, weight, value);
        }
        
        /*!
            Calls the createTransaction() method implemented in the FarmBody Class.
            \param id the id of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
        */
        void createTransaction(int number = 0, double value = 0.0, std::string description = "",
                               std::string date = "", int cattle_earring = 0){
            pImpl_->createTransaction(number, value, description, date, cattle_earring);
        }

        /*!
            Calls the createFarm() method implemented in the FarmBody Class.
            \return Farm - a Farm Class object.
        */
        static Farm* createFarm(int number = 0, QSqlQuery* query = NULL){
            return FarmBody::createFarm(number, query);
        }

        /*!        
           Calls the deleteCattle() method implemented in the FarmBody Class.
           \param cattle_earring earring of the cattle that will be deleted.
        */ 
        void deleteCattle(int cattle_earring){
            pImpl_->deleteCattle(cattle_earring);
        }
      
        /*!
           Calls the deleteTransaction() method implemented in the FarmBody Class.
           \param transaction_number number of the transaction that will be deleted.
        */
        void deleteTransaction(int transaction_number){
            pImpl_->deleteTransaction(transaction_number);
        }

        /*!
            Calls the setCattleEarring() method implemented in the FarmBody Class.
            \param actual_cattle_earring the earring of the Cattle.
            \param new_cattle_earring which will be set to the Cattle.
        */
        void setCattleEarring(int actual_cattle_earring, int new_cattle_earring){
            pImpl_->setCattleEarring(actual_cattle_earring, new_cattle_earring);
        }

        /*!
            Calls the getCattleEarring() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content earring attribute.  
        */
        QString getCattleEarring(int cattle_earring) const{
            return pImpl_->getCattleEarring(cattle_earring);
        }
        
        /*!
            Calls the setCattleBreed() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_breed which will be set to the Cattle.
        */
        void setCattleBreed(int cattle_earring, std::string cattle_breed){
            pImpl_->setCattleBreed(cattle_earring, cattle_breed);
        }

        /*!
            Calls the getCattleBreed() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content Breed attribute.  
        */
        QString getCattleBreed(int cattle_earring) const{
            return pImpl_->getCattleBreed(cattle_earring);
        }

        /*!
            Calls the setCattleAcquisitionDate() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_acquisition_date which will be set to the Cattle.
        */
        void setCattleAcquisitionDate(int cattle_earring, std::string cattle_acquisition_date){
            pImpl_->setCattleAcquisitionDate(cattle_earring, cattle_acquisition_date);
        }

        /*!
            Calls the getCattleAcquisitionDate() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content acquisition date attribute.  
        */
        QString getCattleAcquisitionDate(int cattle_earring) const{
            return pImpl_->getCattleAcquisitionDate(cattle_earring);
        }

        /*!
            Calls the setCattleBirthDate() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_birth_date which will be set to the Cattle.
        */
        void setCattleBirthDate(int cattle_earring, std::string cattle_birth_date){
            pImpl_->setCattleBirthDate(cattle_earring, cattle_birth_date);
        }

        /*!
            Calls the getCattleBirthDate() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content birth date attribute.  
        */
        QString getCattleBirthDate(int cattle_earring) const{
            return pImpl_->getCattleBirthDate(cattle_earring);
        }

        /*!
            Calls the setCattleFather() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_father which will be set to the Cattle.
        */
        void setCattleFather(int cattle_earring, int cattle_father){
            pImpl_->setCattleFather(cattle_earring, cattle_father);
        }

        /*!
            Calls the getCattleFather() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content father attribute.  
        */
        QString getCattleFather(int cattle_earring) const{
            return pImpl_->getCattleFather(cattle_earring);
        }

        /*!
            Calls the setCattleMother() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_mother which will be set to the Cattle.
        */
        void setCattleMother(int cattle_earring, int cattle_mother){
            pImpl_->setCattleMother(cattle_earring, cattle_mother);
        }

        /*!
            Calls the getCattleMother() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content mother attribute.  
        */
        QString getCattleMother(int cattle_earring) const{
            return pImpl_->getCattleMother(cattle_earring);
        }

        /*!
            Calls the setCattleWeight() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_weight which will be set to the Cattle.
        */
        void setCattleWeight(int cattle_earring, double cattle_weight){
            pImpl_->setCattleWeight(cattle_earring, cattle_weight);
        }

        /*!
            Calls the getCattleWeight() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content weight attribute.  
        */
        QString getCattleWeight(int cattle_earring) const{
            return pImpl_->getCattleWeight(cattle_earring);
        }

        /*!
            Calls the setCattleValue() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \param cattle_value which will be set to the Cattle.
        */
        void setCattleValue(int cattle_earring, double cattle_value){
            pImpl_->setCattleValue(cattle_earring, cattle_value);
        }

        /*!
            Calls the getCattleValue() method implemented in the FarmBody Class.
            \param cattle_earring the earring of the Cattle.
            \return QString - the content value attribute.  
        */
        QString getCattleValue(int cattle_earring) const{
            return pImpl_->getCattleValue(cattle_earring);
        }

        /*!
            Calls the getLastEarringAvailable() method implemented in the FarmBody Class.
            \return int - the last available earring on the cattle table from the database.
        */
        int getLastEarringAvailable(){
            return pImpl_->getLastEarringAvailable();
        }

        /*!
            Calls the getLastNumberAvailable() method implemented in the FarmBody Class.
            \return int - the last available number on the financial table from the database.
        */
        int getLastNumberAvailable(){
            return pImpl_->getLastNumberAvailable();
        }

};

#endif

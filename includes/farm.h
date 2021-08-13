#ifndef FARM_H
#define FARM_H

#include <vector>
#include <QtSql>

#include "./cattle.h"
#include "./transaction.h"

//! Class Farm
/**
* This Class represents a Farm for the GiroDeGado software implemented in this code.
*/
class Farm{

    public:
        friend class UnitFarm; /*!< This Class is used to do some unit tests of the Farm class. */

        typedef std::vector<Cattle*>::iterator cattleIterator;
        typedef std::vector<Transaction*>::iterator transactionIterator;
        typedef std::vector<Farm*>::iterator farmIterator;
        
        virtual cattleIterator beginCattleContainer() = 0; /*!< Returns the iterator to the beginning of the cattle container attribute. */
        virtual cattleIterator endCattleContainer() = 0; /*!< Returns the iterator to the end of the cattle container attribute. */
        virtual transactionIterator beginTransactionContainer() = 0; /*!< Returns the iterator to the beginning of the transaction container attribute. */
        virtual transactionIterator endTransactionContainer() = 0; /*!< Returns the iterator to the end of the transaction container attribute. */
        virtual farmIterator beginFarmContainer() = 0; /*!< Returns the iterator to the beginning of the global farm container std::vector. */
        virtual farmIterator endFarmContainer() = 0; /*!< Returns the iterator to the end of the global farm container std::vector. */

        /*!
            This is the default destructor for the Farm Class.
        */
        virtual ~Farm(){}

        /*!
            Creates a cattle and returns it's pointer.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father of the Cattle.
            \param mother the mother of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
            \return Cattle* - a Cattle Class object.
        */
        virtual Cattle* farmCreateCattle(std::string earring = "", std::string breed = "", std::string acquisition_date = "", 
                                     std::string birth_date = "", std::string father = "", std::string mother = "",
                                     double weight = 0.0,  double value = 0.0) = 0;
        
        /*!
            Creates a cattle and adds it to the database.
            \param query the query of the GiroDeGado's database.
            \param earring the earring of the Cattle.
            \param breed the breed of the Cattle.
            \param acquisition_date the acquisition date of the Cattle.
            \param birth_date the birth date of the Cattle.
            \param father the father of the Cattle.
            \param mother the mother of the Cattle.
            \param weight the weight of the Cattle.
            \param value the value of the Cattle.
        */
        virtual void createCattle(QSqlQuery* query = NULL, std::string earring = "", std::string breed = "", 
                                    std::string acquisition_date = "", std::string birth_date = "",
                                    std::string father = "", std::string mother = "", double weight = 0.0,
                                    double value = 0.0) = 0;

        /*!
            Creates a transaction and returns it's pointer.
            \param id the id of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
            \return Transaction* - a Transaction Class object.
        */
        virtual Transaction* farmCreateTransaction(int id = 0, double value = 0.0, std::string description = "", 
                                               std::string date = "", std::string cattle_earring = "") = 0;
        
        /*!
            Creates a transaction and adds it to the database.
            \param query the query of the GiroDeGado's database.
            \param id the id of the Transaction.
            \param value the value of the Transaction.
            \param description the description of the Transaction.
            \param date the date of the Transaction.
            \param cattle_earring the cattle's earring of the Transaction.
        */
        virtual void createTransaction(QSqlQuery* query = NULL, int number = 0, double value = 0.0,
                                       std::string description = "", std::string date = "",
                                       std::string cattle_earring = "") = 0;

        /*!
            Creates a Farm and returns it's pointer.
            \return Farm - a Farm Class object.
        */
        static Farm* createFarm();

        /*!        
           Removes a cattle's pointer on the cattle container.
           \param cattle which will be removed from the cattle container.
        */ 
        virtual void remove(Cattle* cattle) = 0;
      
        /*!
           Removes a transaction's pointer on the transaction container.
           \param transaction which will be removed from the transaction container.
        */
        virtual void remove(Transaction* transaction) = 0;

        /*!
            Sets the earring attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_earring which will be set to the current Cattle.
        */
        virtual void setEarring(Cattle* cattle, std::string cattle_earring) = 0;

        /*!
            Returns the earring attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content earring attribute.  
        */
        virtual std::string getEarring(Cattle* cattle) const = 0;
        
        /*!
            Sets the breed attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_breed which will be set to the current Cattle.
        */
        virtual void setBreed(Cattle* cattle, std::string cattle_breed) = 0;

        /*!
            Returns the breed attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content Breed attribute.  
        */
        virtual std::string getBreed(Cattle* cattle) const = 0;

        /*!
            Sets the acquisition date attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_acquisition_date which will be set to the current Cattle.
        */
        virtual void setAcquisitionDate(Cattle* cattle, std::string cattle_acquisition_date) = 0;

        /*!
            Returns the acquisition date attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content acquisition date attribute.  
        */
        virtual std::string getAcquisitionDate(Cattle* cattle) const = 0;

        /*!
            Sets the birth date attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_birth_date which will be set to the current Cattle.
        */
        virtual void setBirthDate(Cattle* cattle, std::string cattle_birth_date) = 0;

        /*!
            Returns the birth date attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content birth date attribute.  
        */
        virtual std::string getBirthDate(Cattle* cattle) const = 0;

        /*!
            Sets the father attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_father which will be set to the current Cattle.
        */
        virtual void setFather(Cattle* cattle, std::string cattle_father) = 0;

        /*!
            Returns the father attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content father attribute.  
        */
        virtual std::string getFather(Cattle* cattle) const = 0;

        /*!
            Sets the mother attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_mother which will be set to the current Cattle.
        */
        virtual void setMother(Cattle* cattle, std::string cattle_mother) = 0;

        /*!
            Returns the mother attribute of a cattle.
            \param cattle the Cattle at matter.
            \return std::string - the content mother attribute.  
        */
        virtual std::string getMother(Cattle* cattle) const = 0;

        /*!
            Sets the weight attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_weight which will be set to the current Cattle.
        */
        virtual void setWeight(Cattle* cattle, double cattle_weight) = 0;

        /*!
            Returns the weight attribute of a cattle.
            \param cattle the Cattle at matter.
            \return double - the content weight attribute.  
        */
        virtual double getWeight(Cattle* cattle) const = 0;

        /*!
            Sets the value attribute of a cattle.
            \param cattle the Cattle at matter.
            \param cattle_value which will be set to the current Cattle.
        */
        virtual void setValue(Cattle* cattle, double cattle_value) = 0;

        /*!
            Returns the value attribute of a cattle.
            \param cattle the Cattle at matter.
            \return double - the content value attribute.  
        */
        virtual double getValue(Cattle* cattle) const = 0;

        /*!
            Sets the number attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_number which will be set to the current Transaction.
        */
        virtual void setNumber(Transaction* transaction, int transaction_number) = 0;

        /*!
            Returns the number attribute of a transaction.
            \param transaction the Transaction at matter.
            \return int - the content number attribute.
        */
        virtual int getNumber(Transaction* transaction) const = 0;

        /*!
            Sets the value attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_value which will be set to the current Transaction.
        */
        virtual void setValue(Transaction* transaction, double transaction_value) = 0;

        /*!
            Returns the value attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content value attribute.  
        */
        virtual double getValue(Transaction* transaction) const = 0;
        
        /*!
            Sets the description attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_description which will be set to the current Transaction.
        */
        virtual void setDescription(Transaction* transaction, std::string transaction_description) = 0;

        /*!
            Returns the description attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content description attribute.  
        */
        virtual std::string getDescription(Transaction* transaction) const = 0;

        /*!
            Sets the date attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_date which will be set to the current Transaction.
        */
        virtual void setDate(Transaction* transaction, std::string transaction_date) = 0;

        /*!
            Returns the date attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content date attribute.  
        */
        virtual std::string getDate(Transaction* transaction) const = 0;

        /*!
            Sets the cattle earring attribute of a transaction.
            \param transaction the Transaction at matter.
            \param transaction_cattle_earring which will be set to the current Transaction.
        */
        virtual void setCattleEarring(Transaction* transaction, std::string transaction_cattle_earring) = 0;

        /*!
            Returns the cattle earring attribute of a transaction.
            \param transaction the Transaction at matter.
            \return std::string - the content cattle earring attribute.  
        */
        virtual std::string getCattleEarring(Transaction* transaction) const = 0;

        /*!
            Returns the last available number on the transaction container.
            \return int - the last available number on the transaction container.
        */
        virtual int getLastNumberAvailable(QSqlQuery* query) = 0;

    protected:
        /*!
           Adds a cattle's pointer to the the cattle container.
           \param cattle the cattle to be added.
        */ 
        virtual void add(Cattle* cattle) = 0;
        
        /*!        
           Adds a transaction's pointer to the transaction container.
           \param transaction the transaction to be added.
        */ 
        virtual void add(Transaction* transaction) = 0;
        
};

#endif

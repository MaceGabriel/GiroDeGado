#ifndef TRANSACTIONIMPL_H
#define TRANSACTIONIMPL_H

#include "./transaction.h"
#include "./handlebody.h"

using namespace std;

//! Class TransactionBody
/**
* This Class represents the body of a Handle/Body idiom of a Transaction for the GiroDeGado software implemented in this code.
*/
class TransactionBody : public Body{

    protected:
        int id_; /*!< This attribute contains the id for the TransactionBody. */
        double value_; /*!< This attribute contains the value of the TransactionBody. */
        std::string description_; /*!< This attribute contains the description for the TransactionBody. */
        std::string date_; /*!< This attribute contains the date for the TransactionBody. */
        std::string cattle_earring_; /*!< This attribute contains the cattle's earring for the TransactionBody. */

    private:
        // No copy allowed

        /*!
            This is the copy constructor for the TransactionBody Class.
            \param sys the TransactionBody that is going to be cloned.
        */
        TransactionBody (const TransactionBody& sys);

        /*!
            This is the overloaded assignment operator for the TransactionBody Class.
        */
        TransactionBody& operator=(const TransactionBody& sys);

    public:

        /*!
            This is the default constructor for the TransactionBody Class.
            \param id the id of the TransactionBody.
            \param value the value of the TransactionBody.
            \param description the description of the TransactionBody.
            \param date the date of the TransactionBody.
            \param cattle_earring the cattle's earring of the TransactionBody.
            \return TransactionBody - a TransactionBody Class object.
        */
        TransactionBody(int id = 0, double value = 0.0, std::string description = "", std::string date = "",
                        std::string cattle_earring = "");

        /*!
            This is the default destructor for the TransactionBody Class.
        */
        virtual ~TransactionBody();

        /*!
            Sets the id attribute in the Transaction Class.
            \param transaction_id which will be set to the current Transaction.
        */
        void setId(int transaction_id);

        /*!
            Returns the id attribute in the Transaction Class.
            \return std::string - the content id attribute.  
        */
        int getId() const;

        /*!
            Sets the value attribute in the Transaction Class.
            \param transaction_value which will be set to the current Transaction.
        */
        void setValue(double transaction_value);

        /*!
            Returns the value attribute in the Transaction Class.
            \return std::string - the content value attribute.  
        */
        double getValue() const;
        
        /*!
            Sets the description attribute in the Transaction Class.
            \param transaction_description which will be set to the current Transaction.
        */
        void setDescription(std::string transaction_description);

        /*!
            Returns the description attribute in the Transaction Class.
            \return std::string - the content description attribute.  
        */
        std::string getDescription() const;

        /*!
            Sets the date attribute in the Transaction Class.
            \param transaction_date which will be set to the current Transaction.
        */
        void setDate(std::string transaction_date);

        /*!
            Returns the date attribute in the Transaction Class.
            \return std::string - the content date attribute.  
        */
        std::string getDate() const;

        /*!
            Sets the cattle earring attribute in the Transaction Class.
            \param transaction_cattle_earring which will be set to the current Transaction.
        */
        void setCattleEarring(std::string transaction_cattle_earring);

        /*!
            Returns the cattle earring attribute in the Transaction Class.
            \return std::string - the content cattle earring attribute.  
        */
        std::string getCattleEarring() const;

};

//! Class TransactionHandle
/**
* This Class represents the handle of a Handle/Body idiom of a Transaction for the GiroDeGado software implemented in this code.
*/
class TransactionHandle : public Handle<TransactionBody>, public Transaction{
    public:
        
        /*!
            This is the default constructor for the TransactionHandle Class.
            \param id the id of the TransactionHandle.
            \param value the value of the TransactionHandle.
            \param description the description of the TransactionHandle.
            \param date the date of the TransactionHandle.
            \param cattle_earring the cattle's earring of the TransactionHandle.
            \return TransactionHandle - a TransactionHandle Class object.
        */
        TransactionHandle(int id = 0, double value = 0.0, std::string description = "", std::string date = "",
                        std::string cattle_earring = ""){
            pImpl_->setId(id);
            pImpl_->setValue(value);
            pImpl_->setDescription(description);
            pImpl_->setDate(date);
            pImpl_->setCattleEarring(cattle_earring);
        }

        /*!
            This is the default destructor for the TransactionHandle Class.
        */
        virtual ~TransactionHandle(){};
        
        /*!
            Calls the setId() method implemented in the TransactionBody Class.
            \param transaction_id which will be set to the current Transaction.
        */
        void setId(int transaction_id){
            pImpl_->setId(transaction_id);
        }

        /*!
            Calls the getId() method implemented in the TransactionBody Class.
            \return std::string - the content id attribute.  
        */
        int getId() const{
            return pImpl_->getId();
        }

        /*!
            Calls the setValue() method implemented in the TransactionBody Class.
            \param transaction_value which will be set to the current Transaction.
        */
        void setValue(double transaction_value){
            pImpl_->setValue(transaction_value);
        }

        /*!
            Calls the getValue() method implemented in the TransactionBody Class.
            \return std::string - the content value attribute.  
        */
        double getValue() const{
            return pImpl_->getValue();
        }
        
        /*!
            Calls the setDescription() method implemented in the TransactionBody Class.
            \param transaction_description which will be set to the current Transaction.
        */
        void setDescription(std::string transaction_description){
            pImpl_->setDescription(transaction_description);
        }

        /*!
            Calls the getDescription() method implemented in the TransactionBody Class.
            \return std::string - the content description attribute.  
        */
        std::string getDescription() const{
            return pImpl_->getDescription();
        }

        /*!
            Calls the setDate() method implemented in the TransactionBody Class.
            \param transaction_date which will be set to the current Transaction.
        */
        void setDate(std::string transaction_date){
            pImpl_->setDate(transaction_date);
        }

        /*!
            Calls the getDate() method implemented in the TransactionBody Class.
            \return std::string - the content date attribute.  
        */
        std::string getDate() const{
            return pImpl_->getDate();
        }

        /*!
            Calls the setCattleEarring() method implemented in the TransactionBody Class.
            \param transaction_cattle_earring which will be set to the current Transaction.
        */
        void setCattleEarring(std::string transaction_cattle_earring){
            pImpl_->setCattleEarring(transaction_cattle_earring);
        }

        /*!
            Calls the getCattleEarring() method implemented in the TransactionBody Class.
            \return std::string - the content cattle earring attribute.  
        */
        std::string getCattleEarring() const{
            return pImpl_->getCattleEarring();
        }

};

#endif
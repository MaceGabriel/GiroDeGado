#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>

//! Class Transaction
/**
* This Class represents a Transaction for the GiroDeGado software implemented in this code.
*/
class Transaction{

    public:
        /*!
            This is the default destructor for the Transaction Class.
        */
        virtual ~Transaction(){}
     
        /*!
            Sets the number attribute in the Transaction Class.
            \param transaction_number which will be set to the current Transaction.
        */
        virtual void setNumber(int transaction_number) = 0;

        /*!
            Returns the number attribute in the Transaction Class.
            \return int - the content number attribute.
        */
        virtual int getNumber() const = 0;

        /*!
            Sets the value attribute in the Transaction Class.
            \param transaction_value which will be set to the current Transaction.
        */
        virtual void setValue(double transaction_value) = 0;

        /*!
            Returns the value attribute in the Transaction Class.
            \return std::string - the content value attribute.  
        */
        virtual double getValue() const = 0;
        
        /*!
            Sets the description attribute in the Transaction Class.
            \param transaction_description which will be set to the current Transaction.
        */
        virtual void setDescription(std::string transaction_description) = 0;

        /*!
            Returns the description attribute in the Transaction Class.
            \return std::string - the content description attribute.  
        */
        virtual std::string getDescription() const = 0;

        /*!
            Sets the date attribute in the Transaction Class.
            \param transaction_date which will be set to the current Transaction.
        */
        virtual void setDate(std::string transaction_date) = 0;

        /*!
            Returns the date attribute in the Transaction Class.
            \return std::string - the content date attribute.  
        */
        virtual std::string getDate() const = 0;

        /*!
            Sets the cattle earring attribute in the Transaction Class.
            \param transaction_cattle_earring which will be set to the current Transaction.
        */
        virtual void setCattleEarring(std::string transaction_cattle_earring) = 0;

        /*!
            Returns the cattle earring attribute in the Transaction Class.
            \return std::string - the content cattle earring attribute.  
        */
        virtual std::string getCattleEarring() const = 0;

};

#endif

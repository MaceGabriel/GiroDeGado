// #ifndef TRANSACTION_H
// #define TRANSACTION_H

// #include <iostream>
// #include <string>

// using namespace std;

// //! Class Transaction
// /**
// * This Class represents a Transaction for the GiroDeGado software implemented in this code.
// */
// class Transaction{

//     public:
//         /*!
//             This is the default destructor for the Transaction Class.
//         */
//         virtual ~Transaction(){}
     
//         /*!
//             Sets the id attribute in the Transaction Class.
//             \param transaction_id which will be set to the current Transaction.
//         */
//         virtual void setId(int transaction_id) = 0;

//         /*!
//             Returns the id attribute in the Transaction Class.
//             \return string - the content id attribute.  
//         */
//         virtual int getId() const = 0;

//         /*!
//             Sets the value attribute in the Transaction Class.
//             \param transaction_value which will be set to the current Transaction.
//         */
//         virtual void setValue(double transaction_value) = 0;

//         /*!
//             Returns the value attribute in the Transaction Class.
//             \return string - the content value attribute.  
//         */
//         virtual double getValue() const = 0;
        
//         /*!
//             Sets the description attribute in the Transaction Class.
//             \param transaction_description which will be set to the current Transaction.
//         */
//         virtual void setDescription(string transaction_description) = 0;

//         /*!
//             Returns the description attribute in the Transaction Class.
//             \return string - the content description attribute.  
//         */
//         virtual string getDescription() const = 0;

//         /*!
//             Sets the date attribute in the Transaction Class.
//             \param transaction_date which will be set to the current Transaction.
//         */
//         virtual void setDate(string transaction_date) = 0;

//         /*!
//             Returns the date attribute in the Transaction Class.
//             \return string - the content date attribute.  
//         */
//         virtual string getDate() const = 0;

//         /*!
//             Sets the cattle earring attribute in the Transaction Class.
//             \param transaction_cattle_earring which will be set to the current Transaction.
//         */
//         virtual void setCattleEarring(string transaction_cattle_earring) = 0;

//         /*!
//             Returns the cattle earring attribute in the Transaction Class.
//             \return string - the content cattle earring attribute.  
//         */
//         virtual string getCattleEarring() const = 0;

// };

// #endif
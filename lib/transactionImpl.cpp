#include "../includes/transactionImpl.h"

TransactionBody::TransactionBody(int id, double value, std::string description, std::string date, std::string cattle_earring){
    setNumber(id);
    setValue(value);
    setDescription(description);
    setDate(date);
    setCattleEarring(cattle_earring);
}

TransactionBody::~TransactionBody(){}

void TransactionBody::setNumber(int transaction_id){
    number_ = transaction_id;
}

int TransactionBody::getNumber() const{
    return number_;
}

void TransactionBody::setValue(double transaction_value){
    value_ = transaction_value;
}

double TransactionBody::getValue() const{
    return value_;
}

void TransactionBody::setDescription(std::string transaction_description){
    description_ = transaction_description;
}

std::string TransactionBody::getDescription() const{
    return description_;
}

void TransactionBody::setDate(std::string transaction_date){
    date_ = transaction_date;
}

std::string TransactionBody::getDate() const{
    return date_;
}

void TransactionBody::setCattleEarring(std::string transaction_cattle_earring){
    cattle_earring_ = transaction_cattle_earring;
}

std::string TransactionBody::getCattleEarring() const{
    return cattle_earring_;
}

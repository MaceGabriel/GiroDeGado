#include "../includes/cattleImpl.h"

CattleBody::CattleBody(std::string earring, std::string breed, std::string acquisition_date, std::string birth_date,
                       std::string father, std::string mother, double weight,  double value){
    setEarring(earring);
    setBreed(breed);
    setAcquisitionDate(acquisition_date);
    setBirthDate(birth_date);
    setFather(father);
    setMother(mother);
    setWeight(weight);
    setValue(value);
}

CattleBody::~CattleBody(){}

void CattleBody::setEarring(std::string cattle_earring){
    earring_ = cattle_earring;
}

std::string CattleBody::getEarring() const{
    return earring_;
}

void CattleBody::setBreed(std::string cattle_breed){
    breed_ = cattle_breed;
}

std::string CattleBody::getBreed() const{
    return breed_;
}

void CattleBody::setAcquisitionDate(std::string cattle_acquisition_date){
    acquisition_date_ = cattle_acquisition_date;
}

std::string CattleBody::getAcquisitionDate() const{
    return acquisition_date_;
}

void CattleBody::setBirthDate(std::string cattle_birth_date){
    birth_date_ = cattle_birth_date;
}

std::string CattleBody::getBirthDate() const{
    return birth_date_;
}

void CattleBody::setFather(std::string cattle_father){
    father_ = cattle_father;
}

std::string CattleBody::getFather() const{
    return father_;
}

void CattleBody::setMother(std::string cattle_mother){
    mother_ = cattle_mother;
}

std::string CattleBody::getMother() const{
    return mother_;
}

void CattleBody::setWeight(double cattle_weight){
    weight_ = cattle_weight;
}

double CattleBody::getWeight() const{
    return weight_;
}

void CattleBody::setValue(double cattle_value){
    value_ = cattle_value;
}

double CattleBody::getValue() const{
    return value_;
}
/*!
 \file cattleImpl.h
 \brief This file contains the handle/body of a Cattle for the GiroDeGado software.
*/

#ifndef CATTLEIMPL_H
#define CATTLEIMPL_H

#include "./cattle.h"
#include "./handlebody.h"

/** 
 * \brief
 * This Class represents the body of a Handle/Body idiom of a Cattle for the GiroDeGado software.
*/
class CattleBody : public Body{

    protected:
        std::string earring_; /*!< This attribute contains the earring for the CattleBody. */
        std::string breed_; /*!< This attribute contains the breed for the CattleBody. */
        std::string acquisition_date_; /*!< This attribute contains the acquisition date for the CattleBody. */
        std::string birth_date_; /*!< This attribute contains the birth date for the CattleBody. */
        std::string father_; /*!< This attribute contains the father's earring for the CattleBody. */
        std::string mother_; /*!< This attribute contains the mother's earring for the CattleBody. */
        double weight_; /*!< This attribute contains the weight of the CattleBody. */
        double value_; /*!< This attribute contains the value of the CattleBody. */

    private:
        // No copy allowed

        /*!
            This is the copy constructor for the CattleBody Class.
            \param sys the CattleBody that is going to be cloned.
        */
        CattleBody (const CattleBody& sys);

        /*!
            This is the overloaded assignment operator for the CattleBody Class.
        */
        CattleBody& operator=(const CattleBody& sys);

    public:

        /*!
            This is the default constructor for the CattleBody Class.
            \param earring the earring of the CattleBody.
            \param breed the breed of the CattleBody.
            \param acquisition_date the acquisition date of the CattleBody.
            \param birth_date the birth date of the CattleBody.
            \param father the father of the CattleBody.
            \param mother the mother of the CattleBody.
            \param weight the weight of the CattleBody.
            \param value the value of the CattleBody.
            \return CattleBody - a CattleBody Class object.
        */
        CattleBody(std::string earring = "", std::string breed = "", std::string acquisition_date = "", std::string birth_date = "",
                   std::string father = "", std::string mother = "", double weight = 0.0,  double value = 0.0);

        /*!
            This is the default destructor for the CattleBody Class.
        */
        virtual ~CattleBody();

        /*!
            Sets the earring attribute in the CattleBody Class.
            \param cattle_earring which will be set to the current CattleBody.
        */
        void setEarring(std::string cattle_earring);

        /*!
            Returns the earring attribute in the CattleBody Class.
            \return string - the content earring attribute.  
        */
        std::string getEarring() const;
        
        /*!
            Sets the breed attribute in the CattleBody Class.
            \param cattle_breed which will be set to the current CattleBody.
        */
        void setBreed(std::string cattle_breed);

        /*!
            Returns the breed attribute in the CattleBody Class.
            \return string - the content Breed attribute.  
        */
        std::string getBreed() const;

        /*!
            Sets the acquisition date attribute in the CattleBody Class.
            \param cattle_acquisition_date which will be set to the current CattleBody.
        */
        void setAcquisitionDate(std::string cattle_acquisition_date);

        /*!
            Returns the acquisition date attribute in the CattleBody Class.
            \return string - the content acquisition date attribute.  
        */
        std::string getAcquisitionDate() const;

        /*!
            Sets the birth date attribute in the CattleBody Class.
            \param cattle_birth_date which will be set to the current CattleBody.
        */
        void setBirthDate(std::string cattle_birth_date);

        /*!
            Returns the birth date attribute in the CattleBody Class.
            \return string - the content birth date attribute.  
        */
        std::string getBirthDate() const;

        /*!
            Sets the father attribute in the CattleBody Class.
            \param cattle_father which will be set to the current CattleBody.
        */
        void setFather(std::string cattle_father);

        /*!
            Returns the father attribute in the CattleBody Class.
            \return string - the content father attribute.  
        */
        std::string getFather() const;

        /*!
            Sets the mother attribute in the CattleBody Class.
            \param cattle_mother which will be set to the current CattleBody.
        */
        void setMother(std::string cattle_mother);

        /*!
            Returns the mother attribute in the CattleBody Class.
            \return string - the content mother attribute.  
        */
        std::string getMother() const;

        /*!
            Sets the weight attribute in the CattleBody Class.
            \param cattle_weight which will be set to the current CattleBody.
        */
        void setWeight(double cattle_weight);

        /*!
            Returns the weight attribute in the CattleBody Class.
            \return double - the content weight attribute.  
        */
        double getWeight() const;

        /*!
            Sets the value attribute in the CattleBody Class.
            \param cattle_value which will be set to the current CattleBody.
        */
        void setValue(double cattle_value);

        /*!
            Returns the value attribute in the CattleBody Class.
            \return double - the content value attribute.  
        */
        double getValue() const;

};

/** 
 * \brief
 * This Class represents the handle of a Handle/Body idiom of a Cattle for the GiroDeGado software implemented in this code.
*/
class CattleHandle : public Handle<CattleBody>, public Cattle{
    public:
        
        /*!
            This is the default constructor for the CattleHandle Class.
            \param earring the earring of the CattleHandle.
            \param breed the breed of the CattleHandle.
            \param acquisition_date the acquisition date of the CattleHandle.
            \param birth_date the birth date of the CattleHandle.
            \param father the father of the CattleHandle.
            \param mother the mother of the CattleHandle.
            \param weight the weight of the CattleHandle.
            \param value the value of the CattleHandle.
            \return CattleHandle - a CattleHandle Class object.
        */
        CattleHandle(std::string earring = "", std::string breed = "", std::string acquisition_date = "", std::string birth_date = "",
                     std::string father = "", std::string mother = "", double weight = 0.0,  double value = 0.0){
            pImpl_->setEarring(earring);
            pImpl_->setBreed(breed);
            pImpl_->setAcquisitionDate(acquisition_date);
            pImpl_->setBirthDate(birth_date);
            pImpl_->setFather(father);
            pImpl_->setMother(mother);
            pImpl_->setWeight(weight);
            pImpl_->setValue(value);
        }

        /*!
            This is the default destructor for the CattleHandle Class.
        */
        virtual ~CattleHandle(){};

        /*!
            Calls the setEarring() method implemented in the CattleBody Class.
            \param cattle_earring which will be set to the current CattleBody.
        */
        void setEarring(std::string cattle_earring){
            pImpl_->setEarring(cattle_earring);
        }

        /*!
            Calls the getEarring() method implemented in the CattleBody Class.
            \return string - the content earring attribute.  
        */
        std::string getEarring() const{
            return pImpl_->getEarring();
        }
        
        /*!
            Calls the setBreed() method implemented in the CattleBody Class.
            \param cattle_breed which will be set to the current CattleBody.
        */
        void setBreed(std::string cattle_breed){
            pImpl_->setBreed(cattle_breed);
        }

        /*!
            Calls the getBreed() method implemented in the CattleBody Class.
            \return string - the content Breed attribute.  
        */
        std::string getBreed() const{
            return pImpl_->getBreed();
        }

        /*!
            Calls the setAcquisitionDate() method implemented in the CattleBody Class.
            \param cattle_acquisition_date which will be set to the current CattleBody.
        */
        void setAcquisitionDate(std::string cattle_acquisition_date){
            pImpl_->setAcquisitionDate(cattle_acquisition_date);
        }

        /*!
            Calls the getAcquisitionDate() method implemented in the CattleBody Class.
            \return string - the content acquisition date attribute.  
        */
        std::string getAcquisitionDate() const{
            return pImpl_->getAcquisitionDate();
        }

        /*!
            Calls the setBirthDate() method implemented in the CattleBody Class.
            \param cattle_birth_date which will be set to the current CattleBody.
        */
        void setBirthDate(std::string cattle_birth_date){
            pImpl_->setBirthDate(cattle_birth_date);
        }

        /*!
            Calls the getBirthDate() method implemented in the CattleBody Class.
            \return string - the content birth date attribute.  
        */
        std::string getBirthDate() const{
            return pImpl_->getBirthDate();
        }

        /*!
            Calls the setFather() method implemented in the CattleBody Class.
            \param cattle_father which will be set to the current CattleBody.
        */
        void setFather(std::string cattle_father){
            pImpl_->setFather(cattle_father);
        }

        /*!
            Calls the getFather() method implemented in the CattleBody Class.
            \return string - the content father attribute.  
        */
        std::string getFather() const{
            return pImpl_->getFather();
        }

        /*!
            Calls the setMother() method implemented in the CattleBody Class.
            \param cattle_mother which will be set to the current CattleBody.
        */
        void setMother(std::string cattle_mother){
            pImpl_->setMother(cattle_mother);
        }

        /*!
            Calls the getMother() method implemented in the CattleBody Class.
            \return string - the content mother attribute.  
        */
        std::string getMother() const{
            return pImpl_->getMother();
        }

        /*!
            Calls the setWeight() method implemented in the CattleBody Class.
            \param cattle_weight which will be set to the current CattleBody.
        */
        void setWeight(double cattle_weight){
            pImpl_->setWeight(cattle_weight);
        }

        /*!
            Calls the getWeight() method implemented in the CattleBody Class.
            \return double - the content weight attribute.  
        */
        double getWeight() const{
            return pImpl_->getWeight();
        }

        /*!
            Calls the setValue() method implemented in the CattleBody Class.
            \param cattle_value which will be set to the current CattleBody.
        */
        void setValue(double cattle_value){
            pImpl_->setValue(cattle_value);
        }

        /*!
            Calls the getValue() method implemented in the CattleBody Class.
            \return double - the content value attribute.  
        */
        double getValue() const{
            return pImpl_->getValue();
        }

};

#endif
/*!
 \file cattle.h
 \brief This file contains the interface of a Cattle for the GiroDeGado software.
*/

#ifndef CATTLE_H
#define CATTLE_H

#include <iostream>
#include <string>

/** 
 * \brief
 * This Class represents a Cattle for the GiroDeGado software.
*/
class Cattle{

    public:
        /*!
            This is the default destructor for the Cattle Class.
        */
        virtual ~Cattle(){}
     
        /*!
            Sets the earring attribute in the Cattle Class.
            \param cattle_earring which will be set to the current Cattle.
        */
        virtual void setEarring(std::string cattle_earring) = 0;

        /*!
            Returns the earring attribute in the Cattle Class.
            \return string - the content earring attribute.  
        */
        virtual std::string getEarring() const = 0;
        
        /*!
            Sets the breed attribute in the Cattle Class.
            \param cattle_breed which will be set to the current Cattle.
        */
        virtual void setBreed(std::string cattle_breed) = 0;

        /*!
            Returns the breed attribute in the Cattle Class.
            \return string - the content Breed attribute.  
        */
        virtual std::string getBreed() const = 0;

        /*!
            Sets the acquisition date attribute in the Cattle Class.
            \param cattle_acquisition_date which will be set to the current Cattle.
        */
        virtual void setAcquisitionDate(std::string cattle_acquisition_date) = 0;

        /*!
            Returns the acquisition date attribute in the Cattle Class.
            \return string - the content acquisition date attribute.  
        */
        virtual std::string getAcquisitionDate() const = 0;

        /*!
            Sets the birth date attribute in the Cattle Class.
            \param cattle_birth_date which will be set to the current Cattle.
        */
        virtual void setBirthDate(std::string cattle_birth_date) = 0;

        /*!
            Returns the birth date attribute in the Cattle Class.
            \return string - the content birth date attribute.  
        */
        virtual std::string getBirthDate() const = 0;

        /*!
            Sets the father attribute in the Cattle Class.
            \param cattle_father which will be set to the current Cattle.
        */
        virtual void setFather(std::string cattle_father) = 0;

        /*!
            Returns the father attribute in the Cattle Class.
            \return string - the content father attribute.  
        */
        virtual std::string getFather() const = 0;

        /*!
            Sets the mother attribute in the Cattle Class.
            \param cattle_mother which will be set to the current Cattle.
        */
        virtual void setMother(std::string cattle_mother) = 0;

        /*!
            Returns the mother attribute in the Cattle Class.
            \return string - the content mother attribute.  
        */
        virtual std::string getMother() const = 0;

        /*!
            Sets the weight attribute in the Cattle Class.
            \param cattle_weight which will be set to the current Cattle.
        */
        virtual void setWeight(double cattle_weight) = 0;

        /*!
            Returns the weight attribute in the Cattle Class.
            \return double - the content weight attribute.  
        */
        virtual double getWeight() const = 0;

        /*!
            Sets the value attribute in the Cattle Class.
            \param cattle_value which will be set to the current Cattle.
        */
        virtual void setValue(double cattle_value) = 0;

        /*!
            Returns the value attribute in the Cattle Class.
            \return double - the content value attribute.  
        */
        virtual double getValue() const = 0;

};

#endif
/*!
 \file unit_farm.h
 \brief This file contains the unit tests of the Farm class for the GiroDeGado software.
*/

#ifndef UNIT_FARM
#define UNIT_FARM

#include <windows.h>
#include <assert.h>
#include <math.h>
#include "../../includes/farmImpl.h"

//! Unit tests 
/**
* Creation of the unit tests for the Farm class.
*/

class UnitFarm{

    public:
        UnitFarm(){}
        ~UnitFarm(){}

        /*!
          Function prototype for the FarmHandle class' constructor unit test.
        */
        void unit_farm_copy_constructor();

        /*!
          Function prototype for the Farm class' method addCattle() unit test.
        */
        void unit_farm_addCattle();

        /*!
          Function prototype for the Farm class' method addTransaction() unit test.
        */
        void unit_farm_addTransaction();

        /*!
          Function prototype for the FarmHandle class' assingment operator unit test.
        */
        void unit_farm_assingmentOperator();

};

/*!
  Function prototype for the Farm class' constructor unit test.
*/
void unit_farm_constructor();

/*!
  Function prototype for the Farm class' destructor unit test.
*/
void unit_farm_destructor();

/*!
  Function prototype for the Farm class' method removeCattle() unit test.
*/
void unit_farm_removeCattle();

/*!
  Function prototype for the Farm class' method removeTransaction() unit test.
*/
void unit_farm_removeTransaction();

/*!
  Function prototype for the Farm class' method getEarring() unit test.
*/
void unit_farm_getEarring();

/*!
  Function prototype for the Farm class' method setEarring() unit test.
*/
void unit_farm_setEarring();

/*!
  Function prototype for the Farm class' method getBreed() unit test.
*/
void unit_farm_getBreed();

/*!
  Function prototype for the Farm class' method setBreed() unit test.
*/
void unit_farm_setBreed();

/*!
  Function prototype for the Farm class' method getAcquisitionDate() unit test.
*/
void unit_farm_getAcquisitionDate();

/*!
  Function prototype for the Farm class' method setAcquisitionDate() unit test.
*/
void unit_farm_setAcquisitionDate();

/*!
  Function prototype for the Farm class' method getBirthDate() unit test.
*/
void unit_farm_getBirthDate();

/*!
  Function prototype for the Farm class' method setBirthDate() unit test.
*/
void unit_farm_setBirthDate();

/*!
  Function prototype for the Farm class' method getFather() unit test.
*/
void unit_farm_getFather();

/*!
  Function prototype for the Farm class' method setFather() unit test.
*/
void unit_farm_setFather();

/*!
  Function prototype for the Farm class' method getMother() unit test.
*/
void unit_farm_getMother();

/*!
  Function prototype for the Farm class' method setMother() unit test.
*/
void unit_farm_setMother();

/*!
  Function prototype for the Farm class' method getWeight() unit test.
*/
void unit_farm_getWeight();

/*!
  Function prototype for the Farm class' method setWeight() unit test.
*/
void unit_farm_setWeight();

/*!
  Function prototype for the Farm class' method getValue() unit test, while passing a Cattle as an argument.
*/
void unit_farm_cattle_getValue();

/*!
  Function prototype for the Farm class' method setValue() unit test, while passing a Cattle as an argument.
*/
void unit_farm_cattle_setValue();

/*!
  Function prototype for the Farm class' method getNumber() unit test.
*/
void unit_farm_getNumber();

/*!
  Function prototype for the Farm class' method setNumber() unit test.
*/
void unit_farm_setNumber();

/*!
  Function prototype for the Farm class' method getValue() unit test, while passing a Transaction as an argument.
*/
void unit_farm_transaction_getValue();

/*!
  Function prototype for the Farm class' method setValue() unit test, while passing a Transaction as an argument.
*/
void unit_farm_transaction_setValue();

/*!
  Function prototype for the Farm class' method getDescription() unit test.
*/
void unit_farm_getDescription();

/*!
  Function prototype for the Farm class' method setDescription() unit test.
*/
void unit_farm_setDescription();

/*!
  Function prototype for the Farm class' method getDate() unit test.
*/
void unit_farm_getDate();

/*!
  Function prototype for the Farm class' method setDate() unit test.
*/
void unit_farm_setDate();

/*!
  Function prototype for the Farm class' method getCattleEarring() unit test.
*/
void unit_farm_getCattleEarring();

/*!
  Function prototype for the Farm class' method setCattleEarring() unit test.
*/
void unit_farm_setCattleEarring();

/*!
  Function prototype for the Farm class' method getCattle() unit test.
*/
void unit_farm_getCattle();

/*!
  Function prototype for the Farm class' method getTransaction() unit test.
*/
void unit_farm_getTransaction();

/*!
  Function prototype for the Farm class' method getLastNumberAvailable() unit test.
*/
void unit_farm_getLastNumberAvailable();

/*!
  Function prototype for the function that runs all the unit tests of the Farm class.
*/
void run_unit_tests_farm();

#endif

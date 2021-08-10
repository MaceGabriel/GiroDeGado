#ifndef UNIT_CATTLE
#define UNIT_CATTLE

#include <assert.h>
#include <windows.h>
#include "../../includes/cattleImpl.h"

//! Unit tests 
/**
* Creation of the unit tests for the Cattle class.
*/

/*!
  Function prototype for the Cattle class' constructor unit test.
*/
void unit_cattle_constructor();

/*!
  Function prototype for the CattleHandle class' copy constructor unit test.
*/
void unit_cattle_copy_constructor();

/*!
  Function prototype for the Cattle class' destructor unit test.
*/
void unit_cattle_destructor();

/*!
  Function prototype for the Cattle class' method getEarring() unit test.
*/
void unit_cattle_getEarring();

/*!
  Function prototype for the Cattle class' method setEarring() unit test.
*/
void unit_cattle_setEarring();

/*!
  Function prototype for the Cattle class' method getBreed() unit test.
*/
void unit_cattle_getBreed();

/*!
  Function prototype for the Cattle class' method setBreed() unit test.
*/
void unit_cattle_setBreed();

/*!
  Function prototype for the Cattle class' method getAcquisitionDate() unit test.
*/
void unit_cattle_getAcquisitionDate();

/*!
  Function prototype for the Cattle class' method setAcquisitionDate() unit test.
*/
void unit_cattle_setAcquisitionDate();

/*!
  Function prototype for the Cattle class' method getBirthDate() unit test.
*/
void unit_cattle_getBirthDate();

/*!
  Function prototype for the Cattle class' method setBirthDate() unit test.
*/
void unit_cattle_setBirthDate();

/*!
  Function prototype for the Cattle class' method getFather() unit test.
*/
void unit_cattle_getFather();

/*!
  Function prototype for the Cattle class' method setFather() unit test.
*/
void unit_cattle_setFather();

/*!
  Function prototype for the Cattle class' method getMother() unit test.
*/
void unit_cattle_getMother();

/*!
  Function prototype for the Cattle class' method setMother() unit test.
*/
void unit_cattle_setMother();

/*!
  Function prototype for the Cattle class' method getWeight() unit test.
*/
void unit_cattle_getWeight();

/*!
  Function prototype for the Cattle class' method setWeight() unit test.
*/
void unit_cattle_setWeight();

/*!
  Function prototype for the Cattle class' method getValue() unit test.
*/
void unit_cattle_getValue();

/*!
  Function prototype for the Cattle class' method setValue() unit test.
*/
void unit_cattle_setValue();

/*!
  Function prototype for the CattleHandle class' assingment operator unit test.
*/
void unit_cattle_assingmentOperator();

/*!
  Function prototype for the function that runs all the unit tests of the Cattle class.
*/
void run_unit_tests_Cattle();

#endif
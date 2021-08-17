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

/*!
  Function prototype for the Farm class' constructor unit test.
*/
void unit_farm_constructor();

/*!
  Function prototype for the FarmHandle class' constructor unit test.
*/
void unit_farm_copy_constructor();

/*!
  Function prototype for the Farm class' destructor unit test.
*/
void unit_farm_destructor();

/*!
  Function prototype for the Farm class' method createCattle() unit test.
*/
void unit_farm_createCattle(Farm* f);

/*!
  Function prototype for the Farm class' method createTransaction() unit test.
*/
void unit_farm_createTransaction(Farm* f);

/*!
  Function prototype for the Farm class' method getQuery() unit test.
*/
void unit_farm_getQuery(Farm* f);

/*!
  Function prototype for the Farm class' method setQuery() unit test.
*/
void unit_farm_setQuery();

/*!
  Function prototype for the Farm class' method queryExec() unit test.
*/
void unit_farm_queryExec(Farm* f);

/*!
  Function prototype for the Farm class' method queryNext() unit test.
*/
void unit_farm_queryNext(Farm* f);

/*!
  Function prototype for the Farm class' method queryFirst() unit test.
*/
void unit_farm_queryFirst(Farm* f);

/*!
  Function prototype for the Farm class' method queryValue() unit test.
*/
void unit_farm_queryValue(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleCEarring() unit test.
*/
void unit_farm_getCattleEarring(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleEarring() unit test.
*/
void unit_farm_setCattleEarring(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleBreed() unit test.
*/
void unit_farm_getCattleBreed(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleBreed() unit test.
*/
void unit_farm_setCattleBreed(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleAcquisitionDate() unit test.
*/
void unit_farm_getCattleAcquisitionDate(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleAcquisitionDate() unit test.
*/
void unit_farm_setCattleAcquisitionDate(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleBirthDate() unit test.
*/
void unit_farm_getCattleBirthDate(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleBirthDate() unit test.
*/
void unit_farm_setCattleBirthDate(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleFather() unit test.
*/
void unit_farm_getCattleFather(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleFather() unit test.
*/
void unit_farm_setCattleFather(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleMother() unit test.
*/
void unit_farm_getCattleMother(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleMother() unit test.
*/
void unit_farm_setCattleMother(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleWeight() unit test.
*/
void unit_farm_getCattleWeight(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleWeight() unit test.
*/
void unit_farm_setCattleWeight(Farm* f);

/*!
  Function prototype for the Farm class' method getCattleValue() unit test.
*/
void unit_farm_getCattleValue(Farm* f);

/*!
  Function prototype for the Farm class' method setCattleValue() unit test.
*/
void unit_farm_setCattleValue(Farm* f);

/*!
  Function prototype for the Farm class' method getLastEarringAvailable() unit test.
*/
void unit_farm_getLastEarringAvailable(Farm* f);

/*!
  Function prototype for the Farm class' method getLastNumberAvailable() unit test.
*/
void unit_farm_getLastNumberAvailable(Farm* f);

/*!
  Function prototype for the Farm class' method deleteCattle() unit test.
*/
void unit_farm_deleteCattle(Farm* f);

/*!
  Function prototype for the Farm class' method deleteTransaction() unit test.
*/
void unit_farm_deleteTransaction(Farm* f);

/*!
  Function prototype for the FarmHandle class' assingment operator unit test.
*/
void unit_farm_assingmentOperator();

/*!
  Function prototype for the function that runs all the unit tests of the Farm class.
*/
void run_unit_tests_farm(Farm* f);

#endif

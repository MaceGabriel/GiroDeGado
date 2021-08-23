/*!
 \file functional_tests.h
 \brief This file contains the functional tests of the backend/API for the GiroDeGado software.
*/

#ifndef FUNCTIONAL_TESTS
#define FUNCTIONAL_TESTS

#include <assert.h>
#include <math.h>
#include "../../includes/farm.h"

#define DEBUGING
#ifdef DEBUGING
    int numHandleCreated = 0;
    int numHandleDeleted = 0;
    int numBodyCreated = 0;
    int numBodyDeleted = 0;
#endif

//! Functional tests 
/**
* Creation of the functional tests of the backend/API for the GiroDeGado software.
*/

/*!
  Function prototype for the functional test for creating, editing, reading and deleting a cattle.
*/
void functional_cattle(Farm* f);

/*!
  Function prototype for the functional test for creating, editing, reading and deleting a transaction.
*/
void functional_transaction(Farm* f);

/*!
  Function prototype for the function that runs all the functional tests.
*/
void run_functional_tests(Farm* f);

#endif

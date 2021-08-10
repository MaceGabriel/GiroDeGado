#ifndef MAIN_UNIT_TESTS
#define MAIN_UNIT_TESTS

#include "./unit_cattle.h"
#include "./unit_transaction.h"
#include "./unit_farm.h"

#define DEBUGING
#ifdef DEBUGING
int numHandleCreated = 0;
int numHandleDeleted = 0;
int numBodyCreated = 0;
int numBodyDeleted = 0;
#endif

int main(){

    cout << "\n========== Testes unitarios da Classe Cattle ===========\n" << endl;
    run_unit_tests_cattle();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
    /*
    cout << "\n========== Testes unitarios da Classe Transaction ===========\n" << endl;
    run_unit_tests_transaction();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
    cout << "\n========== Testes unitarios da Classe Farm ===========\n" << endl;
    run_unit_tests_farm();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);*/

    return 0;
}

#endif

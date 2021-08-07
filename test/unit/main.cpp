#ifndef MAIN_UNIT_TESTS
#define MAIN_UNIT_TESTS

#include "./unit_cattle.h"

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

    return 0;
}

#endif
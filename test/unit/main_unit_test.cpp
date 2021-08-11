#include "./main_unit_test.h"

#define DEBUGING
#ifdef DEBUGING
    int numHandleCreated = 0;
    int numHandleDeleted = 0;
    int numBodyCreated = 0;
    int numBodyDeleted = 0;
#endif

void main_unit_test(){
    cout << "\n========== Testes unitarios da Classe Cattle ===========\n" << endl;
    run_unit_tests_cattle();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
    cout << "\n========== Testes unitarios da Classe Transaction ===========\n" << endl;
    run_unit_tests_transaction();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
    cout << "\n========== Testes unitarios da Classe Farm ===========\n" << endl;
    run_unit_tests_farm();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
}

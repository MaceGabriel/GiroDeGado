#include "./main_unit_test.h"
#include <QtSql>

#define DEBUGING
#ifdef DEBUGING
    int numHandleCreated = 0;
    int numHandleDeleted = 0;
    int numBodyCreated = 0;
    int numBodyDeleted = 0;
#endif

void main_unit_test(){
    std::cout << "\n========== Testes unitarios da Classe Cattle ===========\n" << std::endl;
    run_unit_tests_cattle();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
    std::cout << "\n========== Testes unitarios da Classe Transaction ===========\n" << std::endl;
    run_unit_tests_transaction();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);
    std::cout << "\n========== Testes unitarios da Classe Farm ===========\n" << std::endl;
    run_unit_tests_farm();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);    
}

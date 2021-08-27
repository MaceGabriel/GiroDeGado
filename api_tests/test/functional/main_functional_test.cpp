#include "./main_functional_test.h"
#include "./functional_tests.h"

#include <QtSql/QtSql>

int main_functional_test(Farm* f){
    // The number of handles and bodies created are 1 lower than the number of handles and bodies deleted
    // because of the Farm* f, created for testing purposes.

    run_functional_tests(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    return 0;
}

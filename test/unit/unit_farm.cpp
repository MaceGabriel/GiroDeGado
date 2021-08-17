#include "unit_farm.h"

using namespace std;

// Function for Farm class's constructor unit test.
void unit_farm_constructor(){
    std::cout << "TEST 1 - Default constructor of the Farm class without passing paramteres" << std::endl;

    Farm* farm1 = Farm::createFarm();
    assert(farm1->getQuery() == NULL);

    delete farm1;
    std::cout << "OK!" << std::endl;

    std::cout << "TEST 2 - Default constructor of the Farm class while passing paramteres" << std::endl;

    QSqlQuery q;
    Farm* farm2 = Farm::createFarm(&q);
    assert(farm2->getQuery() != NULL);

    delete farm2;
    std::cout << "OK!" << std::endl;
}

// Function for FarmHandle class's copy constructor unit test.
void UnitFarm::unit_farm_copy_constructor(){
    std::cout << "TEST 3 - Copy constructor of the FarmHandle class" << std::endl;
    
    FarmHandle* farm1 = new FarmHandle();
    FarmHandle* farm2 = new FarmHandle(*farm1);

    // The copy constructor instantiates a new FarmHandle, but not a new FarmBody
    assert(numHandleCreated == numBodyCreated+3);

    delete farm1;
    delete farm2;

    assert(numHandleDeleted == numBodyDeleted+3);

    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' destructor unit test.
void unit_farm_destructor(){
    std::cout << "TEST 4 - Default destructor of the Farm class" << std::endl;
    
    MEMORYSTATUSEX memInfoBefore;
    memInfoBefore.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfoBefore);
    DWORDLONG virtualMemUsedBefore = memInfoBefore.ullTotalPageFile - memInfoBefore.ullAvailPageFile;

    Farm* farm = Farm::createFarm();

    delete farm;

    MEMORYSTATUSEX memInfoAfter;
    memInfoAfter.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfoAfter);
    DWORDLONG virtualMemUsedAfter = memInfoAfter.ullTotalPageFile - memInfoAfter.ullAvailPageFile;

    // Making assertion to verify if the memory usage after the creation and deletion
    // is the same as before the creation of Farm object.
    assert(virtualMemUsedBefore == virtualMemUsedAfter);

    std::cout << "OK!" << std::endl;
}

void unit_farm_createFarm(){
    std::cout << "TEST 5 - Farm class' createFarm() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_createCattle(){
    std::cout << "TEST 6 - Farm class' createCattle() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_createTransaction(){
    std::cout << "TEST 7 - Farm class' createTransaction() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setQuery(){
    std::cout << "TEST 8 - Farm class' setQuery() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getQuery(){
    std::cout << "TEST 9 - Farm class' getQuery() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_queryExec(){
    std::cout << "TEST 10 - Farm class' queryExec() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_queryNext(){
    std::cout << "TEST 11 - Farm class' queryNext() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_queryFirst(){
    std::cout << "TEST 12 - Farm class' queryFirst() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_queryValue(){
    std::cout << "TEST 13 - Farm class' queryValue() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleEarring(){
    std::cout << "TEST 14 - Farm class' getCattleEarring() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleEarring(){
    std::cout << "TEST 15 - Farm class' setCattleEarring() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleBreed(){
    std::cout << "TEST 16 - Farm class' getCattleBreed() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleBreed(){
    std::cout << "TEST 17 - Farm class' setCattleBreed() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleAcquisitionDate(){
    std::cout << "TEST 18 - Farm class' setCattleAcquisitionDate() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleAcquisitionDate(){
    std::cout << "TEST 19 - Farm class' getCattleAcquisitionDate() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleBirthDate(){
    std::cout << "TEST 20 - Farm class' getCattleBirthDate() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleBirthDate(){
    std::cout << "TEST 21 - Farm class' setCattleBirthDate() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleFather(){
    std::cout << "TEST 22 - Farm class' getCattleFather() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleFather(){
    std::cout << "TEST 23 - Farm class' setCattleFather() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleMother(){
    std::cout << "TEST 24 - Farm class' getCattleMother() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleMother(){
    td::cout << "TEST 25 - Farm class' setCattleMother() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleWeight(){
    std::cout << "TEST 26 - Farm class' getCattleWeight() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleWeight(){
    std::cout << "TEST 27 - Farm class' setCattleWeight() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleValue(){
    std::cout << "TEST 28 - Farm class' getCattleValue() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleValue(){
    std::cout << "TEST 29 - Farm class' setCattleValue() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getLastEarringAvailable(){
    std::cout << "TEST X - Farm class' getLastEarringAvailable() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_getLastNumberAvailable(){
    std::cout << "TEST X - Farm class' getLastNumberAvailable() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_deleteCattle(){
    std::cout << "TEST X - Farm class' deleteCattle() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_deleteTransaction(){
    std::cout << "TEST X - Farm class' deleteTransaction() method" << std::endl;



    std::cout << "OK!" << std::endl;
}

void unit_farm_assingmentOperator(){
    std::cout << "TEST X - FarmHandle class assignment operator" << std::endl;



    std::cout << "OK!" << std::endl;
}

// Function to run all the Farm class' unit tests.
void run_unit_tests_farm(){
    
    // Calling all the Farm class' unit test functions.
    unit_farm_constructor();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_copy_constructor();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_destructor();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleQuery();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleQuery();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryExec();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryNext();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryFirst();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryValue();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_createCattle();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_createTransaction();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_createFarm();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_deleteCattle();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_deleteTransaction();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleEarring();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleEarring();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleBreed();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleBreed();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleAcquisitionDate();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleAcquisitionDate();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleBirthDate();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleBirthDate();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleFather();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleFather();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleMother();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleMother();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleWeight();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleWeight();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleValue();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleValue();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    // unit tests for farm methods related to transaction

    unit_farm_getLastEarringAvailable();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getLastNumberAvailable();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_assingmentOperator();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    run_unit_tests_farm();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

}

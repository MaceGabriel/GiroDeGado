#include "unit_farm.h"

using namespace std;

// Function for Farm class's constructor unit test.
void unit_farm_constructor(){
    std::cout << "TEST 1 - Default constructor of the Farm class without passing paramteres" << std::endl;

    Farm* farm1 = Farm::createFarm(1);

    int cont = 0;
    for(auto it = farm1->beginFarmContainer(); it != farm1->endFarmContainer(); ++it){
        cont++;
    }

    // Making assertion to verify if the farm was created and added to the farm container.
    assert(cont == 2);

    delete farm1;
    std::cout << "OK!" << std::endl;

    std::cout << "TEST 2 - Default constructor of the Farm class while passing paramteres" << std::endl;

    QSqlQuery q;
    Farm* farm2 = Farm::createFarm(2, &q);

    cont = 0;
    for(auto it = farm2->beginFarmContainer(); it != farm2->endFarmContainer(); ++it){
        cont++;
    }

    std::cout << "cont: " << cont << std::endl;

    // Making assertion to verify if the farm was created and added to the farm container.
    assert(cont == 2);

    delete farm2;
    std::cout << "OK!" << std::endl;
}

// Function for FarmHandle class's copy constructor unit test.
void unit_farm_copy_constructor(){
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

    Farm* farm = Farm::createFarm(3);

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

void unit_farm_createCattle(Farm* f){
    std::cout << "TEST 5 - Farm class' createCattle() method" << std::endl;

    f->createCattle(3, "Angus", "02/01/2000", "01/01/2000", 1, 2, 50.0, 500.0);
    QString earring = f->getCattleEarring(3);

    // Making assertion to verify if the cattle was created.
    assert(earring == QString::fromStdString("3"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_createTransaction(Farm* f){
    std::cout << "TEST 6 - Farm class' createTransaction() method" << std::endl;

    f->createTransaction(20, 2000.0, "Venda de Gado", "01/01/2000", 5);
    //QString number = f->getTransactionNumber(20);

    // Making assertion to verify if the transaction was created.
    //assert(number == QString::fromStdString("20"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getQuery(Farm* f){
    std::cout << "TEST 7 - Farm class' getQuery() method" << std::endl;

    QSqlQuery* query = NULL;
    query = f->getQuery();

    // Making assertion to verify if the query returned isn't NULL.
    assert(query != NULL);

    std::cout << "OK!" << std::endl;
}

void unit_farm_setQuery(){
    std::cout << "TEST 8 - Farm class' setQuery() method" << std::endl;

    QSqlQuery query1;
    Farm* farm = Farm::createFarm(4);
    farm->setQuery(&query1);
    QSqlQuery* query2 = farm->getQuery();

    // Making assertion to verify if the query passed to the farm's constructor is the same as the one returned
    // by the method.
    assert(&query1 == query2);

    std::cout << "OK!" << std::endl;
}

void unit_farm_queryExec(Farm* f){
    std::cout << "TEST 9 - Farm class' queryExec() method" << std::endl;

    bool response = f->queryExec("select * from cattle where earring=3");

    // Making assertion to verify if the method was executed by the query.
    assert(response == true);

    std::cout << "OK!" << std::endl;
}

void unit_farm_queryNext(Farm* f){
    std::cout << "TEST 10 - Farm class' queryNext() method" << std::endl;

    int count = 0;
    while(f->queryNext()){
        count++;
    }

    // Making assertion to verify if the method was executed by the query.
    assert(count > 0);

    std::cout << "OK!" << std::endl;
}

void unit_farm_queryFirst(Farm* f){
    std::cout << "TEST 11 - Farm class' queryFirst() method" << std::endl;

    bool response = f->queryFirst();

    // Making assertion to verify if the method was executed by the query.
    assert(response == true);

    std::cout << "OK!" << std::endl;
}

void unit_farm_queryValue(Farm* f){
    std::cout << "TEST 12 - Farm class' queryValue() method" << std::endl;

    QString earring = f->queryValue(1);

    // Making assertion to verify if the method was executed by the query.
    assert(earring == QString::fromStdString("3"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleEarring(Farm* f){
    std::cout << "TEST 13 - Farm class' getCattleEarring() method" << std::endl;

    QString earring = f->getCattleEarring(3);

    // Making assertion to verify if the earring was returned correctly.
    assert(earring == QString::fromStdString("3"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleEarring(Farm* f){
    std::cout << "TEST 14 - Farm class' setCattleEarring() method" << std::endl;

    f->setCattleEarring(3, 4);
    QString earring = f->getCattleEarring(4);

    // Making assertion to verify if the earring was modified.
    assert(earring == QString::fromStdString("4"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleBreed(Farm* f){
    std::cout << "TEST 15 - Farm class' getCattleBreed() method" << std::endl;

    QString breed = f->getCattleBreed(4);

    // Making assertion to verify if the breed was returned correctly.
    assert(breed == QString::fromStdString("Angus"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleBreed(Farm* f){
    std::cout << "TEST 16 - Farm class' setCattleBreed() method" << std::endl;

    f->setCattleBreed(4, "Brangus");
    QString breed = f->getCattleBreed(4);

    // Making assertion to verify if the breed was modified.
    assert(breed == QString::fromStdString("Brangus"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleAcquisitionDate(Farm* f){
    std::cout << "TEST 17 - Farm class' setCattleAcquisitionDate() method" << std::endl;

    QString acquisition_date = f->getCattleAcquisitionDate(4);

    // Making assertion to verify if the acquisition date was returned correctly.
    assert(acquisition_date == QString::fromStdString("02/01/2000"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleAcquisitionDate(Farm* f){
    std::cout << "TEST 18 - Farm class' getCattleAcquisitionDate() method" << std::endl;

    f->setCattleAcquisitionDate(4, "02/03/2000");
    QString acquisition_date = f->getCattleAcquisitionDate(4);

    // Making assertion to verify if the acquisition date was modified.
    assert(acquisition_date == QString::fromStdString("02/03/2000"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleBirthDate(Farm* f){
    std::cout << "TEST 19 - Farm class' getCattleBirthDate() method" << std::endl;

    QString birth_date = f->getCattleBirthDate(4);

    // Making assertion to verify if the birth date was returned correctly.
    assert(birth_date == QString::fromStdString("01/01/2000"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleBirthDate(Farm* f){
    std::cout << "TEST 20 - Farm class' setCattleBirthDate() method" << std::endl;

    f->setCattleBirthDate(4, "01/03/2000");
    QString birth_date = f->getCattleBirthDate(4);

    // Making assertion to verify if the birth date was modified.
    assert(birth_date == QString::fromStdString("01/03/2000"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleFather(Farm* f){
    std::cout << "TEST 21 - Farm class' getCattleFather() method" << std::endl;

    QString father = f->getCattleFather(4);

    // Making assertion to verify if the father's earring was returned correctly.
    assert(father == QString::fromStdString("1"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleFather(Farm* f){
    std::cout << "TEST 22 - Farm class' setCattleFather() method" << std::endl;

    f->setCattleFather(4, 5);
    QString father = f->getCattleFather(4);

    // Making assertion to verify if the father's earring was modified.
    assert(father == QString::fromStdString("5"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleMother(Farm* f){
    std::cout << "TEST 23 - Farm class' getCattleMother() method" << std::endl;

    QString mother = f->getCattleMother(4);

    // Making assertion to verify if the mother's earring was returned correctly.
    assert(mother == QString::fromStdString("2"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleMother(Farm* f){
    std::cout << "TEST 24 - Farm class' setCattleMother() method" << std::endl;

    f->setCattleMother(4, 6);
    QString mother = f->getCattleMother(4);

    // Making assertion to verify if the mother's earring was modified.
    assert(mother == QString::fromStdString("6"));

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleWeight(Farm* f){
    std::cout << "TEST 25 - Farm class' getCattleWeight() method" << std::endl;

    double weight = f->getCattleWeight(4).toDouble();

    // Making assertion to verify if the weight was returned correctly.
    assert(fabs(weight - 50.0) < 0.0001);

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleWeight(Farm* f){
    std::cout << "TEST 26 - Farm class' setCattleWeight() method" << std::endl;

    f->setCattleWeight(4, 80.0);
    double weight = f->getCattleWeight(4).toDouble();

    // Making assertion to verify if the weight was modified.
    assert(fabs(weight - 80.0) < 0.0001);

    std::cout << "OK!" << std::endl;
}

void unit_farm_getCattleValue(Farm* f){
    std::cout << "TEST 27 - Farm class' getCattleValue() method" << std::endl;

    double value = f->getCattleValue(4).toDouble();

    // Making assertion to verify if the value was returned correctly.
    assert(fabs(value - 500.0) < 0.0001);

    std::cout << "OK!" << std::endl;
}

void unit_farm_setCattleValue(Farm* f){
    std::cout << "TEST 28 - Farm class' setCattleValue() method" << std::endl;

    f->setCattleValue(4, 800.0);
    double value = f->getCattleValue(4).toDouble();

    // Making assertion to verify if the value was modified.
    assert(fabs(value - 800.0) < 0.0001);

    std::cout << "OK!" << std::endl;
}

void unit_farm_getLastEarringAvailable(Farm* f){
    std::cout << "TEST X - Farm class' getLastEarringAvailable() method" << std::endl;

    int last = f->getLastEarringAvailable();

    // Making assertion to verify if the last earring available from the cattle table was returned correctly.
    assert(last == 5);

    std::cout << "OK!" << std::endl;
}

void unit_farm_getLastNumberAvailable(Farm* f){
    std::cout << "TEST X - Farm class' getLastNumberAvailable() method" << std::endl;

    // int last = f->getLastNumberAvailable();

    // Making assertion to verify if the last number available from the financial table was returned correctly.
    // assert(last == 22);

    std::cout << "OK!" << std::endl;
}

void unit_farm_deleteCattle(Farm* f){
    std::cout << "TEST X - Farm class' deleteCattle() method" << std::endl;

    f->deleteCattle(4);
    QString earring = f->getCattleEarring(4);

    // Making assertion to verify if the cattle was deleted.
    assert(earring == QString(""));

    std::cout << "OK!" << std::endl;
}

void unit_farm_deleteTransaction(Farm* f){
    std::cout << "TEST X - Farm class' deleteTransaction() method" << std::endl;

    f->deleteTransaction(20);
    // f->deleteTransaction(21);
    // QString number = f->getTransactionNumber(21);

    // Making assertion to verify if the transaction was deleted.
    // assert(number == QString(""));

    std::cout << "OK!" << std::endl;
}

void unit_farm_assingmentOperator(){
    std::cout << "TEST X - FarmHandle class assignment operator" << std::endl;

    FarmHandle* farm1 = new FarmHandle();
    FarmHandle* farm2 = new FarmHandle();
    *farm2 = *farm1;

    delete farm1;
    delete farm2;

    std::cout << "OK!" << std::endl;
}

// Function to run all the Farm class' unit tests.
void run_unit_tests_farm(Farm* f){
    
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

    unit_farm_createCattle(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_createTransaction(f); /////////////////
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getQuery(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setQuery();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryExec(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryNext(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryFirst(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_queryValue(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleEarring(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleEarring(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleBreed(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleBreed(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleAcquisitionDate(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleAcquisitionDate(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleBirthDate(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleBirthDate(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleFather(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleFather(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleMother(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleMother(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleWeight(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleWeight(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getCattleValue(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_setCattleValue(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    // unit tests for farm methods related to transaction

    unit_farm_getLastEarringAvailable(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_getLastNumberAvailable(f); /////////////////
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_deleteCattle(f);
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_deleteTransaction(f); /////////////////
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

    unit_farm_assingmentOperator();
    assert(numHandleCreated == numHandleDeleted+1);
    assert(numBodyCreated == numBodyDeleted+1);

}

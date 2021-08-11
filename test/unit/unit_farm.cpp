#include "unit_farm.h"

using namespace std;

// Function for Farm class's constructor unit test.
void unit_farm_constructor(){
    std::cout << "TEST 1 - Default constructor of the Farm class" << std::endl;

    Farm* farm = Farm::createFarm();

    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    vector<Cattle*> cattleVector;
    cattleVector.push_back(cattle);

    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    vector<Transaction*> transactionVector;
    transactionVector.push_back(transaction); 
   
    int counter = 0;    
    for (auto c = farm->beginCattleContainer(); c != farm->endCattleContainer(); ++c){
        // Making assertion to verify if the cattle were added to the cattle container property.
        assert((*c)->getEarring() == cattleVector[counter]->getEarring());
        counter++;
    }

    counter = 0;    
    for (auto t = farm->beginTransactionContainer(); t != farm->endTransactionContainer(); ++t){
        // Making assertion to verify if the transactions were added to the transaction container property.
        assert((*t)->getId() == transactionVector[counter]->getId());
        counter++;
    }

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for FarmHandle class's copy constructor unit test.
void UnitFarm::unit_farm_copy_constructor(){
    std::cout << "TEST 2 - Copy constructor of the FarmHandle class" << std::endl;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    
    FarmHandle* farm1 = new FarmHandle();
    FarmHandle* farm2 = new FarmHandle(*farm1);

    farm1->add(cattle);
    farm1->add(transaction);
        
    auto c1 = farm1->beginCattleContainer();
    for (auto c2 = farm2->beginCattleContainer(); c2 != farm2->endCattleContainer(); ++c2){
        // Making assertion to verify if the cattle were added to the cattle container property.
        assert((*c1)->getEarring() == (*c2)->getEarring());
        c1++;
    }

    auto t1 = farm1->beginTransactionContainer();
    for (auto t2 = farm2->beginTransactionContainer(); t2 != farm2->endTransactionContainer(); ++t2){
        // Making assertion to verify if the transactions were added to the transaction container property.
        assert((*t1)->getId() == (*t2)->getId());
        t1++;
    }

    // The copy constructor instantiates a new farmHandle, but not a new farmBody
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
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

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

// Function for the Farm class' addCattle() method unit test.
void UnitFarm::unit_farm_addCattle(){
    std::cout << "TEST 5 - Farm class' addCattle() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    farm->add(cattle);

    // Making assertion to verify if the cattle has been added to the cattle container property.
    assert((*(farm->beginCattleContainer()))->getEarring() == cattle->getEarring());

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' removeCattle() method unit test.
void unit_farm_removeCattle(){
    std::cout << "TEST 6 - Farm class' removeCattle() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    farm->remove(cattle);
    
    // Making assertion to verify if the cattle has been removed from the cattle container property.
    assert(farm->beginCattleContainer() == farm->endCattleContainer());

    delete cattle;
    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' addTransaction() method unit test.
void UnitFarm::unit_farm_addTransaction(){
    std::cout << "TEST 7 - Farm class' addTransaction() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    farm->add(transaction);
    
    // Making assertion to verify if the transaction has been added to the transaction container property.
    assert((*(farm->beginTransactionContainer()))->getId() == transaction->getId());

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' removeTransaction() method unit test.
void unit_farm_removeTransaction(){
    std::cout << "TEST 8 - Farm class' removeTransaction() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    
    farm->remove(transaction);

    // Making assertion to verify if the transaction has been removed from the transaction container property.
    assert(farm->beginTransactionContainer() == farm->endTransactionContainer());

    delete transaction;
    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getEarring() method unit test.
void unit_farm_getEarring(){
    std::cout << "TEST 9 - Farm class' getEarring() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's earring and if it's
    // equal to the parameter previously passed. 
    assert(farm->getEarring(cattle) == "003");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setEarring() method unit test.
void unit_farm_setEarring(){
    std::cout << "TEST 10 - Farm class' setEarring() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setEarring(cattle, "004");

    // Making assertion to verify if the data of the added cattle's earring has been altered.
    assert(farm->getEarring(cattle) == "004");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getBreed() method unit test.
void unit_farm_getBreed(){
    std::cout << "TEST 11 - Farm class' getBreed() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's breed and if it's
    // equal to the parameter previously passed. 
    assert(farm->getBreed(cattle) == "Angus");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setBreed() method unit test.
void unit_farm_setBreed(){
    std::cout << "TEST 12 - Farm class' setBreed() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setBreed(cattle, "Brangus");

    // Making assertion to verify if the data of the added cattle's breed has been altered.
    assert(farm->getBreed(cattle) == "Brangus");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getAcquisitionDate() method unit test.
void unit_farm_getAcquisitionDate(){
    std::cout << "TEST 13 - Farm class' getAcquisitionDate() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's acquisition date and if it's
    // equal to the parameter previously passed. 
    assert(farm->getAcquisitionDate(cattle) == "01/04/1990");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setAcquisitionDate() method unit test.
void unit_farm_setAcquisitionDate(){
    std::cout << "TEST 14 - Farm class' setAcquisitionDate() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setAcquisitionDate(cattle, "02/04/1991");

    // Making assertion to verify if the data of the added cattle's acquisition date has been altered.
    assert(farm->getAcquisitionDate(cattle) == "02/04/1991");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getBirthDate() method unit test.
void unit_farm_getBirthDate(){
    std::cout << "TEST 15 - Farm class' getBirthDate() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's birth date and if it's
    // equal to the parameter previously passed. 
    assert(farm->getBirthDate(cattle) == "01/01/1990");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setBirthDate() method unit test.
void unit_farm_setBirthDate(){
    std::cout << "TEST 16 - Farm class' setBirthDate() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setBirthDate(cattle, "02/01/1991");

    // Making assertion to verify if the data of the added cattle's birth date has been altered.
    assert(farm->getBirthDate(cattle) == "02/01/1991");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getFather() method unit test.
void unit_farm_getFather(){
    std::cout << "TEST 17 - Farm class' getFather() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's father and if it's
    // equal to the parameter previously passed. 
    assert(farm->getFather(cattle) == "001");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setFather() method unit test.
void unit_farm_setFather(){
    std::cout << "TEST 18 - Farm class' setFather() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setFather(cattle, "005");

    // Making assertion to verify if the data of the added cattle's father has been altered.
    assert(farm->getFather(cattle) == "005");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getMother() method unit test.
void unit_farm_getMother(){
    std::cout << "TEST 19 - Farm class' getMother() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's mother and if it's
    // equal to the parameter previously passed. 
    assert(farm->getMother(cattle) == "002");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setMother() method unit test.
void unit_farm_setMother(){
    std::cout << "TEST 20 - Farm class' setMother() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setMother(cattle, "006");

    // Making assertion to verify if the data of the added cattle's mother has been altered.
    assert(farm->getMother(cattle) == "006");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getWeight() method unit test.
void unit_farm_getWeight(){
    std::cout << "TEST 21 - Farm class' getWeight() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's weight and if it's
    // equal to the parameter previously passed. 
    assert(fabs(farm->getWeight(cattle) - 250.0) < 0.0001);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setWeight() method unit test.
void unit_farm_setWeight(){
    std::cout << "TEST 22 - Farm class' setWeight() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setWeight(cattle, 300.0);

    // Making assertion to verify if the data of the added cattle's weight has been altered.
    assert(fabs(farm->getWeight(cattle) - 300.0) < 0.0001);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getValue() method unit test, while passing a Cattle as an argument.
void unit_farm_cattle_getValue(){
    std::cout << "TEST 23 - Farm class' getValue() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the added cattle's value and if it's
    // equal to the parameter previously passed.
    assert(fabs(farm->getValue(cattle) - 2400.0) < 0.0001);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setValue() method unit test, while passing a Cattle as an argument.
void unit_farm_cattle_setValue(){
    std::cout << "TEST 24 - Farm class' setValue() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Cattle* cattle = farm->createCattle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    farm->setValue(cattle, 3000.0);

    // Making assertion to verify if the data of the added cattle's value has been altered.
    assert(fabs(farm->getValue(cattle) - 3000.0) < 0.0001);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getId() method unit test.
void unit_farm_getId(){
    std::cout << "TEST 25 - Farm class' getId() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the added transaction's Id and if it's
    // equal to the parameter previously passed. 
    assert(farm->getId(transaction) == 20);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setId() method unit test.
void unit_farm_setId(){
    std::cout << "TEST 26 - Farm class' setId() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    farm->setId(transaction, 21);

    // Making assertion to verify if the data of the added transaction's Id has been altered.
    assert(farm->getId(transaction) == 21);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getValue() method unit test, while passing a Transaction as an argument.
void unit_farm_transaction_getValue(){
    std::cout << "TEST 27 - Farm class' getValue() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the added transaction's value and if it's
    // equal to the parameter previously passed. 
    assert(fabs(farm->getValue(transaction) - 2000.0) < 0.0001);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setValue() method unit test, while passing a Transaction as an argument.
void unit_farm_transaction_setValue(){
    std::cout << "TEST 28 - Farm class' setValue() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    farm->setValue(transaction, 2500.0);

    // Making assertion to verify if the data of the added transaction's value has been altered.
    assert(fabs(farm->getValue(transaction) - 2500.0) < 0.0001);

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getDescription() method unit test.
void unit_farm_getDescription(){
    std::cout << "TEST 29 - Farm class' getDescription() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the added transaction's description and if it's
    // equal to the parameter previously passed. 
    assert(farm->getDescription(transaction) == "Venda de Gado");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setDescription() method unit test.
void unit_farm_setDescription(){
    std::cout << "TEST 30 - Farm class' setDescription() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    farm->setDescription(transaction, "Compra de Gado");

    // Making assertion to verify if the data of the added transaction's description has been altered.
    assert(farm->getDescription(transaction) == "Compra de Gado");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getDate() method unit test, while passing a Transaction as an argument.
void unit_farm_getDate(){
    std::cout << "TEST 31 - Farm class' getDate() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the added transaction's date and if it's
    // equal to the parameter previously passed. 
    assert(farm->getDate(transaction) == "02/02/1990");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setDate() method unit test, while passing a Transaction as an argument.
void unit_farm_setDate(){
    std::cout << "TEST 32 - Farm class' setDate() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    farm->setDate(transaction, "03/02/1991");

    // Making assertion to verify if the data of the added transaction's date has been altered.
    assert(farm->getDate(transaction) == "03/02/1991");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' getCattleEarring() method unit test, while passing a Transaction as an argument.
void unit_farm_getCattleEarring(){
    std::cout << "TEST 33 - Farm class' getCattleEarring() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the added transaction's cattle earring and if it's
    // equal to the parameter previously passed. 
    assert(farm->getCattleEarring(transaction) == "039");

    delete farm;
    std::cout << "OK!" << std::endl;
}

// Function for the Farm class' setCattleEarring() method unit test, while passing a Transaction as an argument.
void unit_farm_setCattleEarring(){
    std::cout << "TEST 34 - Farm class' setCattleEarring() method" << std::endl;

    Farm* farm = Farm::createFarm();
    Transaction* transaction = farm->createTransaction(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    farm->setCattleEarring(transaction, "040");

    // Making assertion to verify if the data of the added transaction's cattle earring has been altered.
    assert(farm->getCattleEarring(transaction) == "040");

    delete farm;
    std::cout << "OK!" << std::endl;
}

//Function for FarmHandle class' assingment operator unit test.
void UnitFarm::unit_farm_assingmentOperator(){
    std::cout << "TEST 35 - FarmHandle class' assignment operator" << std::endl;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    
    FarmHandle* farm1 = new FarmHandle();
    FarmHandle* farm2 = new FarmHandle();
    *farm2 = *farm1;

    farm1->add(cattle);
    farm1->add(transaction);
        
    auto c1 = farm1->beginCattleContainer();
    for (auto c2 = farm2->beginCattleContainer(); c2 != farm2->endCattleContainer(); ++c2){
        // Making assertion to verify if the cattle were added to the cattle container property.
        assert((*c1)->getEarring() == (*c2)->getEarring());
        c1++;
    }

    auto t1 = farm1->beginTransactionContainer();
    for (auto t2 = farm2->beginTransactionContainer(); t2 != farm2->endTransactionContainer(); ++t2){
        // Making assertion to verify if the transactions were added to the transaction container property.
        assert((*t1)->getId() == (*t2)->getId());
        t1++;
    }
    
    delete farm1;
    delete farm2;

    std::cout << "OK!" << std::endl;
}

// Function to run all the Farm class' unit tests.
void run_unit_tests_farm(){

    UnitFarm* unit_farm = new UnitFarm();
    
    // Calling all the Farm class' unit test functions.
    unit_farm_constructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm->unit_farm_copy_constructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_destructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm->unit_farm_addCattle();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_removeCattle();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm->unit_farm_addTransaction();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_removeTransaction();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getBreed();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setBreed();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getAcquisitionDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setAcquisitionDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getBirthDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setBirthDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getFather();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setFather();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getMother();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setMother();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getWeight();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setWeight();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_cattle_getValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_cattle_setValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getId();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setId();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_transaction_getValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_transaction_setValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getDescription();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setDescription();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_getCattleEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm_setCattleEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_farm->unit_farm_assingmentOperator();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    delete unit_farm;
}
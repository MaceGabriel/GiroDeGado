#include "unit_transaction.h" 

using namespace std;

// Function for Transaction class's constructor unit test.
void unit_transaction_constructor(){
    std::cout << "TEST 1 - Default constructor of the Transaction class without passing parameters" << std::endl;
    
    Transaction* transaction1 = new TransactionHandle();
    // Making assertion to verify if the number property was initialized with the default data.
    assert(transaction1->getNumber() == 0);
    // Making assertion to verify if the value property was initialized with the default data. 
    assert(transaction1->getValue() == 0.0);
    // Making assertion to verify if the description property was initialized with the default data. 
    assert(transaction1->getDescription() == "");
    // Making assertion to verify if the date property was initialized with the default data. 
    assert(transaction1->getDate() == "");
    // Making assertion to verify if the cattle earring property was initialized with the default data. 
    assert(transaction1->getCattleEarring() == "");

    delete transaction1;
    std::cout << "OK!" << std::endl;

    std::cout << "TEST 2 - Default constructor of the Transaction class with passing parameters" << std::endl; 
    
    Transaction* transaction2 = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    // Making assertion to verify if the number property was initialized with the parameter specified.
    assert(transaction2->getNumber() == 20);
    // Making assertion to verify if the value property was initialized with the parameter specified.
    assert(transaction2->getValue() == 2000.0);
    // Making assertion to verify if the description property was initialized with the parameter specified.
    assert(transaction2->getDescription() == "Venda de Gado");
    // Making assertion to verify if the date property was initialized with the parameter specified.
    assert(transaction2->getDate() == "02/02/1990");
    // Making assertion to verify if the cattle earring property was initialized with the parameter specified.
    assert(transaction2->getCattleEarring() == "039");

    delete transaction2;
    std::cout << "OK!" << std::endl;
}

// Function for TransactionHandle class's copy constructor unit test.
void unit_transaction_copy_constructor(){
    std::cout << "TEST 3 - Copy constructor of the TransactionHandle class" << std::endl;
    
    TransactionHandle* transaction1 = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    Transaction* transaction2 = new TransactionHandle(*transaction1);

    // Making assertion to verify if the number property was copied.
    assert(transaction2->getNumber() == 20);
    // Making assertion to verify if the value property was copied.
    assert(transaction2->getValue() == 2000.0);
    // Making assertion to verify if the description property was copied.
    assert(transaction2->getDescription() == "Venda de Gado");
    // Making assertion to verify if the date property was copied.
    assert(transaction2->getDate() == "02/02/1990");
    // Making assertion to verify if the cattle earring property was copied.
    assert(transaction2->getCattleEarring() == "039");
    assert(numHandleCreated == numBodyCreated+2);

    delete transaction1;
    delete transaction2;

    assert(numHandleDeleted == numBodyDeleted+2);

    std::cout << "OK!" << std::endl;
}

// Function for the Transaction class' destructor unit test.
void unit_transaction_destructor(){
    std::cout << "TEST 4 - Default destructor of the Transaction class" << std::endl;
    
    MEMORYSTATUSEX memInfoBefore;
    memInfoBefore.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfoBefore);
    DWORDLONG virtualMemUsedBefore = memInfoBefore.ullTotalPageFile - memInfoBefore.ullAvailPageFile;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    delete transaction;

    MEMORYSTATUSEX memInfoAfter;
    memInfoAfter.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfoAfter);
    DWORDLONG virtualMemUsedAfter = memInfoAfter.ullTotalPageFile - memInfoAfter.ullAvailPageFile;

    // Making assertion to verify if the memory usage after the creation and deletion
    // is the same as before the creation of Transaction object.
    assert(virtualMemUsedBefore == virtualMemUsedAfter);

    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method getNumber() unit test.
void unit_transaction_getNumber(){
    std::cout << "TEST 5 - Transaction class's getNumber() method" << std::endl;
    
    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the Transaction class number and if it's
    // equal to the parameter previously passed. 
    assert(transaction->getNumber() == 20);

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method setNumber() unit test.
void unit_transaction_setNumber(){
    std::cout << "TEST 6 - Transaction class's setNumber() method" << std::endl;
    
    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    transaction->setNumber(21);

    // Making assertion to verify if the data of the number property has been altered.
    assert(transaction->getNumber() == 21);

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method getValue() unit test.
void unit_transaction_getValue(){
    std::cout << "TEST 7 - Transaction class's getValue() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the Transaction class value and if it's
    // equal to the parameter previously passed.
    assert(transaction->getValue() == 2000.0);

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method setValue() unit test.
void unit_transaction_setValue(){
    std::cout << "TEST 8 - Transaction class's setValue() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    transaction->setValue(2500.0);
    
    // Making assertion to verify if the data of the value property has been altered.
    assert(transaction->getValue() == 2500.0);

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method getDescription() unit test.
void unit_transaction_getDescription(){
    std::cout << "TEST 9 - Transaction class's getDescription() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the Transaction class description and if it's
    // equal to the parameter previously passed.
    assert(transaction->getDescription() == "Venda de Gado");

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method setDescription() unit test.
void unit_transaction_setDescription(){
    std::cout << "TEST 10 - Transaction class's setDescription() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    transaction->setDescription("Compra de Gado");
    
    // Making assertion to verify if the data of the description property has been altered.
    assert(transaction->getDescription() == "Compra de Gado");

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method getDate() unit test.
void unit_transaction_getDate(){
    std::cout << "TEST 11 - Transaction class's getDate() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the Transaction class Date and if it's
    // equal to the parameter previously passed.
    assert(transaction->getDate() == "02/02/1990");

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method setDate() unit test.
void unit_transaction_setDate(){
    std::cout << "TEST 12 - Transaction class's setDate() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    transaction->setDate("03/02/1991");
    
    // Making assertion to verify if the data of the Date property has been altered.
    assert(transaction->getDate() == "03/02/1991");

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method getCattleEarring() unit test.
void unit_transaction_getCattleEarring(){
    std::cout << "TEST 13 - Transaction class's getCattleEarring() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");

    // Making assertion to verify if the method returns the Transaction class CattleEarring and if it's
    // equal to the parameter previously passed.
    assert(transaction->getCattleEarring() == "039");

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for Transaction class' method setCattleEarring() unit test.
void unit_transaction_setCattleEarring(){
    std::cout << "TEST 14 - Transaction class's setCattleEarring() method" << std::endl;

    Transaction* transaction = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    transaction->setCattleEarring("040");
    
    // Making assertion to verify if the data of the CattleEarring property has been altered.
    assert(transaction->getCattleEarring() == "040");

    delete transaction;
    std::cout << "OK!" << std::endl;
}

// Function for TransactionHandle class' assingment operator unit test.
void unit_transaction_assingmentOperator(){
    std::cout << "TEST 15 - TransactionHandle class assignment operator" << std::endl;
    
    TransactionHandle* transaction1 = new TransactionHandle(20, 2000.0, "Venda de Gado", "02/02/1990", "039");
    TransactionHandle* transaction2 = new TransactionHandle();
    *transaction2 = *transaction1;

    // Making assertion to verify if the id property was assigned.
    assert(transaction2->getNumber() == 20);
    // Making assertion to verify if the value property was assigned.
    assert(transaction2->getValue() == 2000.0);
    // Making assertion to verify if the description property was assigned.
    assert(transaction2->getDescription() == "Venda de Gado");
    // Making assertion to verify if the date property was assigned.
    assert(transaction2->getDate() == "02/02/1990");
    // Making assertion to verify if the cattle earring property was assigned.
    assert(transaction2->getCattleEarring() == "039");

    delete transaction1;
    delete transaction2;

    std::cout << "OK!" << std::endl;
}

// Function to run all the Transaction class' unit tests.
void run_unit_tests_transaction(){

    // Calling all the Transaction class' unit test functions.
    unit_transaction_constructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_copy_constructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_destructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_getNumber();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_setNumber();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_getDescription();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_setDescription();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_getValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_setValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_getDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_setDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_getCattleEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_setCattleEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_transaction_assingmentOperator();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

}

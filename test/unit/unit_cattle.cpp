#include "unit_cattle.h" 

using namespace std;

// Function for Cattle class's constructor unit test.
void unit_cattle_constructor(){
    cout << "TEST 1 - Default constructor of the Cattle class without passing parameters" << endl;
    
    Cattle* cattle1 = new CattleHandle();
    // Making assertion to verify if the earring property was initialized with the default data.
    assert(cattle1->getEarring() == "");
    // Making assertion to verify if the breed property was initialized with the default data.
    assert(cattle1->getBreed() == "");
    // Making assertion to verify if the acquisition date property was initialized with the default data.
    assert(cattle1->getAcquisitionDate() == "");
    // Making assertion to verify if the birth date property was initialized with the default data.
    assert(cattle1->getBirthDate() == "");
    // Making assertion to verify if the father property was initialized with the default data.
    assert(cattle1->getFather() == "");
    // Making assertion to verify if the mother property was initialized with the default data.
    assert(cattle1->getMother() == "");
    // Making assertion to verify if the weight property was initialized with the default data. 
    assert(cattle1->getWeight() == 0.0);
    // Making assertion to verify if the value property was initialized with the default data. 
    assert(cattle1->getValue() == 0.0);

    delete cattle1;
    cout << "OK!" << endl;

    cout << "TEST 2 - Default constructor of the Cattle class with passing parameters" << endl; 
    
    Cattle* cattle2 = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    // Making assertion to verify if the earring property was initialized with the parameter specified.
    assert(cattle2->getEarring() == "003");
    // Making assertion to verify if the breed property was initialized with the parameter specified.
    assert(cattle2->getBreed() == "Angus");
    // Making assertion to verify if the acquisition date property was initialized with the parameter specified.
    assert(cattle2->getAcquisitionDate() == "01/04/1990");
    // Making assertion to verify if the birth date property was initialized with the parameter specified.
    assert(cattle2->getBirthDate() == "01/01/1990");
    // Making assertion to verify if the father property was initialized with the parameter specified.
    assert(cattle2->getFather() == "001");
    // Making assertion to verify if the mother property was initialized with the parameter specified.
    assert(cattle2->getMother() == "002");
    // Making assertion to verify if the weight property was initialized with the parameter specified. 
    assert(cattle2->getWeight() == 250.0);
    // Making assertion to verify if the value property was initialized with the parameter specified. 
    assert(cattle2->getValue() == 2400.0);

    delete cattle2;
    cout << "OK!" << endl;
}

// Function for CattleHandle class's copy constructor unit test.
void unit_cattle_copy_constructor(){
    cout << "TEST 3 - Copy constructor of the CattleHandle class" << endl;
    
    CattleHandle* cattle1 = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    Cattle* cattle2 = new CattleHandle(*cattle1);

    // Making assertion to verify if the earring property was copied.
    assert(cattle2->getEarring() == "003");
    // Making assertion to verify if the breed property was copied.
    assert(cattle2->getBreed() == "Angus");
    // Making assertion to verify if the acquisition date property was copied.
    assert(cattle2->getAcquisitionDate() == "01/04/1990");
    // Making assertion to verify if the birth date property was copied.
    assert(cattle2->getBirthDate() == "01/01/1990");
    // Making assertion to verify if the father property was copied.
    assert(cattle2->getFather() == "001");
    // Making assertion to verify if the mother property was copied.
    assert(cattle2->getMother() == "002");
    // Making assertion to verify if the weight property was copied. 
    assert(cattle2->getWeight() == 250.0);
    // Making assertion to verify if the value property was copied. 
    assert(cattle2->getValue() == 2400.0);
    // The copy constructor instantiates a new CattleHandle, but not a new CattleBody
    assert(numHandleCreated == numBodyCreated+1);

    delete cattle1;
    delete cattle2;

    assert(numHandleDeleted == numBodyDeleted+1);

    cout << "OK!" << endl;
}

// Function for the Cattle class' destructor unit test.
void unit_cattle_destructor(){
    cout << "TEST 4 - Default destructor of the Cattle class" << endl;

    MEMORYSTATUSEX memInfoBefore;
    memInfoBefore.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfoBefore);
    DWORDLONG virtualMemUsedBefore = memInfoBefore.ullTotalPageFile - memInfoBefore.ullAvailPageFile;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    delete cattle;

    MEMORYSTATUSEX memInfoAfter;
    memInfoAfter.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfoAfter);
    DWORDLONG virtualMemUsedAfter = memInfoAfter.ullTotalPageFile - memInfoAfter.ullAvailPageFile;

    // Making assertion to verify if the memory usage after the creation and deletion
    // is the same as before the creation of Cattle object.
    assert(virtualMemUsedBefore == virtualMemUsedAfter);

    cout << "OK!" << endl;
}

// Function for Cattle class' method getEarring() unit test.
void unit_cattle_getEarring(){
    cout << "TEST 5 - Cattle class' getEarring() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class earring and if it's
    // equal to the parameter previously passed. 
    assert(cattle->getEarring() == "003");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setEarring() unit test.
void unit_cattle_setEarring(){
    cout << "TEST 6 - Cattle class' setEarring() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setEarring("004");

    // Making assertion to verify if the data of the earring property has been altered.
    assert(cattle->getEarring() == "004");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getBreed() unit test.
void unit_cattle_getBreed(){
    cout << "TEST 7 - Cattle class' getBreed() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class breed and if it's
    // equal to the parameter previously passed. 
    assert(cattle->getBreed() == "Angus");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setBreed() unit test.
void unit_cattle_setBreed(){
    cout << "TEST 8 - Cattle class' setBreed() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setBreed("Brangus");

    // Making assertion to verify if the data of the breed property has been altered.
    assert(cattle->getBreed() == "Brangus");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getAcquisitionDate() unit test.
void unit_cattle_getAcquisitionDate(){
    cout << "TEST 9 - Cattle class's getAcquisitionDate() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class acquisition date and if it's
    // equal to the parameter previously passed. 
    assert(cattle->getAcquisitionDate() == "01/04/1990");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setAcquisitionDate() unit test.
void unit_cattle_setAcquisitionDate(){
    cout << "TEST 10 - Cattle class's setAcquisitionDate() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setAcquisitionDate("02/04/1991");

    // Making assertion to verify if the data of the acquisition date property has been altered.
    assert(cattle->getAcquisitionDate() == "02/04/1991");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getBirthDate() unit test.
void unit_cattle_getBirthDate(){
    cout << "TEST 11 - Cattle class's getBirthDate() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class birth date and if it's
    // equal to the parameter previously passed. 
    assert(cattle->getBirthDate() == "01/01/1990");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setBirthDate() unit test.
void unit_cattle_setBirthDate(){
    cout << "TEST 12 - Cattle class's setBirthDate() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setBirthDate("02/01/1991");

    // Making assertion to verify if the data of the birth date property has been altered.
    assert(cattle->getBirthDate() == "02/01/1991");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getFather() unit test.
void unit_cattle_getFather(){
    cout << "TEST 13 - Cattle class's getFather() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class father and if it's
    // equal to the parameter previously passed. 
    assert(cattle->getFather() == "001");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setFather() unit test.
void unit_cattle_setFather(){
    cout << "TEST 14 - Cattle class's setFather() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setFather("005");

    // Making assertion to verify if the data of the father property has been altered.
    assert(cattle->getFather() == "005");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getMother() unit test.
void unit_cattle_getMother(){
    cout << "TEST 15 - Cattle class's getMother() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class mother and if it's
    // equal to the parameter previously passed. 
    assert(cattle->getMother() == "002");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setMother() unit test.
void unit_cattle_setMother(){
    cout << "TEST 16 - Cattle class's setMother() method" << endl;
    
    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setMother("005");

    // Making assertion to verify if the data of the mother property has been altered.
    assert(cattle->getMother() == "005");

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getWeight() unit test.
void unit_cattle_getWeight(){
    cout << "TEST 17 - Cattle class's getWeight() method" << endl;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class weight and if it's
    // equal to the parameter previously passed.
    assert(cattle->getWeight() == 250.0);

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setWeight() unit test.
void unit_cattle_setWeight(){
    cout << "TEST 18 - Cattle class's setWeight() method" << endl;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setWeight(300.0);
    
    // Making assertion to verify if the data of the weight property has been altered.
    assert(cattle->getWeight() == 300.0);

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method getValue() unit test.
void unit_cattle_getValue(){
    cout << "TEST 19 - Cattle class's getValue() method" << endl;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

    // Making assertion to verify if the method returns the Cattle class value and if it's
    // equal to the parameter previously passed.
    assert(cattle->getValue() == 2400.0);

    delete cattle;
    cout << "OK!" << endl;
}

// Function for Cattle class' method setValue() unit test.
void unit_cattle_setValue(){
    cout << "TEST 20 - Cattle class's setValue() method" << endl;

    Cattle* cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    cattle->setValue(3000.0);
    
    // Making assertion to verify if the data of the value property has been altered.
    assert(cattle->getValue() == 3000.0);

    delete cattle;
    cout << "OK!" << endl;
}

// Function for CattleHandle class' assingment operator unit test.
void unit_cattle_assingmentOperator(){
    cout << "TEST 21 - CattleHandle class assignment operator" << endl;
    
    CattleHandle* cattle1 = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
    CattleHandle* cattle2 = new CattleHandle();
    *cattle2 = *cattle1;

    // Making assertion to verify if the earring property was copied.
    assert(cattle2->getEarring() == "003");
    // Making assertion to verify if the breed property was copied.
    assert(cattle2->getBreed() == "Angus");
    // Making assertion to verify if the acquisition date property was copied.
    assert(cattle2->getAcquisitionDate() == "01/04/1990");
    // Making assertion to verify if the birth date property was copied.
    assert(cattle2->getBirthDate() == "01/01/1990");
    // Making assertion to verify if the father property was copied.
    assert(cattle2->getFather() == "001");
    // Making assertion to verify if the mother property was copied.
    assert(cattle2->getMother() == "002");
    // Making assertion to verify if the weight property was copied. 
    assert(cattle2->getWeight() == 250.0);
    // Making assertion to verify if the value property was copied. 
    assert(cattle2->getValue() == 2400.0);

    delete cattle1;
    delete cattle2;

    cout << "OK!" << endl;
}

// Function to run all the Cattle class' unit tests.
void run_unit_tests_cattle(){

    // Calling all the Cattle class' unit test functions.
    unit_cattle_constructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_copy_constructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_destructor();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setEarring();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getBreed();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setBreed();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getAcquisitionDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setAcquisitionDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getBirthDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setBirthDate();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getFather();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setFather();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getMother();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setMother();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getWeight();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setWeight();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_getValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_setValue();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

    unit_cattle_assingmentOperator();
    assert(numHandleCreated == numHandleDeleted);
    assert(numBodyCreated == numBodyDeleted);

}
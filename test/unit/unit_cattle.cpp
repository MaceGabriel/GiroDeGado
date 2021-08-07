// #include "unit_cattle.h" 

// using namespace std;

// // Function for Cattle class's constructor unit test.
// void unit_Cattle_constructor(){
//     cout << "TEST 1 - Default constructor of the Cattle class without passing parameters" << endl;
    
//     Cattle* Cattle1 = new CattleHandle();
//     // Making assertion to verify if the earring property was initialized with the default data.
//     assert(Cattle1->getEarring() == "");
//     // Making assertion to verify if the breed property was initialized with the default data.
//     assert(Cattle1->getBreed() == "");
//     // Making assertion to verify if the acquistion date property was initialized with the default data.
//     assert(Cattle1->getAcquistionDate() == "");
//     // Making assertion to verify if the birth date property was initialized with the default data.
//     assert(Cattle1->getBirthDate() == "");
//     // Making assertion to verify if the father property was initialized with the default data.
//     assert(Cattle1->getFather() == "");
//     // Making assertion to verify if the mother property was initialized with the default data.
//     assert(Cattle1->getMother() == "");
//     // Making assertion to verify if the weight property was initialized with the default data. 
//     assert(Cattle1->getWeight() == 0.0);
//     // Making assertion to verify if the value property was initialized with the default data. 
//     assert(Cattle1->getValue() == 0.0);

//     delete Cattle1;
//     cout << "OK!" << endl;

//     cout << "TEST 2 - Default constructor of the Cattle class with passing parameters" << endl; 
    
//     Cattle* Cattle2 = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     // Making assertion to verify if the earring property was initialized with the parameter specified.
//     assert(Cattle1->getEarring() == "003");
//     // Making assertion to verify if the breed property was initialized with the parameter specified.
//     assert(Cattle1->getBreed() == "Angus");
//     // Making assertion to verify if the acquistion date property was initialized with the parameter specified.
//     assert(Cattle1->getAcquistionDate() == "01/04/1990");
//     // Making assertion to verify if the birth date property was initialized with the parameter specified.
//     assert(Cattle1->getBirthDate() == "01/01/1990");
//     // Making assertion to verify if the father property was initialized with the parameter specified.
//     assert(Cattle1->getFather() == "001");
//     // Making assertion to verify if the mother property was initialized with the parameter specified.
//     assert(Cattle1->getMother() == "002");
//     // Making assertion to verify if the weight property was initialized with the parameter specified. 
//     assert(Cattle1->getWeight() == 250.0);
//     // Making assertion to verify if the value property was initialized with the parameter specified. 
//     assert(Cattle1->getValue() == 2400.0);

//     delete Cattle2;
//     cout << "OK!" << endl;
// }

// // Function for CattleHandle class's copy constructor unit test.
// void unit_Cattle_copy_constructor(){
//     cout << "TEST 3 - Copy constructor of the CattleHandle class" << endl;
    
//     CattleHandle* Cattle1 = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle* Cattle2 = new CattleHandle(*Cattle1);

//     // Making assertion to verify if the earring property was copied.
//     assert(Cattle2->getEarring() == "003");
//     // Making assertion to verify if the breed property was copied.
//     assert(Cattle2->getBreed() == "Angus");
//     // Making assertion to verify if the acquistion date property was copied.
//     assert(Cattle2->getAcquistionDate() == "01/04/1990");
//     // Making assertion to verify if the birth date property was copied.
//     assert(Cattle2->getBirthDate() == "01/01/1990");
//     // Making assertion to verify if the father property was copied.
//     assert(Cattle2->getFather() == "001");
//     // Making assertion to verify if the mother property was copied.
//     assert(Cattle2->getMother() == "002");
//     // Making assertion to verify if the weight property was copied. 
//     assert(Cattle2->getWeight() == 250.0);
//     // Making assertion to verify if the value property was copied. 
//     assert(Cattle2->getValue() == 2400.0);
//     // The copy constructor instantiates a new CattleHandle, but not a new CattleBody
//     assert(numHandleCreated == numBodyCreated+1);

//     delete Cattle1;
//     delete Cattle2;

//     assert(numHandleDeleted == numBodyDeleted+1);

//     cout << "OK!" << endl;
// }

// // Function for the Cattle class' destructor unit test.
// void unit_Cattle_destructor(){
//     cout << "TEST 4 - Default destructor of the Cattle class" << endl;

//     // code for the destructor

//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getEarring() unit test.
// void unit_cattle_getEarring(){
//     cout << "TEST 5 - Cattle class' getEarring() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class earring and if it's
//     // equal to the parameter previously passed. 
//     assert(Cattle->getEarring() == "003");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setEarring() unit test.
// void unit_cattle_setEarring(){
//     cout << "TEST 6 - Cattle class' setEarring() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setEarring("004");

//     // Making assertion to verify if the data of the earring property has been altered.
//     assert(Cattle->getEarring() == "004");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getBreed() unit test.
// void unit_Cattle_getBreed(){
//     cout << "TEST 7 - Cattle class' getBreed() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class breed and if it's
//     // equal to the parameter previously passed. 
//     assert(Cattle->getBreed() == "Angus");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setBreed() unit test.
// void unit_Cattle_setBreed(){
//     cout << "TEST 8 - Cattle class' setBreed() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setBreed("Brangus");

//     // Making assertion to verify if the data of the breed property has been altered.
//     assert(Cattle->getBreed() == "Brangus");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getAcquistionDate() unit test.
// void unit_Cattle_getAcquistionDate(){
//     cout << "TEST 9 - Cattle class's getAcquistionDate() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class acquistion date and if it's
//     // equal to the parameter previously passed. 
//     assert(Cattle->getAcquistionDate() == "01/04/1990");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setAcquistionDate() unit test.
// void unit_Cattle_setAcquistionDate(){
//     cout << "TEST 10 - Cattle class's setAcquistionDate() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setAcquistionDate("02/04/1991");

//     // Making assertion to verify if the data of the acquistion date property has been altered.
//     assert(Cattle->getAcquistionDate() == "02/04/1991");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getBirthDate() unit test.
// void unit_Cattle_getBirthDate(){
//     cout << "TEST 11 - Cattle class's getBirthDate() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class birth date and if it's
//     // equal to the parameter previously passed. 
//     assert(Cattle->getBirthDate() == "01/01/1990");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setBirthDate() unit test.
// void unit_Cattle_setBirthDate(){
//     cout << "TEST 12 - Cattle class's setBirthDate() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setBirthDate("02/01/1991");

//     // Making assertion to verify if the data of the birth date property has been altered.
//     assert(Cattle->getBirthDate() == "02/01/1991");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getFather() unit test.
// void unit_Cattle_getFather(){
//     cout << "TEST 13 - Cattle class's getFather() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class father and if it's
//     // equal to the parameter previously passed. 
//     assert(Cattle->getFather() == "001");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setFather() unit test.
// void unit_Cattle_setFather(){
//     cout << "TEST 14 - Cattle class's setFather() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setFather("005");

//     // Making assertion to verify if the data of the father property has been altered.
//     assert(Cattle->getFather() == "005");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getMother() unit test.
// void unit_Cattle_getMother(){
//     cout << "TEST 15 - Cattle class's getMother() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class mother and if it's
//     // equal to the parameter previously passed. 
//     assert(Cattle->getMother() == "002");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setMother() unit test.
// void unit_Cattle_setMother(){
//     cout << "TEST 16 - Cattle class's setMother() method" << endl;
    
//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setMother("005");

//     // Making assertion to verify if the data of the mother property has been altered.
//     assert(Cattle->getMother() == "005");

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getWeight() unit test.
// void unit_Cattle_getWeight(){
//     cout << "TEST 17 - Cattle class's getWeight() method" << endl;

//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class weight and if it's
//     // equal to the parameter previously passed.
//     assert(Cattle->getWeight() == 250.0);

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setWeight() unit test.
// void unit_Cattle_setWeight(){
//     cout << "TEST 18 - Cattle class's setWeight() method" << endl;

//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setWeight(300.0);
    
//     // Making assertion to verify if the data of the weight property has been altered.
//     assert(Cattle->getWeight() == 300.0);

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method getValue() unit test.
// void unit_Cattle_getValue(){
//     cout << "TEST 19 - Cattle class's getValue() method" << endl;

//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);

//     // Making assertion to verify if the method returns the Cattle class value and if it's
//     // equal to the parameter previously passed.
//     assert(Cattle->getValue() == 2400.0);

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for Cattle class' method setValue() unit test.
// void unit_Cattle_setValue(){
//     cout << "TEST 20 - Cattle class's setValue() method" << endl;

//     Cattle* Cattle = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     Cattle->setValue(3000.0);
    
//     // Making assertion to verify if the data of the value property has been altered.
//     assert(Cattle->getValue() == 3000.0);

//     delete Cattle;
//     cout << "OK!" << endl;
// }

// // Function for CattleHandle class' assingment operator unit test.
// void unit_Cattle_assingmentOperator(){
//     cout << "TEST 21 - CattleHandle class assignment operator" << endl;
    
//     CattleHandle* Cattle1 = new CattleHandle("003", "Angus", "01/04/1990", "01/01/1990", "001", "002", 250.0, 2400.0);
//     CattleHandle* Cattle2 = new CattleHandle();
//     *Cattle2 = *Cattle1;

//     // Making assertion to verify if the earring property was copied.
//     assert(Cattle2->getEarring() == "003");
//     // Making assertion to verify if the breed property was copied.
//     assert(Cattle2->getBreed() == "Angus");
//     // Making assertion to verify if the acquistion date property was copied.
//     assert(Cattle2->getAcquistionDate() == "01/04/1990");
//     // Making assertion to verify if the birth date property was copied.
//     assert(Cattle2->getBirthDate() == "01/01/1990");
//     // Making assertion to verify if the father property was copied.
//     assert(Cattle2->getFather() == "001");
//     // Making assertion to verify if the mother property was copied.
//     assert(Cattle2->getMother() == "002");
//     // Making assertion to verify if the weight property was copied. 
//     assert(Cattle2->getWeight() == 250.0);
//     // Making assertion to verify if the value property was copied. 
//     assert(Cattle2->getValue() == 2400.0);

//     delete Cattle1;
//     delete Cattle2;

//     cout << "OK!" << endl;
// }

// // Function to run all the Cattle class' unit tests.
// void run_unit_tests_Cattle(){

//     // Calling all the Cattle class' unit test functions.
//     unit_Cattle_constructor();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_Cattle_copy_constructor();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_Cattle_destructor();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getEarring();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setEarring();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getBreed();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setBreed();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getAcquistionDate();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setAcquistionDate();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getBirthDate();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setBirthDate();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getFather();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setFather();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getMother();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setMother();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getWeight();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setWeight();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_getValue();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_cattle_setValue();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

//     unit_Cattle_assingmentOperator();
//     assert(numHandleCreated == numHandleDeleted);
//     assert(numBodyCreated == numBodyDeleted);

// }
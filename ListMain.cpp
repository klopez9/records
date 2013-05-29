
#include "LinkedList.h"
#include "Node.h"
#include "StudentRecord.h"
#include "EmployeeRecord.h"
#include "AlumniRecord.h"

#define ERROR "\033[31mERROR: \033[0m"

using namespace std;

void driverStudentRecord() {

    LinkedList<StudentRecord> *myList = new LinkedList<StudentRecord>();

    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    myList->removeFirstNode();

    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    myList->displayList();

    // Add more driver code for the following:
    // Create another LinkedList of studentRecords
    int *courses1 = new int[4];
    courses1[0] = 122;
    courses1[1] = 220;
    courses1[2] = 240;
    courses1[3] = 314;

    int *courses2 = new int[2];
    courses2[0] = 101;
    courses2[1] = 110;

    // add 2 nodes
    StudentRecord *sr1 = new StudentRecord(1001, 3.01, courses1, 4);
    myList->insertLastNode(sr1);
    if(myList->getFirst()->getData() != sr1)
      cerr << ERROR << "first item is incorrect" << '\n';
    if(myList->getLength() != 1)
      cerr << ERROR << "myList->getLength() != 1" << '\n'
;
    StudentRecord *sr2 = new StudentRecord(1002, 3.45, courses1, 4);
    myList->insertLastNode(sr2);
    if(myList->getFirst()->getNext()->getData() != sr2)
      cerr << ERROR << "second item is incorrect" << '\n';
    if(myList->getFirst()->getNext()->getPrev()->getData() != sr1)
      cerr << ERROR << "'prev' data member of node 2 is not sr1" << '\n';
    if(myList->getLength() != 2)
      cerr << ERROR << "myList->getLength() != 2" << '\n';

    // display list
    myList->displayList();

    // Delete 1 node
    myList->removeFirstNode();
    if(myList->getFirst()->getData() != sr2)
      cerr << ERROR << "remove 'sr1' left incorrect list" << '\n';
    if(myList->getLength() != 1)
      cerr << ERROR << "myList->getLength() != 1" << '\n';

    // add 2 more nodes
    StudentRecord *sr3 = new StudentRecord(1003, 2.9, courses1, 4);
    myList->insertLastNode(sr3);
    if(myList->getFirst()->getNext()->getData() != sr3)
      cerr << ERROR << "second item is incorrect" << '\n';
    if(myList->getFirst()->getNext()->getPrev()->getData() != sr2)
      cerr << ERROR << "'prev' data member of node 2 is not sr2" << '\n';
    if(myList->getLength() != 2)
      cerr << ERROR << "myList->getLength() != 2" << '\n';

    StudentRecord *sr4 = new StudentRecord(1004, 3.19, courses2, 2);
    myList->insertLastNode(sr4);
    if(myList->getFirst()->getNext()->getNext()->getData() != sr4)
      cerr << ERROR << "third item is incorrect" << '\n';
    if(myList->getFirst()->getNext()->getNext()->getPrev()->getData() != sr3)
      cerr << ERROR << "'prev' data member of node 3 is not sr3" << '\n';
    if(myList->getLength() != 3)
      cerr << ERROR << "myList->getLength() != 3" << '\n';

    // display list
    myList->displayList();

    cout << "Searching for record with ID 1003" << '\n';
    myList->findByValue(1003);
    cout << "Searching for record with ID 1005" << '\n';
    myList->findByValue(1005);

    // Delete 2 nodes
    myList->removeFirstNode();
    if(myList->getFirst()->getData() != sr3)
      cerr << ERROR << "remove 'sr2' left incorrect list" << '\n';
    if(myList->getLength() != 2)
      cerr << ERROR << "myList->getLength() != 2" << '\n';

    myList->removeFirstNode();
    if(myList->getFirst()->getData() != sr4)
      cerr << ERROR << "remove 'sr3' left incorrect list" << '\n';
    if(myList->getLength() != 1)
      cerr << ERROR << "myList->getLength() != 1" << '\n';

    // display list
    myList->displayList();

    // Delete 1 node
    myList->removeFirstNode();
    if(myList->getFirst() != NULL)
      cerr << ERROR << "remove 'sr4' left incorrect list" << '\n';
    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    myList->removeFirstNode();
    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    delete myList;
    delete[] courses1;
    delete[] courses2;

    // FIXME: confirm by using Valgrind that there are no memory leaks in your code
}

void driverEmployeeRecord() {

    LinkedList<EmployeeRecord>  *myList = new LinkedList<EmployeeRecord>();

    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    myList->removeFirstNode();

    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    myList->displayList();

    // add 2 nodes
    EmployeeRecord *er1 = new EmployeeRecord(10123, 3, "Engineering");
    myList->insertLastNode(er1);
    if(myList->getFirst()->getData() != er1)
      cerr << ERROR << "first item is incorrect" << '\n';
    if(myList->getLength() != 1)
      cerr << ERROR << "myList->getLength() != 1" << '\n';

    EmployeeRecord *er2 = new EmployeeRecord(11234, 5, "R&D");
    myList->insertLastNode(er2);
    if(myList->getFirst()->getNext()->getData() != er2)
      cerr << ERROR << "second item is incorrect" << '\n';
    if(myList->getLength() != 2)
      cerr << ERROR << "myList->getLength() != 2" << '\n';

    // display list
    myList->displayList();

    // Delete 1 node
    myList->removeFirstNode();
    if(myList->getFirst()->getData() != er2)
      cerr << ERROR << "remove 'er1' left incorrect list" << '\n';
    if(myList->getLength() != 1)
      cerr << ERROR << "myList->getLength() != 1" << '\n';

    // add 2 more nodes
    EmployeeRecord *er3 = new EmployeeRecord(12345, 1, "Accounting");
    myList->insertLastNode(er3);
    if(myList->getFirst()->getNext()->getData() != er3)
      cerr << ERROR << "second item is incorrect" << '\n';
    if(myList->getLength() != 2)
      cerr << ERROR << "myList->getLength() != 2" << '\n';

    EmployeeRecord *er4 = new EmployeeRecord(13456, 8, "Engineering");
    myList->insertLastNode(er4);
    if(myList->getFirst()->getNext()->getNext()->getData() != er4)
      cerr << ERROR << "third item is incorrect" << '\n';
    if(myList->getLength() != 3)
      cerr << ERROR << "myList->getLength() != 3" << '\n';

    // display list
    myList->displayList();

    cout << "Searching for record with ID 11234" << '\n';
    myList->findByValue(11234);
    cout << "Searching for record with ID 10123" << '\n';
    myList->findByValue(10123);

    // Delete 2 nodes
    myList->removeFirstNode();
    if(myList->getFirst()->getData() != er3)
      cerr << ERROR << "remove 'er2' left incorrect list" << '\n';
    if(myList->getLength() != 2)
      cerr << ERROR << "myList->getLength() != 2" << '\n';

    myList->removeFirstNode();
    if(myList->getFirst()->getData() != er4)
      cerr << ERROR << "remove 'er3' left incorrect list" << '\n';
    if(myList->getLength() != 1)
      cerr << ERROR << "myList->getLength() != 1" << '\n';

    // display list
    myList->displayList();

    // Delete 1 node
    myList->removeFirstNode();
    if(myList->getFirst() != NULL)
      cerr << ERROR << "remove 'er4' left incorrect list" << '\n';
    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    myList->removeFirstNode();
    if(myList->getLength() != 0)
      cerr << ERROR << "myList->getLength() != 0" << '\n';

    delete myList;
}

void driverAlumniRecord() {

    LinkedList<AlumniRecord> *myList = new LinkedList<AlumniRecord>();

    myList->displayList();

    // Add more driver code for the following:
    // Create another LinkedList of studentRecords
    int *degreeIDs = new int[2];
    degreeIDs[0] = 010;
    degreeIDs[1] = 012;

    // add 2 nodes
    AlumniRecord *ar1 = new AlumniRecord(1011, 2.57, degreeIDs, 2);
    myList->insertLastNode(ar1);
    AlumniRecord *ar2 = new AlumniRecord(1021, 3.25, degreeIDs, 2);
    myList->insertLastNode(ar2);
    
    // copy constructor
    AlumniRecord *ar3 = new AlumniRecord(*ar2);
    myList->insertLastNode(ar3);

    myList->displayList();

    // Delete 1 node
    myList->removeFirstNode();

    // add 2 more nodes
    AlumniRecord *ar4 = new AlumniRecord(1041, 3.9, degreeIDs, 2);
    myList->insertLastNode(ar4);
    AlumniRecord *ar5 = new AlumniRecord(1051, 3.61, degreeIDs, 2);
    myList->insertLastNode(ar5);
    
    // overloaded assignment operator
    AlumniRecord *ar6 = new AlumniRecord(*ar5);
    myList->insertLastNode(ar6);

    myList->displayList();
    
    // Delete 3 nodes
    myList->removeFirstNode();
    myList->removeFirstNode();
    myList->removeFirstNode();

    // display list
    myList->displayList();

    // Delete 2 nodes
    myList->removeFirstNode();
    myList->removeFirstNode();

    delete myList;
    delete[] degreeIDs;

}

int main () {

    driverStudentRecord();
    cout << "----------------" << '\n' << '\n';
    driverEmployeeRecord();
    cout << "----------------" << '\n' << '\n';
    driverAlumniRecord();

}

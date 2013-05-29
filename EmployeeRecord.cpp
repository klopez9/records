
#include "EmployeeRecord.h"
#include <iostream>

using namespace std;

EmployeeRecord::EmployeeRecord() {
  employeeID = 0;
  expYears= 0;
  unitName = "";
}

EmployeeRecord::EmployeeRecord(int idIn, int expYearsIn, string unitNameIn) {
  employeeID = idIn;
  expYears = expYearsIn;
  unitName = unitNameIn;
}

int EmployeeRecord::getID() {
  return employeeID;
}

int EmployeeRecord::getExpYears() {
  return expYears;
}

string EmployeeRecord::getUnitName() {
  return unitName;
}

/*
I'm using an inline function here because every data member of type int
is printed the same way. This method of procedural abstraction optimizes the
code and makes it easier to read.

inline void EmployeeRecord::intPrint(std::string name, int i) {
  cout << "\t" << name << ": " << i << '\n';
}
*/
void EmployeeRecord::displayRecord() {
  cout << "--------EMPLOYEE-RECORD--------" << '\n';
  if (this != NULL) {
    intPrint("Employee ID", employeeID);
    intPrint("Years of Experience", expYears);
    cout << "\tUnit Name: " << unitName << '\n';
  }
  cout << "--------END-------------------" << '\n' << '\n';
}

/*
void EmployeeRecord::displayRecord() {
  cout << "--------EMPLOYEE-RECORD--------" << '\n';
  if (this != NULL) {
    cout << "\tEmployee ID: " << employeeID << '\n';
    cout << "\tYears of Experience: " << expYears  << '\n';
    cout << "\tUnit Name: " << unitName << '\n';
  }
  cout << "--------END-------------------" << '\n' << '\n';
}
*/

// no need for a destructor because
// there are no allocated (pointer) data members

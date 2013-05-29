

#include "AlumniRecord.h"
#include <iostream>

using namespace std;

AlumniRecord::AlumniRecord() {
    studentID = 0;
    studentGPA = 0;
    numOfDegrees = 0;
    degreeList = NULL;
}

AlumniRecord::AlumniRecord(int idIn, double gpaIn, int *degreeListIn, int numOfDegreesIn) {
    studentID = idIn;
    studentGPA = gpaIn;
    numOfDegrees = numOfDegreesIn;
    if (numOfDegrees <= 0) {
      degreeList = NULL;
    } else {
      degreeList = new int[numOfDegrees];
      for (int i = 0; i < numOfDegrees; i++) {
	degreeList[i] = degreeListIn[i];
      }
    }
}

int AlumniRecord::getID() {
  return studentID;
}

double AlumniRecord::getGPA() {
  return studentGPA;
}

int AlumniRecord::getNumOfDegrees() {
  return numOfDegrees;
}

int* AlumniRecord::getDegreeList() {
  return degreeList;
}

void AlumniRecord::displayRecord() {
  cout << "--------ALUMNI-RECORD--------" << '\n';
  if (this != NULL) {
    cout << "\tStudent ID: " << studentID << '\n';
    cout << "\tStudent GPA: " << studentGPA << '\n';
    cout << "\tDegrees: ";
    for (int i = 0; i < numOfDegrees; i++) {
      cout << degreeList[i] << " ";
    }
    cout << '\n';
  }
  cout << "--------END-------------------" << '\n' << '\n';
}

const AlumniRecord& AlumniRecord::operator=(const AlumniRecord& ar) {
  if (this != &ar) {
    if (numOfDegrees > 0 || degreeList != NULL)
      delete [] degreeList;
    studentID = ar.studentID;
    studentGPA = ar.studentGPA;
    numOfDegrees = ar.numOfDegrees;
    if (numOfDegrees > 0) {
      degreeList = new int [ar.numOfDegrees];
      for (int i = 0; i < ar.numOfDegrees; i++) {
	degreeList[i] = ar.degreeList[i];
      }
    }
  }
  return *this;
}

AlumniRecord::AlumniRecord(const AlumniRecord& ar) {
    if (ar.degreeList == NULL) {
      degreeList = NULL;
      return;
    }
    studentID = ar.studentID;
    studentGPA = ar.studentGPA;
    numOfDegrees = ar.numOfDegrees;
    if (numOfDegrees > 0) {
      degreeList = new int [ar.numOfDegrees];
      for (int i = 0; i < numOfDegrees; i++) {
	degreeList[i] = ar.degreeList[i];
      }
    }
}

AlumniRecord::~AlumniRecord() {
  cout << "Calling destructor" << '\n';
  if (degreeList != NULL) {
    delete[] degreeList;
  }
}

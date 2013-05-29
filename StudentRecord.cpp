

#include "StudentRecord.h"
#include <iostream>

using namespace std;

StudentRecord::StudentRecord() {
    studentID = 0;
    studentGPA = 0;
    numOfCourses = 0;
    courseList = 0;
}


StudentRecord::StudentRecord(int idIn, double gpaIn, int *courseListIn, int numOfCoursesIn) {
    studentID = idIn;
    studentGPA = gpaIn;
    numOfCourses = numOfCoursesIn;
    if (numOfCourses <= 0) {
      courseList = new int[0];
    } else {
      courseList = new int[numOfCourses];
      for (int i = 0; i < numOfCourses; i++) {
	courseList[i] = courseListIn[i];
      }
    }
}

int StudentRecord::getID() {
  return studentID;
}

double StudentRecord::getGPA() {
  return studentGPA;
}

int StudentRecord::getNumOfCourses() {
  return numOfCourses;
}

int* StudentRecord::getCourseList() {
  return courseList;
}

void StudentRecord::displayRecord() {
  cout << "--------STUDENT-RECORD--------" << '\n';
  if (this != NULL) {
    cout << "\tStudent ID: " << studentID << '\n';
    cout << "\tStudent GPA: " << studentGPA  << '\n';
    cout << "\tCourses: ";
    for (int i = 0; i < numOfCourses; i++) {
      cout << courseList[i] << " ";
    }
    cout << '\n';
  }
  cout << "--------END-------------------" << '\n' << '\n';
}

StudentRecord::~StudentRecord() {
  delete[] courseList;
}

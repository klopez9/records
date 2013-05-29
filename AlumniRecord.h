
#ifndef ALUMNI_RECORD_H__
#define ALUMNI_RECORD_H__

#include <string>

class AlumniRecord {
 private:
    int studentID;
    double studentGPA;
    int *degreeList;
    int numOfDegrees;
    
 public:
    AlumniRecord();
    ~AlumniRecord();
    AlumniRecord(int idIn, double gpaIn, int *degreeListIn, int numOfDegreesIn);
    int getID();
    double getGPA();
    int *getDegreeList();
    int getNumOfDegrees();
    void displayRecord();
    const AlumniRecord& operator=(const AlumniRecord& ar);
    AlumniRecord(const AlumniRecord& ar);
};

#endif // STUDENT_RECORD_H__


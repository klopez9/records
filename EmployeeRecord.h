
#ifndef EMPLOYEE_RECORD_H__
#define EMPLOYEE_RECORD_H__

#include <string>
#include <iostream>

class EmployeeRecord {
 private:
    int employeeID;
    int expYears;
    std::string unitName;
    
 public:
    EmployeeRecord();
    EmployeeRecord(int idIn, int expYearsIn, std::string unitNameIn);
    int getID();
    int getExpYears();
    std::string getUnitName();
    inline void intPrint(std::string name, int i){
      std::cout << "\t" << name << ": " << i << '\n';
    };
    void displayRecord();

};

#endif // EMPLOYEE_RECORD_H__

#pragma once
#include <string>
class employee
{
public:
    employee(); 
    employee(std::string name, std::string ssn);
    ~employee(); 
    std::string employee_name;
    std::string employee_ssn;
    //void enterEmployeeName(std::string* name, int size);
    //void enterEmployeeSSN(employee* employees, int size);
    void displayEmployeeInformation(std::string* name, std::string* ssn, int size);
    void displayEmployeeInformation();
    friend void findSSN(employee employee1);
    friend void swap(employee* employee1, employee* employee2);
private:
    //std::string* employee_name;
    //std::string* employee_ssn;
};

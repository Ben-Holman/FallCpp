#include "employee.h"
#include <iostream>
#include <string>

employee::employee() {
    
}
employee::employee(std::string name, std::string ssn) {
    // allocating memory for name
    //employee_name = new employee std::string; 
    employee_name = name; 
    // allocating memory for ssn
    //employee_ssn = new std::string; 
    employee_ssn = ssn; 

}

employee::~employee(void) {
    //delete employee_name; 
    //delete employee_ssn; 
}
/*
void employee::enterEmployeeName(std::string* name, int size) {
    employee_name = name; 
    std::cout << "Enter The Employee Name" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> employee_name[i];

    }


}
*/
/*
void employee::enterEmployeeSSN(employee* employees, int size) {
    employee* arr = new employee[employees];
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter employee name " << i + 1 << ": " << std::endl;
        std::cin >> arr[i].employee_name;
        std::cout << "Enter employee SSN " << i + 1 << ": " << std::endl;
        std::cin >> arr[i].employee_ssn;
    }
}
*/
void employee::displayEmployeeInformation(std::string* name, std::string* ssn, int size) {
    std::cout << "Employee Name: \n";
    for (int i = size; i > 0; i--) {
        std::cout << employee_name[i - 1] << std::endl;
    }
    std::cout << "\n";
    std::cout << "Employee SSN: \n";
    for (int i = size; i > 0; i--) {
        std::cout << employee_ssn[i - 1] << std::endl;
    }
}

void employee::displayEmployeeInformation() {
    std::cout << employee_name << " " << employee_ssn << std::endl; 
}

void findSSN(employee employee1) {
    std::string answer; 
    std::cout << "Enter SSN: \n";  
    std::getline(std::cin, answer);
    if (answer == employee1.employee_ssn) {
        std::cout << employee1.employee_name << std::endl;
    }
}

void swap(employee* employee1, employee* employee2) {
    std::string temp; 
    temp = employee1->employee_ssn; 
    employee1->employee_ssn = employee2->employee_ssn; 
    employee2->employee_ssn = temp; 
    return;
}


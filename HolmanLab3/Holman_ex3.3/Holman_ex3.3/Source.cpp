#include <iostream>
#include <string>
#include "employee.h"
using namespace std;
//Class employee
class Employee
{
public:
	string employee_name;
	string employee_ssn;
private:
};
int main() {
	/*
	int size = 0;
	std::cout << "What Size of array do you need? \n";
	std::cin >> size;
	std::string* name = new std::string[size];
	std::string* ssn = new std::string[size];
	employee employee1;
	employee1.enterEmployeeName(name, size);
	std::cout << "\n";
	employee1.enterEmployeeSSN(ssn, size);
	std::cout << "\n";
	employee1.displayEmployeeInformation(name, ssn, size);
	*/
	
	employee employee2("Marcy", "678-09-1234"), *em2; // initializes employee 2 with the Constructor and a pointer 
	employee employee3("Michael", "123-99-4567"), *em3;  // initializes employee 3 with the Constructor and a pointer
	employee employee4("Ben", "1001-56-7823"), *em4;
	em2 = &employee2; // sets the pointer to the memory address of employee2
	em3 = &employee3; // sets the pointer to the memory address of employee2
	em4 = &employee4; // sets the pointer to the memory address of employee4
	employee2.displayEmployeeInformation(); 
	employee3.displayEmployeeInformation();
	employee4.displayEmployeeInformation();
	//employee2.findSSN(employee2); 
	swap(em2, em3); // calls the swap function 
	std::cout << "\nSwapping the SSN for Employee 2 and 3\n"; 
	employee2.displayEmployeeInformation(); 
	std::cout << "\n"; 
	employee3.displayEmployeeInformation();
	std::cout << "\nSwapping the SSN for Employee 3 and 4\n";
	swap(em3, em4); // calls the swap function 
	employee3.displayEmployeeInformation(); 
	std::cout << "\n"; 
	employee4.displayEmployeeInformation();
	//delete em2; 
	//delete em3; 
	//delete[] name;
	//delete[] ssn;
	

	/*
		using namespace std;
		int employees;
		cout << "How many employees? " << endl;
		cin >> employees;
		employee* arr = new employee[employees];
		for (int i = 0; i < employees; ++i) {
			cout << "Enter employee name " << i + 1 << ": " << endl;
			cin >> arr[i].employee_name;
			cout << "Enter employee SSN " << i + 1 << ": " << endl;
			cin >> arr[i].employee_ssn;
		}

		cout << endl << endl;
		for (int i = 0; i < employees; ++i) {
			cout << "Employee " << i + 1 << ": " << "name: " << arr[i].employee_name << endl << "ssn: " << arr[i].employee_ssn << endl << endl;
		}
		*/
		findSSN(employee2); 

		return 0;
	}
		
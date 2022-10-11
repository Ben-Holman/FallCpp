#include <iostream>
#include "employee.h"
#include <string>
int main() {

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

	return 0; 
}
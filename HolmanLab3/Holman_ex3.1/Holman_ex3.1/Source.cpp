#include <iostream>

int main() {

	int* num1, *num2; 
	num1 = new int; 
	num2 = new int; 
	*num1 = 30; 
	*num2 = 50; 

	*num1 = *num1 + *num2; 

	std::cout << *num1 << " " << *num2 << std::endl; 

	*num1 = *num2;
	std::cout << *num1 << " " << *num2 << std::endl;

	delete num1, num2; 

	return 0; 
}
/*
Lab 1.4
Ben Holman
First Edit: 9/2/2022
Last Edit: 9/6/2022
*/


//This program produces the quotient of two integer variables
//Author: Angela Guercio
// Date: March 6, 2010
#include <iostream>
//using namespace std;
int quote(int x, int y); //this function produces the integer division of 2
//integers
int main()
{
	int first_number, second_number;
	int quotient;
	std::cout << "Enter the first integer number: ";
	std::cin >> first_number;
	std::cout << std::endl << "Enter the second integer number: ";
	std::cin >> second_number;
	if (first_number || second_number == 0) {
		std::cout << "It is not possible to divide by zero. Please Try Again.";
	}
	quotient = quote(first_number, second_number);
	std::cout << "The quotient of " << first_number << " divided by "
		<< second_number << " is " << quotient << std::endl;
	std::cout << "Thank you!";
	return 0;
}
int quote(int x, int y)
{
	return x / y;
}
#include <iostream>
#include "dateClass.h"

int main() {
	// variables used in the newDate2 class contructor
	int day = 6;
	int month = 11;
	int year = 1963;
	{ 
		using namespace dateSpace;
		dateClass newDate(1, 1, 1999); // calling the 3-parameter default constructor
		newDate.plusOne(newDate);
		displayDate(newDate);
	}
	std::cout << " \n";
	{
		using namespace dateSpace;
		dateClass newDate2(day, month, year); // calling the 3-parameter constructor with variables passed
		newDate2.plusOne(newDate2);
		displayDate(newDate2);
	}
	std::cout << "\n"; 
	return 0; 
}
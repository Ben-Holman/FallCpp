#include "display.h"
#include "dateClass.h" 
#include <iostream>
using namespace dateSpace; 
void dateSpace::displayDate(dateClass date) { // Changes the Month based on the Month Variable
	switch (date.month) {
	case 1:
		std::cout << "January " << date.day << " " << date.year;
		break;
	case 2:
		std::cout << "February " << date.day << " " << date.year;
		break;
	case 3:
		std::cout << "March " << date.day << " " << date.year;
		break;
	case 4:
		std::cout << "April " << date.day << " " << date.year;
		break;
	case 5:
		std::cout << "May " << date.day << " " << date.year;
		break;
	case 6:
		std::cout << "June " << date.day << " " << date.year;
		break;
	case 7:
		std::cout << "July " << date.day << " " << date.year;
		break;
	case 8:
		std::cout << "August " << date.day << " " << date.year;
		break;
	case 9:
		std::cout << "September " << date.day << " " << date.year;
		break;
	case 10:
		std::cout << "October " << date.day << " " << date.year;
		break;
	case 11:
		std::cout << "November " << date.day << " " << date.year;
		break;
	case 12:
		std::cout << "December " << date.day << " " << date.year;
		break;
	default:
		std::cout << "No Date To Display." << std::endl;
	}
}
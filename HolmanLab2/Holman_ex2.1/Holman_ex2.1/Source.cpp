/*
* Ben Holman 
* First Edit: 9/9/2022
* Last Edit: 9/ /2022
*/

//NAMESPACES 
#include "Namespaces.h"
#include <iostream>

/*
//  0.2 kg (kilogram) of paint is needed to paint a one square meter area (0.2 kg/m2).
namespace kilogram {
	double kilogramPaint(double size);
}

// 20mg(milligram) of paint is needed to paint a one square centimetres area (20 mg/cm2).
namespace milligram {
	double milligramPaint(double size);
}

// 200 T (Ton) of paint is needed to paint a one square km area (200 T/km2)
namespace ton {
	double tonPaint(double size);
}
*/


int main() {
	int size = 0; 
		std::cout << "Choose the Parameters for the amount of paint\n"; 
		double result; 
		std::cout << "1. Kilogram of Paint\n";
		std::cout << "2. milligram of Paint\n";
		std::cout << "3. Ton of Paint\n";
		std::cout << "4. Choose No Option.\n";
		int answer;
		std::cin >> answer; 
		switch (answer) {
		case 1:
			std::cout << "You Chose Kilogram of Paint.\n";
			std::cout << "Size of Area That Needs Paint? (in Meters)\n";
			std::cin >> size;
			{
				using namespace kilogram;
				//result = kilogramPaint(size);
				std::cout << "You need " << kilogramPaint(size) << " kilograms of paint needed" << std::endl;
			}
			break;
		case 2:
			std::cout << "You Chose Milligram of Paint\n";
			std::cout << "Size of Area That Needs Paint? (in Centimeters)\n";
			std::cin >> size;
			{
				using namespace milligram;
				//result = milligramPaint(size); 
				std::cout << "You need " << milligramPaint(size) << " milligrams of paint" << std::endl;
			}
			break;
		case 3:
			std::cout << "You Chose Ton of Paint.\n";
			std::cout << "Size of Area To Paint? (in Kilometers)\n";
			std::cin >> size;
			{
				using namespace ton;
				//result = tonPaint(size);
				std::cout << "You need " << tonPaint(size) << " tons of paint." << std::endl;
			}
			break;

		default:
			std::cout << "No Option Chosen.\n";
			break;
		};

		std::cout << "End Of Program."; 
	return 0; 
}
/*
namespace kilogram { //  0.2 kg (kilogram) of paint is needed to paint a one square meter area (0.2 kg/m2).
	double kilogramPaint(double size) {
		return;
	}
}

namespace milligram { // 20mg(milligram) of paint is needed to paint a one square centimetres area (20 mg/cm2).
	double milligramPaint(double size) {
		std::cout << ""; 
		return;
	}
}

namespace ton { // 200 T (Ton) of paint is needed to paint a one square km area (200 T/km2)
	double tonPaint(double size) {
		return;
	}
}
*/ 
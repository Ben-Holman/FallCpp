#pragma once 
#include "Namespaces.h"
#include <iostream>

namespace kilogram { //  0.2 kg (kilogram) of paint is needed to paint a one square meter area (0.2 kg/m2).
	double kilogramPaint(double size) {
		double paintNeeded = 0.2; 
		double total; 
		total = paintNeeded * (size * size); 
		return total;
	}
}

namespace milligram { // 20mg(milligram) of paint is needed to paint a one square centimetres area (20 mg/cm2).
	double milligramPaint(double size) {
		double paintNeeded = 20;
		double total;
		total = paintNeeded * (size * size);
		return total;
		
	}
}

namespace ton { // 200 T (Ton) of paint is needed to paint a one square km area (200 T/km2)
	double tonPaint(double size) {
		double paintNeeded = 200;
		double total;
		total = paintNeeded * (size * size);
		return total;
	}
}
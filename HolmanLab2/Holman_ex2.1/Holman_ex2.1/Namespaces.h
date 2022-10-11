#pragma once 

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
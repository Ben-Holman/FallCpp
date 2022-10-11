#include <iostream>
#include "altMoney.h"
int main()
{
	int d, c, a, b;
	b = 0; 
	a = 0; 
	AltMoney m1, m2, difference;
	difference = AltMoney(0, 0);
	char answer2 = 't';
	/*
	m1.read_money(d, c);
	m2.read_money(d, c); 
	m1 = AltMoney(d, c);
	std::cout << "The first money is:";
	m1.display_money();
	m1.read_money(d, c);
	m2.read_money(d, c);	
	m2 = AltMoney(d, c);
	std::cout << "The second money is:";
	m2.display_money();
	m1.add(m1, m2);
	std::cout << "The sum is:";
	sum.display_money();
	subtract(m1, m2); 
	std::cout << "The difference is: " << std::endl;
	sum.display_money(); 
	*/ 

		m1.read_money(d, c);
		m1 = AltMoney(d, c);
		m2.read_money(a, b);
		m2 = AltMoney(a, b);
		std::cout << "The first money is: \n";
		m1.display_money();
		std::cout << "The Second money is: \n";
		m2.display_money();
		std::cout << "Would You Like To Add Or Subtract the Money? (A/S)\n";
		char answer;
		std::cin >> answer;
		if (answer == 'A' || answer == 'a') {
			std::cout << "Adding...\n";
			m1.add(m1, m2);
			m1.display_money();
		}
		else {
			std::cout << "Subtracting...\n";
			subtract(m1, m2, difference);
			difference.display_money();
		} 
	return 0;
}/** Modify the above program to include the following changes. Call your new program ex2_4.cpp.

1. Modify the previous add function so that it becomes now a member function of the class
AltMoney. The function takes the sum of dollars and cents of an object AltMoney and
returns the result as an AltMoney. Note that in the above version of the program, the
object sum has been passed by reference. Do not pass the sum any longer.

2. Add a new friend function, called subtract, that computes the subtraction of one money
from another.

3. Modify read_money and make it member function of AltMoney. Note that if you make
read_money a member function, then you can use it to directly initialize the dollars and
cents of an AltMoney type object directly.*/
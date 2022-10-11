#pragma once	
#include <iostream>
#include "altMoney.h"

AltMoney::AltMoney()
{
	dollars = 0; 
	cents = 0; 
}
AltMoney::AltMoney(int d, int c)
{
	dollars = d;
	cents = c;
}
void AltMoney::display_money()
{
	std::cout << "$" << dollars << ".";
	if (cents <= 9)
		std::cout << "0" << std::endl; //to display a 0 in the left for numbers less than 10 cout 
	std::cout << cents << std::endl;
}
void AltMoney::add(AltMoney m1, AltMoney m2) // COME BACK TO 
{
	int extra = 0;
	int sum; 
	cents = m1.cents + m2.cents;
	if (cents >= 100)
	{
		cents = cents - 100;
		extra = 1;
	}
	dollars = m1.dollars + m2.dollars + extra;
}

void subtract(AltMoney m1, AltMoney m2, AltMoney& difference) {
	difference.cents = m1.cents - m2.cents; 
	difference.dollars = m1.dollars - m2.dollars; 

	
}
void AltMoney::read_money(int& d, int& c)
{
	std::cout << "Enter dollar \n";
    std::cin >> d;
	std::cout << "Enter cents \n";
	std::cin >> c;
	if (d < 0 || c < 0)
	{
		std::cout << "Invalid dollars and cents, negative values\n"; exit(1);
	}
}
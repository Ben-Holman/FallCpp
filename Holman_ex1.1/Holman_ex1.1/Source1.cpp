#include <iostream>
#include "avg_sum.h"
int main(void)
{ /* Call and test all of the functions written */
	std::cout << "Welcome to the average driver program.\n";
	std::cout << "Please enter the number of items to be summed: ";
	int n;
	std::cin >> n;
	// Call the sum function to input and sum n numbers
	// Store the returned value in the variable sigma
	double sigma = sum(n); // call to your sum function
	// Call the average function
	double avg = average(n, sigma);
	std::cout << "The average of " << sigma << "/" << n << " is: "
		<< avg << std::endl;
	return 0;
}
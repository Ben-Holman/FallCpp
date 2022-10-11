/*
Lab 1.2
Ben Holman
First Edit: 9/2/2022
Last Edit: 9/5/2022
*/

/* avg_driver.cpp - used to test the average functions use */
#include <iostream> //necessary for cin/cout
#include "average.h" // use the .hpp for includes
//using namespace std; 
// I don't use namespace std. I want to get used to std:: or another_namespace:: 
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
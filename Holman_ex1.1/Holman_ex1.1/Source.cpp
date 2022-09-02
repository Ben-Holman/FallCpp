/* avg_main.cpp - used to test the average function use */

#include <iostream>
#include "avg_sum.h" 
int main(void){ /* Call and test all of the functions written */
		std::cout << "Welcome to the average driver program.\n";
		std::cout << "Please enter the number of items to be summed: ";
		int n, count = 0;
		double single_score, sum = 0;
		std::cin >> n;
		while (count < n) // read in the test scores and sum them {
			std::cout << "Test score " << count + 1 << ":";
		std::cin >> single_score;
		sum += single_score;
		count++;

	
		double avg = average(n, sum);
		std::cout << "The average of " << sum << "/" << n << " is: " << avg << std::endl;
}
/*
	std::cout << "The average of " << sum << "/" << n << " is: " << avg << endl;
	return 0;

*/
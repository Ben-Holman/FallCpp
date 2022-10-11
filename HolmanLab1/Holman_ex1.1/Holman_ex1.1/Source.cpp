/*
Lab 1.1
Ben Holman
First Edit: 9/2/2022
Last Edit: 9/5/2022
*/
#include <iostream>
#include "average.h"

int main(void) {
	/* Call and test all of the functions written */
	std::cout << "Welcome to the average driver program.\n";
	std::cout << "Please enter the number of items to be summed: ";
	int n, count = 0;
	double single_score, sum = 0;
	std::cin >> n;
	while (count < n) { // read in the test scores and sum them {
		std::cout << "Test score " << count + 1 << ":";
		std::cin >> single_score;
		sum += single_score;
		count++;
	}
// Call the average function
double avg = average(n, sum);
std::cout << "The average of " << sum << "/" << n << " is: " << avg << std::endl;

return 0; 
}

/*
* The While-loop would infinite loop since there were no brackets around the loop block. One of the 
* brackets is commented, but there was no ending. Once I fixed it -- it worked as intended. 
*/
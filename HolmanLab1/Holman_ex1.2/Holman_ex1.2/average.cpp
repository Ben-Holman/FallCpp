#pragma once
#include "average.h"
#include <iostream>

double average(int num_scores, double sum) { // NO SEMICOLON HERE!
/* computes the average using an already computed sum and num_scores */
	return sum / num_scores;
}

double sum(int n) { // use the loop from 1.1 
    int count = 0;
    double single_score, sum = 0;
    //std::cin >> n;
    while (count < n) { // read in the test scores and sum them {
        std::cout << "Test score " << count + 1 << ":";
        std::cin >> single_score;
        sum += single_score;
        count++;
    }

	return sum; 
}

/*
* Commented line 13 out as that was the primary driver of the loop and not the function parameter. 
*/
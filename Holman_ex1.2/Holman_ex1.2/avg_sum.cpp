#pragma once
#include "avg_sum.h"

double average(int num_scores, double sum) {
    /* computes the average using an already computed sum and num_scores */
    return sum / num_scores;
}

double sum(int n) {
    // the answer is always 2 for some reason.
    return n += n;
}



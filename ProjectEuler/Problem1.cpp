#include "stdafx.h"
#include "Problem1.h"

/*
https://projecteuler.net/problem=1
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

int Problem1::SumMultiplesOf3And5Below(int range)
{
    int sum = 0;

    if (range > 3)
    {
        sum+= 3;
    }

    if (range > 5)
    {
        sum += 5;
    }

    if (range > 6)
    {
        sum += 6;
    }

    return sum;
}

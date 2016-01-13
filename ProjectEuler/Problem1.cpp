#include "stdafx.h"
#include "Problem1.h"

/*
https://projecteuler.net/problem=1
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

unsigned long Problem1::SumMultiplesOf3And5Below(unsigned long range)
{
    auto result = SumDivisibleBy(3, range) + SumDivisibleBy(5, range) - SumDivisibleBy(15, range);

    return result;
}

unsigned long Problem1::Sum(unsigned long range)
{
    auto sum = (range * (range + 1)) / 2;

    return sum;
}

unsigned long Problem1::SumDivisibleBy(unsigned long divisor, unsigned long range)
{
    auto result = 0UL;

    if (range > 0)
    {
        result = Sum((range - 1) / divisor);
        result *= divisor;
    }

    return result;
}
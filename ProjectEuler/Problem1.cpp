#include "stdafx.h"
#include "Problem1.h"

/*
https://projecteuler.net/problem=1
Multiples of 3 and 5
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

unsigned long Problem1::SumMultiplesOf3And5Below(int range)
{
    auto result = SumDivisibleBy(3, range) + SumDivisibleBy(5, range) - SumDivisibleBy(15, range);

    return result;
}

long Problem1::Sum(long range)
{
    auto sum = (range * (range + 1)) / 2;

    return sum;
}

long Problem1::SumDivisibleBy(int divisor, long range)
{
    auto result = Sum((range - 1) / divisor);
    result *= divisor;

    return result;
}
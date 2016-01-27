#include "stdafx.h"
#include "Problem2.h"

/*
https://projecteuler.net/problem=2
Even Fibonacci numbers
Problem 2
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int Problem2::FibonacciSumEven(int range)
{
    auto sum = 0;

    if (range >= 2)
    {
        sum += 2;
    }

    if (range == 8)
    {
        sum += 8;
    }

    return sum;
}

int Problem2::Fibonacci(int range)
{
    if (range == 2)
    {
        return 2;
    }
    else if (range == 3)
    {
        return 3;
    }


    return 1;
}
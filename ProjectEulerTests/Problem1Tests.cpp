#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\ProjectEuler\Problem1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProjectEulerTests
{		
	TEST_CLASS(Problem1Tests)
	{
	public:
		
		TEST_METHOD(SumMultiplesOf3And5Below_Input0_Returns0)
		{
            auto result = Problem1::SumMultiplesOf3And5Below(0);
            Assert::AreEqual(0ULL, result);
		}

        TEST_METHOD(SumMultiplesOf3And5Below_Input1_Returns0)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(1);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input2_Returns0)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(2);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input3_Returns0)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(3);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input4_Returns3)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(4);
            Assert::AreEqual(3ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input5_Returns3)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(5);
            Assert::AreEqual(3ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input6_Returns8)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(6);
            Assert::AreEqual(8ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input7_Returns14)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(7);
            Assert::AreEqual(14ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input8_Returns14)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(8);
            Assert::AreEqual(14ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input9_Returns14)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(9);
            Assert::AreEqual(14ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input10_Returns23)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(10);
            Assert::AreEqual(23ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input100_Returns2318)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(100);
            Assert::AreEqual(2318ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input1000_Returns233168)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(1000);
            Assert::AreEqual(233168ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input10000_Returns23331668)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(10000);
            Assert::AreEqual(23331668ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input100000_Returns2333316668)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(100000);
            Assert::AreEqual(2333316668ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input1000000_Returns233333166668)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(1000000);
            Assert::AreEqual(233333166668ULL, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input10000000_Returns23333331666668)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(10000000);
            Assert::AreEqual(23333331666668ULL, result);
        }

        TEST_METHOD(Sum_Input0_Returns0)
        {
            auto result = Problem1::Sum(0);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(Sum_Input1_Returns1)
        {
            auto result = Problem1::Sum(1);
            Assert::AreEqual(1ULL, result);
        }

        TEST_METHOD(Sum_Input2_Returns3)
        {
            auto result = Problem1::Sum(2);
            Assert::AreEqual(3ULL, result);
        }

        TEST_METHOD(Sum_Input3_Returns6)
        {
            auto result = Problem1::Sum(3);
            Assert::AreEqual(6ULL, result);
        }

        TEST_METHOD(Sum_Input4_Returns10)
        {
            auto result = Problem1::Sum(4);
            Assert::AreEqual(10ULL, result);
        }

        TEST_METHOD(Sum_Input5_Returns15)
        {
            auto result = Problem1::Sum(5);
            Assert::AreEqual(15ULL, result);
        }

        TEST_METHOD(Sum_Input6_Returns21)
        {
            auto result = Problem1::Sum(6);
            Assert::AreEqual(21ULL, result);
        }

        TEST_METHOD(Sum_Input7_Returns28)
        {
            auto result = Problem1::Sum(7);
            Assert::AreEqual(28ULL, result);
        }

        TEST_METHOD(Sum_Input8_Returns36)
        {
            auto result = Problem1::Sum(8);
            Assert::AreEqual(36ULL, result);
        }

        TEST_METHOD(Sum_Input9_Returns45)
        {
            auto result = Problem1::Sum(9);
            Assert::AreEqual(45ULL, result);
        }

        TEST_METHOD(Sum_Input10_Returns55)
        {
            auto result = Problem1::Sum(10);
            Assert::AreEqual(55ULL, result);
        }

        TEST_METHOD(Sum_Input100_Returns5050)
        {
            auto result = Problem1::Sum(100);
            Assert::AreEqual(5050ULL, result);
        }

        TEST_METHOD(Sum_Input100000_Returns5000050000)
        {
            auto result = Problem1::Sum(100000);
            Assert::AreEqual(5000050000ULL, result);
        }

        TEST_METHOD(Sum_Input1000000_Returns500000500000)
        {
            auto result = Problem1::Sum(1000000);
            Assert::AreEqual(500000500000ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and0_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 0L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and1_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 1L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and2_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 2L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and3_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 3L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and4_Returns3)
        {
            auto result = Problem1::SumDivisibleBy(3, 4L);
            Assert::AreEqual(3ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and1000000_Returns166666833333)
        {
            auto result = Problem1::SumDivisibleBy(3, 1000000L);
            Assert::AreEqual(166666833333ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and0_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 0L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and1_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 1L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and2_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 2L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and3_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 3L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and4_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 4L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and5_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 5L);
            Assert::AreEqual(0ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and6_Returns5)
        {
            auto result = Problem1::SumDivisibleBy(5, 6L);
            Assert::AreEqual(5ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and1000000_Returns99999500000)
        {
            auto result = Problem1::SumDivisibleBy(5, 1000000L);
            Assert::AreEqual(99999500000ULL, result);
        }

        TEST_METHOD(SumDivisibleBy_Input15and1000000_Returns33333166665)
        {
            auto result = Problem1::SumDivisibleBy(15, 1000000L);
            Assert::AreEqual(33333166665ULL, result);
        }
	};
}
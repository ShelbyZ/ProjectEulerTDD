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
            Assert::AreEqual(0, result);
		}

        TEST_METHOD(SumMultiplesOf3And5Below_Input1_Returns0)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(1);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input2_Returns0)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(2);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input3_Returns0)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(3);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input4_Returns3)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(4);
            Assert::AreEqual(3, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input5_Returns3)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(5);
            Assert::AreEqual(3, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input6_Returns8)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(6);
            Assert::AreEqual(8, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input7_Returns14)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(7);
            Assert::AreEqual(14, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input8_Returns14)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(8);
            Assert::AreEqual(14, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input9_Returns14)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(9);
            Assert::AreEqual(14, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input10_Returns23)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(10);
            Assert::AreEqual(23, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input100_Returns2318)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(100);
            Assert::AreEqual(2318, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input1000_Returns233168)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(1000);
            Assert::AreEqual(233168, result);
        }

        TEST_METHOD(SumMultiplesOf3And5Below_Input10000_Returns23331668)
        {
            auto result = Problem1::SumMultiplesOf3And5Below(10000);
            Assert::AreEqual(23331668, result);
        }

        TEST_METHOD(SumBelow_Input0_Returns0)
        {
            auto result = Problem1::SumBelow(0);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumBelow_Input1_Returns0)
        {
            auto result = Problem1::SumBelow(1);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumBelow_Input2_Returns1)
        {
            auto result = Problem1::SumBelow(2);
            Assert::AreEqual(1L, result);
        }

        TEST_METHOD(SumBelow_Input3_Returns3)
        {
            auto result = Problem1::SumBelow(3);
            Assert::AreEqual(3L, result);
        }

        TEST_METHOD(SumBelow_Input4_Returns6)
        {
            auto result = Problem1::SumBelow(4);
            Assert::AreEqual(6L, result);
        }

        TEST_METHOD(SumBelow_Input5_Returns10)
        {
            auto result = Problem1::SumBelow(5);
            Assert::AreEqual(10L, result);
        }

        TEST_METHOD(SumBelow_Input6_Returns15)
        {
            auto result = Problem1::SumBelow(6);
            Assert::AreEqual(15L, result);
        }

        TEST_METHOD(SumBelow_Input7_Returns21)
        {
            auto result = Problem1::SumBelow(7);
            Assert::AreEqual(21L, result);
        }

        TEST_METHOD(SumBelow_Input8_Returns28)
        {
            auto result = Problem1::SumBelow(8);
            Assert::AreEqual(28L, result);
        }

        TEST_METHOD(SumBelow_Input9_Returns36)
        {
            auto result = Problem1::SumBelow(9);
            Assert::AreEqual(36L, result);
        }

        TEST_METHOD(SumBelow_Input10_Returns45)
        {
            auto result = Problem1::SumBelow(10);
            Assert::AreEqual(45L, result);
        }

        TEST_METHOD(SumBelow_Input100_Returns4950)
        {
            auto result = Problem1::SumBelow(100);
            Assert::AreEqual(4950L, result);
        }

        TEST_METHOD(SumBelow_Input100000_Returns704982704)
        {
            auto result = Problem1::SumBelow(100000);
            Assert::AreEqual(704982704L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and0_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 0L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and1_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 1L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and2_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 2L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and3_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(3, 3L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input3and4_Returns3)
        {
            auto result = Problem1::SumDivisibleBy(3, 4L);
            Assert::AreEqual(3L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and0_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 0L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and1_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 1L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and2_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 2L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and3_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 3L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and4_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 4L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and5_Returns0)
        {
            auto result = Problem1::SumDivisibleBy(5, 5L);
            Assert::AreEqual(0L, result);
        }

        TEST_METHOD(SumDivisibleBy_Input5and6_Returns5)
        {
            auto result = Problem1::SumDivisibleBy(5, 6L);
            Assert::AreEqual(5L, result);
        }
	};
}
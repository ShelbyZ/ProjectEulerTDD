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
	};
}
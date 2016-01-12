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
	};
}
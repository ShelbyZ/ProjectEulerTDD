#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\ProjectEuler\Problem2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProjectEulerTests
{
    TEST_CLASS(Problem2Tests)
    {
    public:

        TEST_METHOD(FibonacciSumEven_Input1_Returns0)
        {
            auto result = Problem2::FibonacciSumEven(1);
            Assert::AreEqual(0, result);
        }

        TEST_METHOD(FibonacciSumEven_Input2_Returns2)
        {
            auto result = Problem2::FibonacciSumEven(2);
            Assert::AreEqual(2, result);
        }
    };
}
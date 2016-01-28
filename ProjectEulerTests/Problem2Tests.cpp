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

        TEST_METHOD(FibonacciSumEven_Input3_Returns2)
        {
            auto result = Problem2::FibonacciSumEven(3);
            Assert::AreEqual(2, result);
        }

        TEST_METHOD(FibonacciSumEven_Input5_Returns2)
        {
            auto result = Problem2::FibonacciSumEven(5);
            Assert::AreEqual(2, result);
        }

        TEST_METHOD(FibonacciSumEven_Input8_Returns10)
        {
            auto result = Problem2::FibonacciSumEven(8);
            Assert::AreEqual(10, result);
        }

        TEST_METHOD(Fibonacci_Input1_Returns1)
        {
            auto result = Problem2::Fibonacci(1);
            Assert::AreEqual(1, result);
        }

        TEST_METHOD(Fibonacci_Input2_Returns2)
        {
            auto result = Problem2::Fibonacci(2);
            Assert::AreEqual(2, result);
        }

        TEST_METHOD(Fibonacci_Input3_Returns3)
        {
            auto result = Problem2::Fibonacci(3);
            Assert::AreEqual(3, result);
        }

        TEST_METHOD(Fibonacci_Input4_Returns5)
        {
            auto result = Problem2::Fibonacci(4);
            Assert::AreEqual(5, result);
        }

        TEST_METHOD(Fibonacci_Input0_Returns1)
        {
            auto result = Problem2::Fibonacci(0);
            Assert::AreEqual(1, result);
        }

        TEST_METHOD(Fibonacci_Input5_Returns8)
        {
            auto result = Problem2::Fibonacci(5);
            Assert::AreEqual(8, result);
        }

        TEST_METHOD(Fibonacci_Input6_Returns13)
        {
            auto result = Problem2::Fibonacci(6);
            Assert::AreEqual(13, result);
        }

        TEST_METHOD(Fibonacci_Input7_Returns21)
        {
            auto result = Problem2::Fibonacci(7);
            Assert::AreEqual(21, result);
        }

        TEST_METHOD(Fibonacci_Input8_Returns34)
        {
            auto result = Problem2::Fibonacci(8);
            Assert::AreEqual(34, result);
        }

        TEST_METHOD(Fibonacci_Input9_Returns55)
        {
            auto result = Problem2::Fibonacci(9);
            Assert::AreEqual(55, result);
        }

        TEST_METHOD(Fibonacci_Input10_Returns89)
        {
            auto result = Problem2::Fibonacci(10);
            Assert::AreEqual(89, result);
        }
    };
}
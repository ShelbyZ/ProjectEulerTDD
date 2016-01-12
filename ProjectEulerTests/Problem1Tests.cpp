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
	};
}
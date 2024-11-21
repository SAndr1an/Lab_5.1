#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double result = g(2.0, 3.0);
			double expected = ((2.0 * 3.0) / ((4.0) + (9.0)));
			Assert::AreEqual(expected, result, 0.0001);
		}
	};
}

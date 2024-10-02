#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\lab 5.2\lab 5.2\source.cpp"
#include <cmath> 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int n = 0;     
			double s = 0;
			double x = 1.0;
			double eps = 0.01;

			S(x, eps, n, s);

			double expected = exp(-x);

			Assert::AreEqual(expected, s, 0.01);
		};
	};
}

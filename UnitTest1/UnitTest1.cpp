#include "pch.h"
#include "CppUnitTest.h"
#include "../lab54/lab54.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S1(2, 5, 0);
			Assert::AreEqual(t, 4);
		}
	};
}

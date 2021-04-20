#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/5.1D/5.1D/Pair.h"
#include "C://Users/User/source/repos/5.1D/5.1D/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair A(1, 2);
			Pair B(2, 1);
			bool test = (A == B);
			Assert::AreEqual(test, false);
		}
	};
}

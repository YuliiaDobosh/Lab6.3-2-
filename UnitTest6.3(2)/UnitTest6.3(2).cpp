#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.3(2)\Lab6.3(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 1,3,6,9 };
			int min = 10;
			int tmp = Min(A, 4,min , 0);
			Assert::AreEqual(1, tmp);


		}
	};
}

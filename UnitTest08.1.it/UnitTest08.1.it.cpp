#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1.it/lab.08.1.it.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081it
{
	TEST_CLASS(UnitTest081it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int l = 0;
			char str[101] = "tdf,ghtj,5,43,4g,3h,j,tr,e";
			Assert::IsTrue(Count(str)==11);

			
		}
	};
}

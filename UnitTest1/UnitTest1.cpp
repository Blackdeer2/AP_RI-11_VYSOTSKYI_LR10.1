#include "pch.h"
#include "CppUnitTest.h"
#include "../PR10.1/PR10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			string str;
			str = "you realy want free tea?";
			bool test = findOut(str);
			Assert::IsFalse(test);
		}
	};
}

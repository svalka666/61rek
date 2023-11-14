#include "pch.h"
#include "CppUnitTest.h"
#include "../61rek/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6161rek
{
	TEST_CLASS(UnitTest6161rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int r[n] = { 2, 6,16,18,20 };
			int expS = 0;
			for (int i = 0; i < n; i++) {
				if (!((r[i] % 2 == 0) || (r[i] % 13 == 0)))
				{
					expS += r[i];
			

				}
			}
			int s = Sum(r, n,0);
			Assert::AreEqual(s, expS);

		}
	};
}

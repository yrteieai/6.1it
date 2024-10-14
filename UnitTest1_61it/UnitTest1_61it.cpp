#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1_it/6.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest161it
{
	TEST_CLASS(UnitTest161it)
	{
	public:
        TEST_METHOD(TestCountElements)
        {
            int testArray1[] = { 2, 3, 5, 7, 9 };
            Assert::AreEqual(1, CountElements(testArray1, 5));

            int testArray2[] = { 26, 39, 52, 13, 26 };  
            Assert::AreEqual(1, CountElements(testArray2, 5));
        }

        TEST_METHOD(TestSumElements)
        {
            int testArray1[] = { 1, 3, 5, 7, 9 }; 
            Assert::AreEqual(0, SumElements(testArray1, 5));

            int testArray2[] = { 78, 39, 52, 13, 26 };  
            Assert::AreEqual(78, SumElements(testArray2, 5)); 
        }

        TEST_METHOD(TestZero)
        {
            int testArray[] = { 26, 39, 52, 13, 26 };  
            Zero(testArray, 5);

            Assert::AreEqual(0, testArray[0]);  
            Assert::AreEqual(39, testArray[1]); 
            Assert::AreEqual(52, testArray[2]); 
        }

        TEST_METHOD(TestGen)
        {
            const int size = 10;
            int a[size];
            int Low = 15, High = 94;
            gen(a, size, Low, High);

            for (int i = 0; i < size; i++) {
                Assert::IsTrue(a[i] >= Low && a[i] <= High);
            }
        }
    };
}

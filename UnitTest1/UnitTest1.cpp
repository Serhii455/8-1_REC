#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_8.1_REC/8.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            {
                char str[] = "Hello !!! world!";
                int countResult = Count(str, 1);

                Assert::AreEqual(1, countResult);

                char dest[151];
                dest[0] = '\0';
                char* destResult = Change(dest, str, dest, 0);

                char expected[] = "Hello **  world!";

                Assert::AreEqual(std::string(expected), std::string(destResult));
            }
        }
    };
}

#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.2.1/calculate.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculateWTests
{
    TEST_CLASS(CalculateWTests)
    {
    public:

        TEST_METHOD(TestCalculateW_ZBetween0And5)
        {
            // Тест для випадку 0 < z < 5
            double x = 2.0;
            double y = 3.0;
            double z = 1.0;
            double expected = std::min((x * x + y + z), (x * y * z));

            double result = calculate_w(x, y, z);

            Assert::AreEqual(expected, result, 0.0001, L"Result does not match expected value for 0 < z < 5");
        }

        TEST_METHOD(TestCalculateW_ZLessThanOrEqualTo0)
        {
            // Тест для випадку z <= 0
            double x = 2.0;
            double y = 3.0;
            double z = -1.0;
            double expected = std::max((x * x + (y + z) * (y + z)), (x * y));

            double result = calculate_w(x, y, z);

            Assert::AreEqual(expected, result, 0.0001, L"Result does not match expected value for z <= 0");
        }

        TEST_METHOD(TestCalculateW_ZGreaterThanOrEqualTo5)
        {
            // Тест для випадку z >= 5
            double x = 2.0;
            double y = 3.0;
            double z = 5.0;
            double expected = std::max((x * x + (y + z) * (y + z)), (x * y));

            double result = calculate_w(x, y, z);

            Assert::AreEqual(expected, result, 0.0001, L"Result does not match expected value for z >= 5");
        }
    };
}

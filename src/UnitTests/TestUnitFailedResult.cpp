#include "TestUnitFailedResult.hpp"

namespace UnitTests
{
    CTestUnitFailedResult::CTestUnitFailedResult(const std::string& TestName)
        : CTestUnitResult(TestName)
    {
    }
}

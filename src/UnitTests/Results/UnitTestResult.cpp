#include "UnitTestResult.hpp"

namespace UnitTests
{
    CUnitTestResult::CUnitTestResult(const std::string& TestName)
        : _TestName(TestName)
    {
    }

    const std::string& CUnitTestResult::GetTestName() const
    {
        return _TestName;
    }
}

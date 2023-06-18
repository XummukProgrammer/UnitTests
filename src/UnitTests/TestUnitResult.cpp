#include "TestUnitResult.hpp"

namespace UnitTests
{
    CTestUnitResult::CTestUnitResult(const std::string& TestName)
        : _TestName(TestName)
    {
    }

    const std::string& CTestUnitResult::GetTestName() const
    {
        return _TestName;
    }
}

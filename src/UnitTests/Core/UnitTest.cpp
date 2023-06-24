#include "UnitTest.hpp"

namespace UnitTests
{
    CUnitTest::CUnitTest(const std::string& Name)
        : _Name(Name)
    {
    }

    const std::string& CUnitTest::GetName() const
    {
        return _Name;
    }
}

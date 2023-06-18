#include "TestUnit.hpp"

namespace UnitTests
{
    CTestUnit::CTestUnit(const std::string& Name)
        : _Name(Name)
    {
    }

    const std::string& CTestUnit::GetName() const
    {
        return _Name;
    }
}

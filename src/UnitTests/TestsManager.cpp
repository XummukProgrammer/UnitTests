#include "TestsManager.hpp"

#include <UnitTests/TestUnit.hpp>

namespace UnitTests
{
    void CTestsManager::AddTest(CTestUnitPtr&& pTest)
    {
        _Tests.push_back(std::move(pTest));
    }

    void CTestsManager::Execute()
    {
        for (auto& pTest : _Tests)
        {
            pTest->OnExecute();
        }
    }
}

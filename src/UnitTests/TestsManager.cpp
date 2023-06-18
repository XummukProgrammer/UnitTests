#include "TestsManager.hpp"

#include <UnitTests/TestUnit.hpp>

#include <iostream>

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
            auto&& pResult = pTest->OnExecute();

            // Show test message
            std::cout << "Test status '" << pResult->GetTestName() << "': " << pResult->GetString() << std::endl;

            _Results.push_back(std::move(pResult));
        }
    }
}

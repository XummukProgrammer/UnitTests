#include "UnitTestsManager.hpp"

#include <UnitTests/Core/UnitTest.hpp>

#include <iostream>

namespace UnitTests
{
    void CUnitTestsManager::AddTest(CUnitTestPtr&& pTest)
    {
        _Tests.push_back(std::move(pTest));
    }

    void CUnitTestsManager::Execute()
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

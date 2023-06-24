#include "UnitTestsManager.hpp"

#include <UnitTests/Core/UnitTest.hpp>
#include <UnitTests/Results/UnitTestSuccessResult.hpp>
#include <UnitTests/Results/UnitTestFailedResult.hpp>

#include <iostream>

namespace UnitTests
{
    void CUnitTestsManager::AddTest(CUnitTestPtr&& pTest)
    {
        _Tests.push_back(std::move(pTest));
    }

    void CUnitTestsManager::Execute()
    {
        Reset();

        for (auto& pTest : _Tests)
        {
            auto&& pResult = pTest->OnExecute();

            if (auto pSuccessResult = dynamic_cast<CUnitTestSuccessResult*>(pResult.get()))
            {
                OnTestSuccessResult(pTest.get());
            }
            else if (auto pFailedResult = dynamic_cast<CUnitTestFailedResult*>(pResult.get()))
            {
                OnTestFailedResult(pTest.get(), pFailedResult->GetString());
            }

            ++_CurrentTestIndex;
        }

        std::cout << "[CUnitTestsManager] All tests were successfully run. Worked successfully " << _SuccessTestsCount << ", with an error of " << _FailedTestsCount << " out of " << _Tests.size() << " tests." << std::endl;
    }

    void CUnitTestsManager::Reset()
    {
        _CurrentTestIndex = 1;
        _SuccessTestsCount = 0;
        _FailedTestsCount = 0;
    }

    void CUnitTestsManager::OnTestSuccessResult(CUnitTestPtr::pointer pTest)
    {
        std::cout << "[CUnitTestsManager] The test '" << pTest->GetName() << "' was completed successfully [" << _CurrentTestIndex << "/" << _Tests.size() << "]" << std::endl;
        ++_SuccessTestsCount;
    }

    void CUnitTestsManager::OnTestFailedResult(CUnitTestPtr::pointer pTest, const std::string& Error)
    {
        std::cout << "[CUnitTestsManager] The test '" << pTest->GetName() << "' was executed with the error: '" << Error << "' [" << _CurrentTestIndex << "/" << _Tests.size() << "]" << std::endl;
        ++_FailedTestsCount;
    }
}

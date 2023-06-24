#ifndef _UNIT_TESTS_MANAGER_HEADER_
#define _UNIT_TESTS_MANAGER_HEADER_

#include <UnitTests/Results/UnitTestResult.hpp>

#include <list>
#include <memory>

namespace UnitTests
{
	class CUnitTest;

	class CUnitTestsManager final
	{
	public:
		using CUnitTestPtr = std::unique_ptr<CUnitTest>;
		using CUnitTestResultPtr = std::unique_ptr<CUnitTestResult>;

	public:
		CUnitTestsManager() = default;
		~CUnitTestsManager() = default;

	public:
		void AddTest(CUnitTestPtr&& pTest);

		void Execute();

	private:
		void Reset();

		void OnTestSuccessResult(CUnitTestPtr::pointer pTest);
		void OnTestFailedResult(CUnitTestPtr::pointer pTest, const std::string& Error);

	private:
		std::list<CUnitTestPtr> _Tests;
		int _CurrentTestIndex;
		int _SuccessTestsCount;
		int _FailedTestsCount;
	};
}

#endif // _UNIT_TESTS_MANAGER_HEADER_

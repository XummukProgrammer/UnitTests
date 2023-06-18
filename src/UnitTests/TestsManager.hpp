#ifndef _UNIT_TESTS_TESTS_MANAGER_HEADER_
#define _UNIT_TESTS_TESTS_MANAGER_HEADER_

#include <UnitTests/TestUnitResult.hpp>

#include <list>
#include <memory>

namespace UnitTests
{
	class CTestUnit;

	class CTestsManager final
	{
	public:
		using CTestUnitPtr = std::unique_ptr<CTestUnit>;
		using CTestUnitResultPtr = std::unique_ptr<CTestUnitResult>;

	public:
		CTestsManager() = default;
		~CTestsManager() = default;

	public:
		void AddTest(CTestUnitPtr&& pTest);

		void Execute();

	private:
		std::list<CTestUnitPtr> _Tests;
		std::list<CTestUnitResultPtr> _Results;
	};
}

#endif // _UNIT_TESTS_TESTS_MANAGER_HEADER_

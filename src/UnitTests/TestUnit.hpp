#ifndef _UNIT_TESTS_TEST_UNIT_HEADER_
#define _UNIT_TESTS_TEST_UNIT_HEADER_

#include <UnitTests/TestUnitResult.hpp>

#include <memory>
#include <string>

namespace UnitTests
{
	class CTestUnit
	{
	public:
		CTestUnit(const std::string& Name);
		virtual ~CTestUnit() = default;

	public:
		virtual std::unique_ptr<CTestUnitResult> OnExecute() = 0;

	public:
		const std::string& GetName() const;

	private:
		std::string _Name;
	};
}

#endif // _UNIT_TESTS_TEST_UNIT_HEADER_

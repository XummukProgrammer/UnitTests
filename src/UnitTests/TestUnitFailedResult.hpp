#ifndef _UNIT_TESTS_TEST_UNIT_FAILED_RESULT_HEADER_
#define _UNIT_TESTS_TEST_UNIT_FAILED_RESULT_HEADER_

#include <UnitTests/TestUnitResult.hpp>

namespace UnitTests
{
	class CTestUnitFailedResult final : public CTestUnitResult
	{
	public:
		CTestUnitFailedResult(const std::string& TestName);
		~CTestUnitFailedResult() = default;

	public:
		std::string GetString() const { return "FAILED"; }
	};
}

#endif // _UNIT_TESTS_TEST_UNIT_FAILED_RESULT_HEADER_

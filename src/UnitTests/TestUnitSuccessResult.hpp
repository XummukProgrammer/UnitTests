#ifndef _UNIT_TESTS_TEST_UNIT_SUCCESS_RESULT_HEADER_
#define _UNIT_TESTS_TEST_UNIT_SUCCESS_RESULT_HEADER_

#include <UnitTests/TestUnitResult.hpp>

namespace UnitTests
{
	class CTestUnitSuccessResult final : public CTestUnitResult
	{
	public:
		CTestUnitSuccessResult(const std::string& TestName);
		~CTestUnitSuccessResult() = default;

	public:
		std::string GetString() const { return "SUCCESS"; }
	};
}

#endif // _UNIT_TESTS_TEST_UNIT_SUCCESS_RESULT_HEADER_

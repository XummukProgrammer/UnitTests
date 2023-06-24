#ifndef _UNIT_TEST_SUCCESS_RESULT_HEADER_
#define _UNIT_TEST_SUCCESS_RESULT_HEADER_

#include <UnitTests/Results/UnitTestResult.hpp>

namespace UnitTests
{
	class CUnitTestSuccessResult final : public CUnitTestResult
	{
	public:
		CUnitTestSuccessResult(const std::string& TestName);
		~CUnitTestSuccessResult() = default;

	public:
		std::string GetString() const { return "SUCCESS"; }
	};
}

#endif // _UNIT_TEST_SUCCESS_RESULT_HEADER_

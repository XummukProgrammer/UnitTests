#ifndef _UNIT_TEST_FAILED_RESULT_HEADER_
#define _UNIT_TEST_FAILED_RESULT_HEADER_

#include <UnitTests/Results/UnitTestResult.hpp>

namespace UnitTests
{
	class CUnitTestFailedResult final : public CUnitTestResult
	{
	public:
		CUnitTestFailedResult(const std::string& TestName);
		~CUnitTestFailedResult() = default;

	public:
		std::string GetString() const { return "FAILED"; }
	};
}

#endif // _UNIT_TEST_FAILED_RESULT_HEADER_

#ifndef _UNIT_TEST_SUCCESS_RESULT_HEADER_
#define _UNIT_TEST_SUCCESS_RESULT_HEADER_

#include <UnitTests/Results/UnitTestResult.hpp>

namespace UnitTests
{
	class CUnitTestSuccessResult final : public CUnitTestResult
	{
	public:
		CUnitTestSuccessResult() = default;
		~CUnitTestSuccessResult() = default;

	public:
		std::string GetString() const override { return "SUCCESS"; }
	};
}

#endif // _UNIT_TEST_SUCCESS_RESULT_HEADER_

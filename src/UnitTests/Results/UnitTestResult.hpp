#ifndef _UNIT_TEST_RESULT_HEADER_
#define _UNIT_TEST_RESULT_HEADER_

#include <string>

namespace UnitTests
{
	class CUnitTestResult
	{
	public:
		CUnitTestResult() = default;
		virtual ~CUnitTestResult() = default;

	public:
		virtual std::string GetString() const = 0;
	};
}

#endif // _UNIT_TEST_RESULT_HEADER_

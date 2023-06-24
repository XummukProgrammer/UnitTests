#ifndef _UNIT_TEST_RESULT_HEADER_
#define _UNIT_TEST_RESULT_HEADER_

#include <string>

namespace UnitTests
{
	class CUnitTestResult
	{
	public:
		CUnitTestResult(const std::string& TestName);
		virtual ~CUnitTestResult() = default;

	public:
		virtual std::string GetString() const = 0;

	public:
		const std::string& GetTestName() const;

	private:
		std::string _TestName;
	};
}

#endif // _UNIT_TEST_RESULT_HEADER_

#ifndef _UNIT_TESTS_TEST_UNIT_RESULT_HEADER_
#define _UNIT_TESTS_TEST_UNIT_RESULT_HEADER_

#include <string>

namespace UnitTests
{
	class CTestUnitResult
	{
	public:
		CTestUnitResult(const std::string& TestName);
		virtual ~CTestUnitResult() = default;

	public:
		virtual std::string GetString() const = 0;

	public:
		const std::string& GetTestName() const;

	private:
		std::string _TestName;
	};
}

#endif // _UNIT_TESTS_TEST_UNIT_RESULT_HEADER_

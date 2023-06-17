#ifndef _UNIT_TESTS_TEST_UNIT_HEADER_
#define _UNIT_TESTS_TEST_UNIT_HEADER_

namespace UnitTests
{
	class CTestUnit
	{
	public:
		CTestUnit() = default;
		virtual ~CTestUnit() = default;

	public:
		virtual bool OnExecute() = 0;
	};
}

#endif // _UNIT_TESTS_TEST_UNIT_HEADER_

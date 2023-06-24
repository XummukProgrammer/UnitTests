#ifndef _UNIT_TEST_HEADER_
#define _UNIT_TEST_HEADER_

#include <UnitTests/Results/UnitTestResult.hpp>

#include <memory>
#include <string>

namespace UnitTests
{
	class CUnitTest
	{
	public:
		CUnitTest(const std::string& Name);
		virtual ~CUnitTest() = default;

	public:
		virtual std::unique_ptr<CUnitTestResult> OnExecute() = 0;

	public:
		const std::string& GetName() const;

	private:
		std::string _Name;
	};
}

#endif // _UNIT_TEST_HEADER_

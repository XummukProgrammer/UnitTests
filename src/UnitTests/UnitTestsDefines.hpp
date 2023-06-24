#ifndef _UNIT_TESTS_DEFINES_HEADER_
#define _UNIT_TESTS_DEFINES_HEADER_

#include <UnitTests/Core/UnitTestsManager.hpp>

#include <UnitTests/Results/UnitTestSuccessResult.hpp>
#include <UnitTests/Results/UnitTestFailedResult.hpp>

#define BEGIN_UNIT_TESTS \
	UnitTests::CUnitTestsManager testsManager;

#define END_UNIT_TESTS \
	testsManager.Execute();

#define ADD_UNIT_TEST(cls) \
	testsManager.AddTest(std::make_unique<cls>(#cls));

#define UNIT_TEST_SUCCESS_RESULT \
	return std::make_unique<UnitTests::CUnitTestSuccessResult>();

#define UNIT_TEST_FAILED_RESULT(message) \
	return std::make_unique<UnitTests::CUnitTestFailedResult>(message);

#define BEGIN_UNIT_TEST_CLASS(cls) \
	std::unique_ptr<UnitTests::CUnitTestResult> cls ## _OnExecute(); \
	class cls final : public UnitTests::CUnitTest \
	{ \
	public: \
		cls(const std::string& TestName) \
			: CUnitTest(TestName) \
		{ \
		} \
		~cls() = default; \
		\
	public: \
		std::unique_ptr<UnitTests::CUnitTestResult> OnExecute() override \
		{ \
			return cls ## _OnExecute(); \
		} \
	}; \
	std::unique_ptr<UnitTests::CUnitTestResult> cls ## _OnExecute() \
	{

#define END_UNIT_TEST_CLASS \
		UNIT_TEST_SUCCESS_RESULT \
	}


#define UNIT_TEST_CHECK(expr) \
	if (!(expr)) \
	{ \
		UNIT_TEST_FAILED_RESULT("Bad expression: " # expr) \
	}

#endif // _UNIT_TESTS_DEFINES_HEADER_

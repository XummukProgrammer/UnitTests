#include <UnitTests/UnitTests.hpp>

#include <iostream>

class CFirstTest final : public UnitTests::CUnitTest
{
public:
	CFirstTest(const std::string& TestName)
		: CUnitTest(TestName)
	{
	}
	~CFirstTest() = default;

public:
	std::unique_ptr<UnitTests::CUnitTestResult> OnExecute() override
	{
		std::cout << "First!" << std::endl;
		return std::make_unique<UnitTests::CUnitTestSuccessResult>(GetName());
	}
};

class CSecondTest final : public UnitTests::CUnitTest
{
public:
	CSecondTest(const std::string& TestName)
		: CUnitTest(TestName)
	{
	}
	~CSecondTest() = default;

public:
	std::unique_ptr<UnitTests::CUnitTestResult> OnExecute() override
	{
		std::cout << "Second!" << std::endl;
		return std::make_unique<UnitTests::CUnitTestSuccessResult>(GetName());
	}
};

int main()
{
	UnitTests::CUnitTestsManager testsManager;
	testsManager.AddTest(std::make_unique<CFirstTest>("FirstTest"));
	testsManager.AddTest(std::make_unique<CSecondTest>("SecondTest"));
	testsManager.Execute();
	return 0;
}

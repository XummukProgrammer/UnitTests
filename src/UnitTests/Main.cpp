#include <UnitTests/UnitTests.hpp>

#include <iostream>

class CFirstTest final : public UnitTests::CTestUnit
{
public:
	CFirstTest(const std::string& TestName)
		: CTestUnit(TestName)
	{
	}
	~CFirstTest() = default;

public:
	std::unique_ptr<UnitTests::CTestUnitResult> OnExecute() override
	{
		std::cout << "First!" << std::endl;
		return std::make_unique<UnitTests::CTestUnitSuccessResult>(GetName());
	}
};

class CSecondTest final : public UnitTests::CTestUnit
{
public:
	CSecondTest(const std::string& TestName)
		: CTestUnit(TestName)
	{
	}
	~CSecondTest() = default;

public:
	std::unique_ptr<UnitTests::CTestUnitResult> OnExecute() override
	{
		std::cout << "Second!" << std::endl;
		return std::make_unique<UnitTests::CTestUnitSuccessResult>(GetName());
	}
};

int main()
{
	UnitTests::CTestsManager testsManager;
	testsManager.AddTest(std::make_unique<CFirstTest>("FirstTest"));
	testsManager.AddTest(std::make_unique<CSecondTest>("SecondTest"));
	testsManager.Execute();
	return 0;
}

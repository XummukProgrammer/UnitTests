#include <UnitTests/UnitTests.hpp>

#include <iostream>

class CFirstTest final : public UnitTests::CTestUnit
{
public:
	CFirstTest() = default;
	~CFirstTest() = default;

public:
	bool OnExecute() override
	{
		std::cout << "First!" << std::endl;
		return true;
	}
};

class CSecondTest final : public UnitTests::CTestUnit
{
public:
	CSecondTest() = default;
	~CSecondTest() = default;

public:
	bool OnExecute() override
	{
		std::cout << "Second!" << std::endl;
		return true;
	}
};

int main()
{
	UnitTests::CTestsManager testsManager;
	testsManager.AddTest(std::make_unique<CFirstTest>());
	testsManager.AddTest(std::make_unique<CSecondTest>());
	testsManager.Execute();
	return 0;
}

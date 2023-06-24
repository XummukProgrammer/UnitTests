#include <UnitTests/UnitTests.hpp>

#include <iostream>

BEGIN_UNIT_TEST_CLASS(CFirstTest)
{
	std::cout << "First!" << std::endl;
}
END_UNIT_TEST_CLASS

BEGIN_UNIT_TEST_CLASS(CSecondTest)
{
	std::cout << "Second!" << std::endl;
}
END_UNIT_TEST_CLASS

int main()
{
	BEGIN_UNIT_TESTS
	{
		ADD_UNIT_TEST(CFirstTest)
		ADD_UNIT_TEST(CSecondTest)
	}
	END_UNIT_TESTS

	return 0;
}

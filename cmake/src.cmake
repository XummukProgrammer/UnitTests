
set(FILES_HEADERS
	src/UnitTests/UnitTests.hpp
	src/UnitTests/UnitTestsDefines.hpp
	
	src/UnitTests/Core/UnitTest.hpp
	src/UnitTests/Core/UnitTestsManager.hpp
	
	src/UnitTests/Results/UnitTestResult.hpp
	src/UnitTests/Results/UnitTestSuccessResult.hpp
	src/UnitTests/Results/UnitTestFailedResult.hpp
)

set(FILES_SOURCES
	src/UnitTests/Core/UnitTest.cpp
	src/UnitTests/Core/UnitTestsManager.cpp
	
	src/UnitTests/Results/UnitTestResult.cpp
	src/UnitTests/Results/UnitTestSuccessResult.cpp
	src/UnitTests/Results/UnitTestFailedResult.cpp
)

set(FILES_EXECUTABLE
	src/UnitTests/Main.cpp
)

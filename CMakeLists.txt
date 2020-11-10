CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

include_directories(
	src
	header
	googletest
)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXXX_STANDARD 11)

ADD_EXECUTABLE(test
	src/main.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

include_directories(
	src
	header
)

ADD_EXECUTABLE(test
	src/main.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

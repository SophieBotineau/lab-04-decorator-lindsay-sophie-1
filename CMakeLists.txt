CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
	base.h
	decorator.h
	main.cpp
)

ADD_EXECUTABLE(test
	test.cpp)
TARGET_LINK_LIBRARIES(test gtest)

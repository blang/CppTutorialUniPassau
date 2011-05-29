cmake_minimum_required(VERSION 2.6)
project (Day6Cpp)
ADD_DEFINITIONS(-g -O0 -Wall -Wunused-function -Wuninitialized -Wconversion -Werror)
add_executable (
	MainDay6Cpp
	Main.cpp
	CustomIntVector.cpp
)

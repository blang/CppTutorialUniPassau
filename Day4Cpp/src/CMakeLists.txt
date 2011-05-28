cmake_minimum_required(VERSION 2.6)
project (Day4Cpp)
ADD_DEFINITIONS(-g -O0 -Wall -Wunused-function -Wuninitialized -Wconversion -Werror)
add_executable (
	MainDay4Cpp
	Main.cpp
	FPoint3.cpp
	Cuboid.cpp
	Solid.cpp
	FPoint3Set.cpp
	Sphere.cpp
	TPoint.cpp
)

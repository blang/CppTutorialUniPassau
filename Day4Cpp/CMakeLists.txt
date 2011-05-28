cmake_minimum_required(VERSION 2.6)
project (Day4Cpp)
ADD_DEFINITIONS(-g -O0 -Wall -Wunused-function -Wuninitialized -Wconversion -Werror)
add_executable (
	bin/MainDay4Cpp
	src/Main.cpp
	src/FPoint3.cpp
	src/Cuboid.cpp
	src/Solid.cpp
	src/FPoint3Set.cpp
	src/Sphere.cpp
	src/TPoint.cpp
)

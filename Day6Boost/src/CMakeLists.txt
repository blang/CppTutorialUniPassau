cmake_minimum_required(VERSION 2.6)
project (Day6Boost)
find_package( Boost 1.34 COMPONENTS thread )
link_directories ( ${Boost_LIBRARY_DIRS} )
include_directories ( ${Boost_INCLUDE_DIRS} )
include_directories ( /usr/include )
include_directories ( /usr/local/include )
include_directories ( /usr/lib/gcc/x86_64-pc-linux-gnu/4.4.5/include/g++-v4 )
ADD_DEFINITIONS(-g -O0 -Wall -Wunused-function -Wuninitialized)
add_executable (
	MainDay6Boost
	Main.cpp
	threadplayground.cpp
	TPlayground.cpp
)
target_link_libraries (
    MainDay6Boost
    ${Boost_LIBRARIES}
)

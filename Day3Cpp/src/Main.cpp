#include <iostream>
#include <cstdio>
#include "Exercises.h"
int main(void){

	//Uebung 1
	std::string test1 = "Test1";
	Exercises::printStringNTimes(test1, 10);
	using namespace Exercises;
	using namespace std;
	string test2 = "Test2";
	printStringNTimes(test2, 5);

	//Uebung 2
	string test3 = "Test3";
	duplicate(test3);
	printf("Duplikation mit Referenz ergab: %s\n",test3.c_str());

	string test4 = "Test4";
	duplicate(&test4);
	printf("Duplikation mit Pointer ergab: %s\n",test4.c_str());

	return 0;
}

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

	//Uebung 3
	if(Exercises::arraySize == 0){
		printf("ArraySizepointer zeigt auf Adresse 0\n");
	}else{
		printf("ArraySizepointer zeigt NICHT auf Adresse 0\n");
	}
	printf("Rufe createAndInit mit arraySize auf\n");
	Exercises::createAndInit(Exercises::arraySize);
	if(Exercises::arraySize == 0){
			printf("ArraySizepointer zeigt immernoch auf Adresse 0\n");
	}else{
			printf("ArraySizepointer zeigt NICHT mehr auf Adresse 0 sondern auf %lu\n",(unsigned long) Exercises::arraySize);
			printf("ArraySizepointer hat Wert: %d\n",*Exercises::arraySize);
	}


	printf("ArrayPointer zeigt auf Adresse %lu\n",(unsigned long) Exercises::array);
	Exercises::createAndInit(Exercises::array,10,false);
	printf("Rufe createAndInit ohne Init auf array auf\n");
	printf("ArrayPointer zeigt auf Adresse %lu\n",(unsigned long) Exercises::array);
	printf("ArrayPointer an Stelle 2 zeigt auf Wert %lu\n",(unsigned long) Exercises::array[2]);
	printf("Rufe createAndInit mit Init auf array auf\n");
	Exercises::createAndInit(Exercises::array,10);
	printf("ArrayPointer an Stelle 2 zeigt auf Wert %lu\n",(unsigned long) Exercises::array[2]);
	Exercises::destroy(Exercises::array,true);
	Exercises::destroy(Exercises::arraySize,false);

	return 0;
}

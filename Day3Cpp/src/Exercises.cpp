#include <string>
#include <iostream>
#include <cstdio>
#include "Exercises.h"

//Uebung 1,2
void Exercises::printStringNTimes(std::string s, size_t size){
	unsigned int i = 0;
	for(i = 0; i < size; i++){
		printf("%s\n",s.c_str());
	}
}

void Exercises::duplicate(std::string &s){
	s+=s;
}

void Exercises::duplicate(std::string *sp){
	(*sp)+=(*sp);
}
//Uebung 3
int *Exercises::arraySize = 0;

void Exercises::createAndInit(int *&pointerToIntByReference){
		pointerToIntByReference = new int;
		*pointerToIntByReference = 0;
}
int *Exercises::array = 0;

void Exercises::createAndInit(int *&pointerToArrayByReference, size_t length, bool doInit){
	pointerToArrayByReference = new int[length];
	if(doInit){
		size_t var = 0;
		for (var = 0; var < length; ++var) {
			pointerToArrayByReference[var]=0;
		}
	}
}

void Exercises::destroy(int *&pointertoIntOrIntArrayByReference, bool isArray){
	if(pointertoIntOrIntArrayByReference != NULL){
		if(isArray){
			delete[] pointertoIntOrIntArrayByReference;
		}else{
			delete pointertoIntOrIntArrayByReference;
		}
	}else{
		printf("Fehler, Pointer bereits auf 0");
	}
}






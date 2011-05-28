#include <string>
#include <iostream>
#include <cstdio>
#include "Exercises.h"
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


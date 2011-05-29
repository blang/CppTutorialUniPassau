#include "CustomIntVector.h"
#include <vector>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <algorithm>
CustomIntVector::CustomIntVector() : std::vector<int>(){
	printf("Initialized CustomIntVector()");
}
void CustomIntVector::Sort(SortType type){
	switch(type){
	case ASCENDING:
		std::sort(this->begin(), this->end());
		break;
	case LEX:
		std::sort(this->begin(), this->end(), CustomIntVectorLexComp());
		break;
	case MOD42:
		std::sort(this->begin(), this->end(), CustomIntVectorMod42Comp());
		break;
	default:
		std::sort(this->begin(), this->end());
		break;
	}
}


void CustomIntVector::FillRandom(size_t size) {
	srand((unsigned int) time(NULL));
	for(;size>0;size--){
		this->push_back(rand());
	}
}

bool CustomIntVectorMod42Comp::operator ()(const int &a, const int &b){
	return (a % 42) < (b % 42);
}

bool CustomIntVectorLexComp::operator ()(const int &a, const int &b){
	std::stringstream a_str;
	a_str << a;
	std::stringstream b_str;
	b_str << b;
	return (a_str.str() < b_str.str());
}

void CustomIntVector::WipeOddNumbers(void){
	//size_t is unsigned, decrement to -1 results in positive number!
	size_t i = this->size();
	while(i>0){
		--i;
		printf("v(%lu) = %d \n",(unsigned long) i, (*this)[i]);
		if(this->at(i)%2 != 0){
			this->erase(this->begin()+i);
		}
	}
}

void CustomIntVector::WipeEvenNumbers(void){
	CustomIntVector temp;
	iterator p1,p2;
	for(p1=this->begin();p1 != this->end(); p1++){
		if((*p1) % 2 !=0){
			temp.push_back(*p1);
		}
	}
	this->swap(temp);
}

void CustomIntVector::InsertSquareAfterEachValue(void){
	iterator p1;
	for(p1=this->begin(); p1 != this->end(); p1++){
		p1 = this->insert(++p1, (*p1)*(*p1));
	}
}

std::ostream &operator <<(std::ostream &o, const CustomIntVector &vector){
	unsigned int i = 0;
	for(i = 0; i < vector.size(); i ++){
		if(i>0)
			o << ",";
		o << vector[i];
	}
	return o;
}

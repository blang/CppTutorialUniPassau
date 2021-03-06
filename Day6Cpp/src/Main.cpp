#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <map>
#include "CustomIntVector.h"
int main(void){
	printf("test2");
	CustomIntVector test;
	test.push_back(12);
	test.push_back(24);
	test.push_back(5);
	test.FillRandom(10);
	test.Sort(CustomIntVector::ASCENDING);
	std::cout << "Std: " << test << std::endl;
	CustomIntVector test2;
	test2.push_back(12); // 12
	test2.push_back(2); // 2
	test2.push_back(43); // 1
	test2.Sort(CustomIntVector::MOD42);
	std::cout << "Mod42: "<< test2 << std::endl;

	CustomIntVector test3;
	test3.push_back(119);
	test3.push_back(111);
	test3.push_back(2111);
	test3.push_back(20);
	test3.push_back(2);
	test3.Sort(CustomIntVector::LEX);
	std::cout << "Lex: "<< test3 << std::endl;

	CustomIntVector test4;
	test4.push_back(9);
	test4.push_back(8);
	test4.push_back(7);
	test4.push_back(6);
	test4.push_back(5);
	test4.push_back(4);
	test4.push_back(3);
	test4.push_back(2);
	test4.push_back(1);
	CustomIntVector test5 = test4;
	CustomIntVector test6 = test4;
	test4.WipeOddNumbers();
	test4.Sort();
	std::cout << "Wipe Odd" << test4 << std::endl;

	test5.WipeEvenNumbers();
	test5.Sort();
	std::cout << "Wipe Even" << test5 << std::endl;

	test6.InsertSquareAfterEachValue();
	std::cout << "Square insert" << test6 << std::endl;


	int i = 0;
	std::map<int, double> calculationBuffer;
		std::map<int, int> histogram;
	CustomIntVector randnbr_bit;
	srand((int) time(NULL));
	double sum = 0;
	for(i = 0; i<10000; ++i){
		int nr = rand()&((1<<10)-1); //Other possibility: rand()%((int)pow(2,10))
		sum += sqrt(sqrt(nr));
		randnbr_bit.push_back(nr);
	}
	std::cout << randnbr_bit << std::endl;
	std::cout << "Summe: " << sum << std::endl;


	return 0;
}

#include <cstdio>
#include <iostream>
#include <string>
#include <boost/thread.hpp>
#include "threadplayground.h"
#include "TPlayground.h"

void test3(void){
	std::cout << "ausgabe von thread" <<std::endl;
}

int main (void){
	printf("Main started\n");
	boost::thread t1(threadplayground::myThreadPlayground);
	boost::thread t2(threadplayground::myThreadPlayground);
	t1.join();
	t2.join();
	TPlayground pg1("Manfred","Boost ist cool");
	TPlayground pg2("Ben","Seh ich auch so");
	boost::thread t3(pg1);
	boost::thread t4(pg2);
	t3.join();
	t4.join();
	printf("Main end\n");
	return 0;
}

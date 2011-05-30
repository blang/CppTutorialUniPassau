#include "threadplayground.h"
#include <iostream>
#include <cstdlib>
void threadplayground::myThreadPrints(void){
	std::cout << "myThreadPrints say: hello" << std::endl;
	int i = 0;
	usleep(100+(rand()%300)+1);
	for(i = 1; i< 11; i++){
		usleep((rand()%300)+1);
		std::cout << "myThreadPrints say: " << i << std::endl;
	}
}

void threadplayground::myThreadPlayground(void){
	myThreadPrints();
}

#include "TPlayground.h"
#include <string>
#include <iostream>
#include <cstdlib>
TPlayground::TPlayground(std::string name, std::string msg){
	this->msg = msg;
	this->name = name;
}
void TPlayground::operator ()(){
	//std::cout << "My name is " << this->name << " and my msg is: " << this->msg << std::endl;
	std::cout << this->name <<" says: " << this->msg << std::endl;
	int i = 0;
	usleep(100+(rand()%300)+1);
	for(i = 1; i< 11; i++){
		usleep((rand()%300)+1);
		std::cout << this->name << " says: " << i << std::endl;
	}
	std::cout << this->name <<" stopped" << std::endl;
}

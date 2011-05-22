#include "FPoint3.h"
#include <iostream>
#include <sstream>
#include <string>

int FPoint3::instcount = 0;

FPoint3::FPoint3(void){
	this->Set(0.0, 0.0, 0.0);
	FPoint3::instcount++;
}

FPoint3::FPoint3(double x, double y, double z){
	this->Set(x, y, z);
	FPoint3::instcount++;
}

FPoint3::FPoint3(const FPoint3 &copy){
	*this = copy;
	FPoint3::instcount++;
}
FPoint3::~FPoint3(void){
	FPoint3::instcount--;
}

int FPoint3::getInstanceCount(void){
	return FPoint3::instcount;
}

double FPoint3::GetX(){
	return this->x;
}

double FPoint3::GetY(){
	return this->y;
}

double FPoint3::GetZ(){
	return this->z;
}

void FPoint3::SetX(double x){
	this->x = x;
}
void FPoint3::SetY(double y){
	this->y = y;
}
void FPoint3::SetZ(double z){
	this->z = z;
}
void FPoint3::Set(double x, double y, double z){
	this->SetX(x);
	this->SetY(y);
	this->SetZ(z);
}
void FPoint3::Set(const std::string &string){
	std::istringstream istr(string);
	double x, y, z;
	istr >> x >> y >> z;
	if(istr.fail()){
		std::cout << "Error reading coordinates" << std::endl;
	}else{
		this->Set(x,y,z);
	}
}

std::string FPoint3::toString(std::string delimiter){
	std::ostringstream ostr;
	ostr << x << delimiter << y << delimiter << z;
	return ostr.str();
}


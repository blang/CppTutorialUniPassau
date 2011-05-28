/*
 * Solid.cpp
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */

#include "Solid.h"

Solid::Solid(std::string label) {
	this->label = label;
}

std::string Solid::getLabel(void){
	return this->label;
}

Solid::~Solid() {
	// TODO Auto-generated destructor stub
}

/*
 * Solid.h
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */
#include <string>
#ifndef SOLID_H_
#define SOLID_H_

class Solid {
private:
	std::string label;
public:
	Solid(std::string);
	std::string getLabel();
	virtual ~Solid();
};

#endif /* SOLID_H_ */

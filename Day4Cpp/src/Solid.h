/*
 * Solid.h
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */
#include <string>
#ifndef SOLID_H_
#define SOLID_H_
#include "FPoint3.h"

class Solid {
private:
	std::string label;
public:
	Solid(std::string);
	std::string getLabel();
	virtual double GetDiameter(void) const = 0;
	virtual const FPoint3 &GetCenter(void) const = 0;
	virtual void Enclose(const Solid &) = 0;
	virtual ~Solid();
};

#endif /* SOLID_H_ */

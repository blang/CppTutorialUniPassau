/*
 * Sphere.cpp
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */
#include "Sphere.h"
#include "FPoint3.h"
#include "Solid.h"
Sphere::Sphere(void) : Solid("Unit sphere"){
	this->center = FPoint3();
	this->radius = 1;
}
bool Sphere::Contains(const FPoint3 &point) const{
	return (this->radius - this->center.getDistance(point)) >= 0;
}



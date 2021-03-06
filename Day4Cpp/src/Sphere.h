/*
 * Sphere.h
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */

#ifndef SPHERE_H_
#define SPHERE_H_
#include "Solid.h"
#include "FPoint3.h"
class Sphere : public Solid {
private:
	FPoint3 center;
	double radius;
public:
	Sphere();
	virtual bool Contains(const FPoint3 &) const;
	virtual double GetDiameter(void) const;
	virtual const FPoint3 &GetCenter(void) const;
	virtual void Enclose(const Solid &);

};

#endif /* SPHERE_H_ */

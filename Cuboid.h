/*
 * Cuboid.h
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */

#ifndef CUBOID_H_
#define CUBOID_H_
#include "FPoint3.h"
#include "Solid.h"

class Cuboid : public Solid{
private:
	FPoint3 left_bottom_front;
	FPoint3 right_top_back;
	mutable FPoint3 center;
public:
	Cuboid();
	Cuboid(double x1, double x2, double y1, double y2, double z1, double z2);
	virtual bool Contains(const FPoint3 &) const;
	virtual ~Cuboid();
	virtual double GetDiameter(void) const;
	virtual const FPoint3 &GetCenter(void) const;
	virtual void Enclose(const Solid &);
};

#endif /* CUBOID_H_ */

/*
 * Cuboid.h
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */

#ifndef CUBOID_H_
#define CUBOID_H_
#include "FPoint3.h"

class Cuboid {
private:
	FPoint3 left_bottom_front;
	FPoint3 right_top_back;
public:
	Cuboid(double x1, double x2, double y1, double y2, double z1, double z2);
	virtual bool Contains(const FPoint3 &) const;
	virtual ~Cuboid();
};

#endif /* CUBOID_H_ */

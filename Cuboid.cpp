/*
 * Cuboid.cpp
 *
 *  Created on: 22.05.2011
 *      Author: ben
 */

#include "Cuboid.h"
#include "FPoint3.h"
Cuboid::Cuboid(double x1, double x2, double y1, double y2, double z1, double z2) : Solid("Unit Cuboid"){
	this->left_bottom_front = FPoint3(x1,y1,z1);
	this->right_top_back = FPoint3(x2,y2,z2);
	this->center = FPoint3();
}

bool Cuboid::Contains(const FPoint3 &p) const{
	return (
			this->left_bottom_front.GetX() >= p.GetX() &&
			this->right_top_back.GetX() <= p.GetX() &&
			this->left_bottom_front.GetY() >= p.GetY() &&
			this->right_top_back.GetY() <= p.GetY() &&
			this->left_bottom_front.GetZ() >= p.GetZ() &&
			this->right_top_back.GetZ() <= p.GetZ()
			);
}

Cuboid::~Cuboid() {
}

double Cuboid::GetDiameter(void) const {
	return this->right_top_back.getDistance(this->left_bottom_front)/2;
}
const FPoint3 &Cuboid::GetCenter(void) const {
	this->center = FPoint3(
				this->right_top_back.GetX() - this->left_bottom_front.GetX(),
				this->right_top_back.GetY() - this->left_bottom_front.GetY(),
				this->right_top_back.GetZ() - this->left_bottom_front.GetZ());
	return this->center;
}
void Cuboid::Enclose(const Solid &solid){
	const FPoint3 center = solid.GetCenter();
	double radius = solid.GetDiameter();
	this->center = center;
	this->left_bottom_front.SetX(center.GetX() - radius);
	this->left_bottom_front.SetY(center.GetY() - radius);
	this->left_bottom_front.SetZ(center.GetZ() + radius);
	this->right_top_back.SetX(center.GetX() + radius);
	this->right_top_back.SetY(center.GetY() + radius);
	this->right_top_back.SetZ(center.GetZ() - radius);
}

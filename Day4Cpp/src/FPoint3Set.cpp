/*
 * FPoint3Set.cpp
 *
 *  Created on: 28.05.2011
 *      Author: ben
 */

#include "FPoint3Set.h"
#include "FPoint3.h"
#include <set>

FPoint3Set::FPoint3Set(){

}
bool MyFPoint3Comp::operator() (const FPoint3 &a, const FPoint3 &b) const
{
	if(a.GetX() < b.GetX()){
		return true;
	}else if(a.GetX() > b.GetX()){
		return false;
	}else{
		if(a.GetY() < b.GetY()){
			return true;
		}else if(a.GetY() > b.GetY()){
			return false;
		}else{
			if(a.GetZ() < b.GetZ()){
				return true;
			}else if(a.GetZ() > b.GetZ()){
				return false;
			}else{
				return false;
			}
		}
		return false;
	}
}

bool FPoint3Set::Contains(const FPoint3 &point) const{
	const_iterator s1_AcIter = this->find(point);
	if(s1_AcIter == this->end( )){
		return false;
	}else{
		return true;
	}
}

FPoint3Set::~FPoint3Set() {
	// TODO Auto-generated destructor stub
}


/*
 * FPoint3Set.h
 *
 *  Created on: 28.05.2011
 *      Author: ben
 */

#ifndef FPOINT3SET_H_
#define FPOINT3SET_H_
#include "FPoint3.h"
#include <set>
class MyFPoint3Comp {
public:
	bool operator() (const FPoint3 &a, const FPoint3 &b) const ;
};
class FPoint3Set : public std::set<FPoint3,MyFPoint3Comp>{
public:
	FPoint3Set();
	bool Contains(const FPoint3 &point) const;
	virtual ~FPoint3Set();
};

#endif /* FPOINT3SET_H_ */


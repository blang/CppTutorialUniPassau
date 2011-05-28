/*
 * TPoint.h
 *
 *  Created on: 28.05.2011
 *      Author: ben
 */

#ifndef TPOINT_H_
#define TPOINT_H_
#include <cstring>

template<class CoordType, int Dimension>
class TPoint {
private:
	CoordType coordinates[Dimension];
public:
	TPoint();
	CoordType &operator[](size_t);
	CoordType operator[](size_t) const;
	virtual ~TPoint();
};
template<class CoordType, int Dimension>
TPoint<CoordType,Dimension>::TPoint() {
	int var;
	for (var = 0; var < Dimension; ++var) {
		this->coordinates[var]=CoordType(0);
	}
}

template<class CoordType, int Dimension>
CoordType &TPoint<CoordType,Dimension>::operator[] (size_t pos){
	return this->coordinates[pos];
}

template<class CoordType, int Dimension>
CoordType TPoint<CoordType,Dimension>::operator[] (size_t pos) const{
	return this->coordinates[pos];
}

template<class CoordType, int Dimension>
TPoint<CoordType,Dimension>::~TPoint() {
	// TODO Auto-generated destructor stub
}

#endif /* TPOINT_H_ */

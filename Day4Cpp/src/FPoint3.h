#include <string>

#ifndef FPOINT3_H_
#define FPOINT3_H_
class FPoint3 {
	private:
		double x;
		double y;
		double z;
		static int instcount;
	public:
		FPoint3(void);
		FPoint3(double, double, double);
		FPoint3(const FPoint3 &);
		virtual ~FPoint3(void);
		static int getInstanceCount(void);
		double GetX() const;
		double GetY() const;
		double GetZ() const;
		void SetX(double);
		void SetY(double);
		void SetZ(double);
		void Set(double, double, double);
		void Set(const std::string &);
		std::string toString(const std::string delimiter = ", ") const;
		FPoint3 *base;
		double getDistance(const FPoint3 &) const;
		FPoint3 operator+(const FPoint3 &) const;
		FPoint3 operator-(const FPoint3 &) const;
		double Norm(void) const;
};

//Possible Memory leak because of missing delete.
FPoint3 operator*(double scalar, const FPoint3 &aPoint);

std::ostream &operator<<(std::ostream& o, const FPoint3 &point);


#endif /* FPOINT3_H_ */

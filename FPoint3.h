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
		double GetX();
		double GetY();
		double GetZ();
		void SetX(double);
		void SetY(double);
		void SetZ(double);
		void Set(double, double, double);
		void Set(const std::string &);
		std::string toString(std::string delimiter = ", ");
};
#endif /* FPOINT3_H_ */

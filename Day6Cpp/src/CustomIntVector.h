#ifndef CUSTOMINTVECTOR_H_
#define CUSTOMINTVECTOR_H_
#include <vector>
#include <ostream>
#include <cstring>
class CustomIntVector : public std::vector<int> {
public:
	CustomIntVector();
	void FillRandom(size_t);
	enum SortType {
		ASCENDING,
		MOD42,
		LEX
	};
	void Sort(SortType=ASCENDING);
	void WipeOddNumbers(void);
	void WipeEvenNumbers(void);
	void InsertSquareAfterEachValue(void);
};
std::ostream &operator <<(std::ostream &o, const CustomIntVector &vector);

class CustomIntVectorMod42Comp {
public:
	inline bool operator () (const int&, const int&);
};

class CustomIntVectorLexComp {
public:
	inline bool operator () (const int&, const int&);
};
#endif /* CUSTOMINTVECTOR_H_ */

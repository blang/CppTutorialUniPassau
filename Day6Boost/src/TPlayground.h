#ifndef TPLAYGROUND_H_
#define TPLAYGROUND_H_
#include <string>

class TPlayground {
public:
	TPlayground(std::string, std::string);
	void operator ()();
private:
	std::string msg;
	std::string name;
};

#endif /* TPLAYGROUND_H_ */

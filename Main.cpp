#include "FPoint3.h"
#include <iostream>
int main(void){
	std::cout.precision(15);
	std::cout << "Programm gestartet" << std::endl;
	FPoint3 test1 = FPoint3();
	std::cout << "Standardkonstruktor: " << std::endl;
	std::cout << test1.GetX() << " " << test1.GetY() << " " << test1.GetZ() << std::endl;
	FPoint3 test2 = FPoint3(1.12323, 2.2, 3.3);
	std::cout << "Standardkonstruktor: " << std::endl;
	std::cout << std::fixed << test2.GetX() << " " << std::fixed << test2.GetY() << " " << std::fixed << test2.GetZ() << std::endl;
	std::cout << "Set X, Y, Z" << std::endl;
	test2.SetX(1.9);
	test2.SetY(2.9);
	test2.SetZ(3.9);
	std::cout << std::fixed << test2.GetX() << " " << std::fixed << test2.GetY() << " " << std::fixed << test2.GetZ() << std::endl;
	std::cout << "Instance Counter: " << test2.getInstanceCount() << std::endl;
	std::cout << "Neue Instanz t3: " << std::endl;
	FPoint3 test3 = FPoint3(test2);
	test3.Set("1.2 2.3 3.4");
	test3.SetZ(2.123);
	std::cout << std::fixed << test3.GetX() << " " << std::fixed << test3.GetY() << " " << std::fixed << test3.GetZ() << std::endl;
	std::cout << "toString: " << std::endl << test3.toString() << std::endl << test3.toString("-") << std::endl;

	std::cout << "Programm beendet" << std::endl;
}


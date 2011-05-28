#define _USE_MATH_DEFINES
#include "FPoint3.h"
#include "Sphere.h"
#include "Cuboid.h"
#include "TPoint.h"
#include <iostream>
#include <math.h>
#include "FPoint3Set.h"
int main(void){
	{
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

		std::cout << "Aufgabe 25" << std::endl;
		FPoint3 test4 = FPoint3(M_E,M_PI,M_SQRT2);
		std::cout << "Ergebnis von e, pi, sqrt2: " << test4.toString() << std::endl;
		FPoint3 *test5 = new FPoint3(test4);
		delete test5;
		FPoint3 *test6 = new FPoint3(test4);
		FPoint3 *testarr =  new FPoint3[3];
		testarr[0]=FPoint3(1.0,0.0,0.0);
		testarr[1]=FPoint3(0,1,0);
		testarr[2]=FPoint3(0,0,1);
		test6->base = testarr;
		std::cout << "Instance Counter: " << test2.getInstanceCount() << std::endl;
		delete test6;
	}
	Sphere sp;
	FPoint3 point1 = FPoint3(1/M_SQRT2,1/sqrt(3),1/sqrt(5));
	std::cout << "Einheitskreis enthält point1 " << (sp.Contains(point1)?"ja":"nein") << std::endl;
	FPoint3 point2 = FPoint3(0,0,0);
	std::cout << "Einheitskreis enthält point2 " << (sp.Contains(point2)?"ja":"nein") << std::endl;
	FPoint3 point3 = FPoint3(0,0,1);
	std::cout << "Einheitskreis enthält point3 " << (sp.Contains(point3)?"ja":"nein") << std::endl;
	FPoint3 point4 = FPoint3(1/sqrt(3),1/sqrt(3),1/sqrt(3));
	std::cout << "Einheitskreis enthält point4 " << (sp.Contains(point4)?"ja":"nein") << std::endl;

	std::cout << "Instance Counter: " << FPoint3::getInstanceCount() << std::endl;

	Sphere s1 = Sphere();
	std::cout << "Center of Sphere: " << s1.GetCenter().GetX() << "," <<  s1.GetCenter().GetY() << "," << s1.GetCenter().GetZ() << std::endl;
	std::cout << "Diameter of Sphere: " << s1.GetDiameter() << std::endl;
	std::cout << "Name of Sphere: " << s1.getLabel() << std::endl;
	Cuboid c1 = Cuboid(0, 10, 0, 10, 0, 10);
	std::cout << "Center of Cuboid: " << c1.GetCenter().GetX() << "," <<  c1.GetCenter().GetY() << "," << c1.GetCenter().GetZ() << std::endl;
	std::cout << "Diameter of Cuboid: " << c1.GetDiameter() << std::endl;
	std::cout << "Name of Cuboid: " << c1.getLabel() << std::endl;
	//Operatoren testen
	FPoint3 testPoint = FPoint3(1.0,2.2,3.4);
	std::cout << "Test von Punkt testPoint: " << testPoint <<std::endl;
	std::cout << "Test von Addition: " << testPoint+testPoint <<std::endl;
	std::cout << "Test von Skalarmultiplikation: " << 5*testPoint << std::endl;
	std::cout << "Test von Norm: " << testPoint.Norm() << std::endl;


	//Abfrage durch User
	std::cout << "Eingeben:" << std::endl;
	std::string eingabe;
	std::cin >> eingabe;
	std::cout << "Eingabe war: " << eingabe << std::endl;
	Solid *solid = NULL;
	Solid *solid_en = NULL;
	if(eingabe.compare("sphere") == 0){
		solid = new Sphere();
		solid_en = new Cuboid();
		solid_en->Enclose(*solid);
		std::cout << "Sphere von Cuboid umschlossen" << std::endl;
		FPoint3 center = solid_en->GetCenter();
		std::cout << "Cuboid: " << solid_en->getLabel() << " hat Mittelpunkt: " << center.toString() <<  " und Durchmesser: " << solid_en->GetDiameter() << std::endl;
		delete solid;
		delete solid_en;
	}else if(eingabe.compare("cuboid") == 0){
		solid = new Cuboid();
		solid_en = new Sphere();
		solid_en->Enclose(*solid);
		std::cout << "Sphere von Cuboid umschlossen" << std::endl;
		FPoint3 center = solid_en->GetCenter();
		std::cout << "Sphere: " << solid_en->getLabel() << " hat Mittelpunkt: " << center.toString() << " und Durchmesser: " << solid_en->GetDiameter() << std::endl;
		delete solid;
		delete solid_en;
	}else{
		std::cout << "Eingabe nicht erkannt: " << eingabe << std::endl;
	}

	// FPoint benutzen
	TPoint<int,2> tpoint = TPoint<int,2>();
	tpoint[0]=2;
	std::cout << "Punkt = " << tpoint[0] << "," << tpoint[1] << std::endl;
	TPoint<double, 3> tpointdouble = TPoint<double, 3>();
	tpointdouble[0]=M_E;
	tpointdouble[1]=M_PI;
	tpointdouble[2]=M_SQRT2;
	std::cout << "Punkt = " << tpointdouble[0] << "," << tpointdouble[1] << "," << tpointdouble[2] << std::endl;
	std::cout << "Programm beendet" << std::endl;
	MyFPoint3Comp comp;
	comp(point1,point2);

}


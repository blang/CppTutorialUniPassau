/*
 * Exercises.h
 *
 *  Created on: 28.05.2011
 *      Author: ben
 */

#ifndef EXERCISES_H_
#define EXERCISES_H_
namespace Exercises {
	void printStringNTimes(std::string, size_t);
	void duplicate(std::string &);
	void duplicate(std::string *);
	//Uebung 3
	extern int *arraySize;
	void createAndInit(int *&pointerToIntByReference);
	extern int *array;
	void createAndInit(int *&pointerToArrayByReference, size_t length, bool doInit = true);
	void destroy(int *&pointertoIntOrIntArrayByReference, bool isArray);

}

#endif /* EXERCISES_H_ */

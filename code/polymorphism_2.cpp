/*
	James Patterson - C++ Tutorial - 19 - Polymorphism_2
*/
//
#include "stdafx.h"
// used for proper input/output streams
#include <iostream>
// used for proper file streams
#include <fstream>
// strings
#include <string>
// vectors
#include <vector>

// This is required to ensure you are using the std namespace
using namespace std;

// Let's take a closer look at how polymorphism works
class Vehicle
{
public:
	// let's use abstract data types
	// they stand out because they are initialized to 0
	// they act as the base to other classes
	// remember, a purely virtual method must be overwritten by subclasses
	virtual int year() = 0;
	virtual int getNumberWheels() = 0;
	virtual int getNumberOfDoors() = 0;
};

class Motorbike : public Vehicle
{
public:
	int year() { cout << "2008 Honda Shadow" << endl; return 0; }
	int getNumberWheels() { cout << "Motorbikes usually have only 2 wheels" << endl; return 0;}
	int getNumberOfDoors() { cout << "Motorbikes do not have doors." << endl; return 0;}
	Motorbike() {};
	~Motorbike() {};
};

class Car : public Vehicle
{
public:
	int year() { cout << "2004 Ford Mustang" << endl; return 0;}
	int getNumberWheels() { cout << "Mustang has 2 doors" << endl; return 0;}
	int getNumberOfDoors() { cout << "Mustang has 4 wheels." << endl; return 0;}
	Car() {};
	~Car() {};
};


int main()
{
	Vehicle* car = new Car();
	Vehicle* motorBike = new Motorbike();

	car ->getNumberOfDoors();

	cout << endl;

	car->getNumberWheels();

	cout << endl;

	motorBike->getNumberOfDoors();

	cout << endl;

	motorBike->getNumberWheels();

	cout << endl;


	system("PAUSE");

	return(0);
}

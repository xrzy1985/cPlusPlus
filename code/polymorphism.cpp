/*
	James Patterson - C++ Tutorial - 18 - Polymorphism
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

class Animal
{
public:
	void getFamily() { cout << "We are animals " << endl; }

	// declaring the getClass as virtual means that we know the Animal
	// class will be a base class that may be overwritten
	// virtual will just check the heirarchy, without virtual before void
	// the file will run, and I'm an animal would print even if it was a Dog class object
	// c++ still reverts back to the superclass. SO, put virtual before methods
	// you expect will change, such as the dollowing.

	// void getClass() { cout << "I'm an animal, baby " << endl; }
	virtual void getClass() { cout << "I'm an animal, baby " << endl; }
	virtual void makeSound() { cout << "The Animal says GRRR."; }
};



// We will see how this will result in a problem
void whatClassAreYou(Animal *animal)
{
	animal->getClass();
}



// a subclass of Animal : Dog
// Will inherit getFamily and getClass
// but getClass will be over written
class Dog : public Animal
{
public:
	void getClass() { cout << "I'm a dog." << endl; }
	void makeSound() { cout << "The dog says Woof."; }
};



// a subclass of Animal : Cat
// Will inherit getFamily and getClass
// but getClass will be over written
class Cat : public Animal
{
public:
	virtual void getClass() { cout << "I'm a cat." << endl; }
	void makeSound() { cout << "The cat says Meow."; }
};



// a subclass of Dog : GermanShepard
// Will inherit getFamily and getClass
// but getClass will be over written
class GermanShepard : public Dog
{
public:
	void getClass() { cout << "I'm a German Shepard" << endl; }
	void getSuperClass() { cout << "I'm an Animal and a Dog" << endl; }
};



int main()
{
	// create animal class that equals a new animal
	Animal *animal = new Animal;

	// create a dog class
	Dog *dog = new Dog;

	//
	animal->getClass();
	dog->getClass();

	// These will return what we programmed cout to print inside of each classes option
	whatClassAreYou(animal);
	whatClassAreYou(dog);

	cout << "\n" << endl;

	//=========================================================================================

	// Let us create a generic Animal object named purrpurr (cat)
	Animal purrpurr;
	// Dog object named doggo
	Dog doggo;
	// GermanShepard object named marlow
	GermanShepard marlow;

	// Base class methods can call super class methods as long as they exist in the base class as well

	// Create an Animal pointer that is equal to the cat purrpurr by reference use the &
	Animal* ptrAnimal = &purrpurr;
	Animal* ptrDog = &doggo;

	//Here we will create a GermanShepard object pointer that is set by reference to the GermanShepard object marlow
	GermanShepard* ptrGermanShepard = &marlow;

	// getFamily was not overwritten in any other classes
	ptrAnimal->getFamily();
	ptrAnimal->getClass();

	cout << "\n" << endl;

	ptrDog->getFamily();
	ptrDog->getClass();

	cout << "\n" << endl;

	ptrGermanShepard->getFamily();
	ptrGermanShepard->getClass();
	// calling getSuperClass only works because we declared the ptr as a GermanShepard objcet
	// it wouldn't have worked if we made the ptr an Animal* because Animal does not have
	// the getSuperClass() method we wrote
	ptrGermanShepard->getSuperClass();

	cout << "\n" << endl;

	// create a ptr that equals a new Cat object
	Animal* ptrCat = new Cat;
	// create a ptr that equals a new dog object
	Animal* ptrDog2 = new Dog;

	// polymophism allows you to inherit from super classes while allowing you to override
	// the superclass within the subclass. Just make sure the function you have written in your
	// super class is set to virtual, meaning it will possibly be changed or overwritten
	ptrCat->makeSound();

	cout << endl;

	ptrDog2->makeSound();

	cout << endl;

	system("PAUSE");

	return(0);
}

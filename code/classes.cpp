/*
	James Patterson - C++ Tutorial - 17 - Classes
	Classes the the blueprints for modeling a computer generated version of a real life thing
	Real world objects have attributes, classes have members/variables
	Real world objects have abilities, classes have methods/functions
	Classes rely on hiding data (encapsulating) from outside code
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

	//anything marked private will only be able to be changed by functions
	// within my class
	// encapsulation
private:
	string name;
	int age;
	double weight;

	// static means the variables value will be shared with every object ever created by class Animal
	// static variables are normally variables/attributes the normal variables would not have
	// for instance, the number of animals ever created.
	static int numOfAnimals;

public:

	// define the getters and setters
	string getName() { return name; }
	int getAge() { return age; }
	double getWeight() { return weight;  }

	void setName(string n) { name = n; }
	void setAge(int a) { age = a; }
	void setWeight(double w) { weight = w; }

	// we can use setAll to set the values for our current object
	// void setAll(string, int, double);

	// constructor
	Animal(string, int, double);

	// Destructor
	~Animal();

	// Overloading Constructor
	Animal();

	// Protected will be available to only members of a class/subclass but no one else


	//
	static int getNumOfAnimals() { return numOfAnimals; }

	//
	void toString();

};

//==================================================================================================================

int Animal::numOfAnimals = 0;
/*
	setAll does not need to be here at all
	it is just another way you could actually set the values inside of your object

void Animal::setAll(string n, int a, double w)
{
	// the follow is saying that the current object (this object we are dealing with)
	// the name, age, and weight will be set to what we pass in as values to the function
	this -> name = n;
	this -> age = a;
	this -> weight = w;
	Animal::numOfAnimals++;
}
*/

// Animal is our constructor, constructors have the same name as your class name
// the constructor builds the object for you, applying the values you pass in to
// the current object being created
Animal::Animal(string n, int a, double w)
{
	// the current object(this)'s name equals the value being passed in
	this->name = n;
	this->age = a;
	this->weight = w;
	Animal::numOfAnimals++;
}

// Deconstructor to remove the current object
Animal::~Animal()
{
	cout << "The Animal object named " << this->name << " will be destroyed." << endl;
}

// Animal constructor (null object)
Animal::Animal()
{
	// Nothing is happening because we've created a NULL object
	Animal::numOfAnimals++;
}

// to print out the information
void Animal::toString()
{
	// remember that we can drop down to the next line in C++ no problem
	cout << this->name << " is " << this->age
		<< " years old and weighs in at " << this->weight << " lbs." << endl;
}

// Now let's create a subclass of Animal; Dog
class Dog : public Animal
{
// Attributes that all Dogs will possess
private:
	string bark = "Woof Woof";

// Now declare your methods/functions
public:
	void getBark() { cout << bark << endl;}

	// Create Dog constructor/prototype
	Dog(string, int, double, string);

	// null/default Dog constructor
	Dog() : Animal() {};

	// Over write toString
	void toString();

};

// This is using the Dog class constructor method to create a new Dog, which is an Animal
// The constructor will use the Animal super class to create the name, age, and weight of the Animal
// but the Dog class constructor will handle the addition of the bark

Dog::Dog(string n, int a, double w, string b) : Animal(n, a, w) { this->bark = b; }

//
void Dog::toString()
{
	cout << this->getName() << " is " << this->getAge()
		<< " years old and weighs " << this->getWeight()
		<< " lbs and likes to " << this->bark << endl;
}






//=================================================================================================================


int main()
{
	// Next we will create a Animal object named doggo
	// this is the manual submission way
	Animal dog;
	dog.setName("Doggo");
	dog.setAge(3);
	dog.setWeight(24.8);

	cout << dog.getName() << " is " << dog.getAge() << " years old and weighs " << dog.getWeight()
		<< " lbs." << endl;

	//=============================================================================================================

	// next we will use the Animal constructor we created
	Animal cat("PurrPurr", 10, 6.3);

	cout << cat.getName() << " is " << cat.getAge() << " years old and weighs " << cat.getWeight()
		<< " lbs." << endl;

	//==============================================================================================================

	Dog buster("Buster", 12, 58.9, "Ruff Ruff");

	cout << "Number of Animals that have been created: " << Animal::getNumOfAnimals() << endl;

	buster.getBark();

	dog.toString();
	cat.toString();
	buster.toString();

	cout << "\n";

	// we can call a superclass function within our Dog class
	buster.Animal::toString();

	Dog marlow("Marlow", 7, 13.4, "Woof");

	cout << "Now the number of animals: " << Animal::getNumOfAnimals() << "\n" << endl;

	//==============================================================================================================

	system("PAUSE");

	return(0);
}

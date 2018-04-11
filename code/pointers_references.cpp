
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 16 - Pointers/References
*/
//
#include "stdafx.h"
// used for proper input/output streams
#include <iostream>
// used for proper file streams
#include <fstream>
// strings
#include <string>
//
#include <vector>

// This is required to ensure you are using the std namespace
using namespace std;

// When we pass a variable to a function that is passing by VALUE
// meaning you are only passing the value, and not actually changing the original value
// When you pass a pointer to a function you are passing by REFERENCE
// Meaning that you are passing the original value that can be changed

void makeMeYoung(int* age)
{
	cout << "I use to be " << *age << endl;

	*age = 18;
}

//
void actYourAge(int& age)
{
	age = 30;
}


int main()
{
	int age = 30;

	char grade = 'A';

	// the age will take up 4 bytes
	cout << "Size of the int " << sizeof(age) << endl;
	// while the char will only take up 1 byte
	cout << "Size of the char " << sizeof(char) << endl;

	// You can access the actual memory location using the following code
	cout << "the age variable is located at " << &age << endl;

	// the location will come in handy when thinking about pointers
	// pointers are placeholder variables
	// they are a variable with their own memory location, but any values
	// they hold are given to them directly from the variables they are pointing at
	// So, let's create a pointer to age

	// dataType* name = (reference to)&variablePointedTo
	int* agePtr = &age;

	// &age will give you the address of the age variable
	cout << "Address of age : " << &age << endl;

	// the & is telling c++ that you want the memory location of the variable following
	cout << "Address of the age pointer : " << &agePtr << endl;

	cout << "Value inside of age : " << age << endl;

	// Make sure to specifically use the * when accessing a pointer
	cout << "Value held by age pointer : " << *agePtr << endl;

	// Pointers hold whatever value the variable they are pointed at holds
	age = 32;

	// Changing the age will change the value of *agePtr
	cout << "Value inside of age : " << age << endl;

	cout << "Value held by age pointer : " << *agePtr << endl;

	// Let us take a look at how arrays and pointers work together
	// a simple int array with 5 numbers
	int numbers[5] = { 16, 24, 23, 32, 69 };
	int numbers2[5] = { 1, 2, 3, 32, 6 };

	// create a pointer to the numbers array
	int* numArrayPtr = numbers;
	int* numArrayPtr2 = numbers2;

	// Print out the address of the array with the default value for the ptr
	cout << "Address of array: " << numArrayPtr << " Value: " << *numArrayPtr << endl;

	// increment the pointer
	numArrayPtr++;

	// we now get the next value in the array
	cout << "Address of array: " << numArrayPtr << " Value: " << *numArrayPtr << endl;

	// I have created a numArray2 along with the original for this example
	// this for loop will print off the memory location and value inside of each pos in array2
	for (int i = 0; i < 5; i++)
	{
		cout << "Address of array2: " << numArrayPtr2 << " Value: " << *numArrayPtr2 << endl;
		numArrayPtr2++;
	}

	// Arrays are basically pointers
	// we have not created the *numbers pointer, yet it works with this example
	cout << "Address of array : " << numbers << " Value : " << *numbers << endl;

	// This is how you would pass by REFERENCE
	makeMeYoung(&age);

	cout << "I'm now " << age << " years old." << endl;

	// We are making a variable with the reference to age
	// meaning if we increment or change ageRef
	// age will show the difference
	int& ageRef = age;

	cout << "age : " << age << endl;

	ageRef++;

	cout << "age : " << age << endl;

	// the function above using passing by reference
	actYourAge(ageRef);

	cout << "age : " << age << endl;

	/*

	- Use pointers whenever you don't need to change what you are pointing at
		if you dont want to initialize at declaration
		ability to assign another variable to the pointer
	- Use references when you only need to point/change one value
		the one reference will get the one variable
			with the one value and be stuck with it

	*/

	system("PAUSE");

	return(0);
}


// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 7 - Arrays
*/
//
#include "stdafx.h"
// used for proper input/output streams
#include <iostream>
// used for proper file streams
#include <fstream>
// strings
#include <string>

// This is required to ensure you are using the std namespace
using namespace std;

int main()
{
	int randomNum = (rand() % 100) + 1;

	cout << randomNum;

	cout << "\n" << endl;

	// Let us see how many numbers would be generated in order to randomly get a 100

	int start = 0;

	// This is saying ... While randomNum does not equal 100
	// Do the following code, but once randomNum does equal
	// 100, kick the user out of the loop
	while (randomNum != 100)
	{
		// Will print the number if it is not 101
		cout << randomNum << ", ";
		// this will redefine a new random number each iteration
		randomNum = (rand() % 100) + 1;
		// Increment start by 1 to see how many iterations it took
		start++;

	}
	cout << randomNum << "\n" << endl;

	cout << "The random generator took " << start << " iterations to produce a 100" << endl;

	system("PAUSE");

	return(0);
}

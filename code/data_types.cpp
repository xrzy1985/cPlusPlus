
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 2 - Data Types
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

	string hW = "Hello World";

	// constants are named with capital letters

	// strings
	const string FIRST_NAME = "James";
	const string LAST_NAME = "Patterson";

	// char will take up one byte in memory
	char myMiddleInitial = 'E';

	// boolean
	bool isEmployed = true;

	// integer values
	int myAge = 32;

	// float - accurate up to 6 decimal places
	float myPi = 3.141592;

	// double - accurate up to 15 decimal places
	const double PI = 3.1415926535;

	// Do be mindful of your specific data types. If you have large numbers, it is best to use double
	// or even large int values instead of possibly losing data.

	/*
	Additional Data Types

		short int : 16 bits
		long int  : 32 bits
		long long int : 64 bits
	*/

	// We will print out my first middle and last name
	cout << "Name: " << FIRST_NAME << " " << myMiddleInitial << " " << LAST_NAME << " \n" << endl;
	cout << "I am " << myAge << " years old. \n" << endl;
	if (isEmployed == 1)
	{
		cout << "It is true that I am employed. \n" << endl;
	}
	else {
		cout << "HELP ME" << endl;
	}
	cout << "One of my favorite numbers is PI: " << PI << ".\n" << endl;

	// If we need to find the size of a value
	cout << "Size of string: " << sizeof(hW) << endl;
	cout << "Size of string-first-name: " << sizeof(FIRST_NAME) << endl;
	cout << "Size of string-last-name: " << sizeof(LAST_NAME) << endl;
	cout << "Size of boolean: " << sizeof(isEmployed) << endl;
	cout << "Size of int: " << sizeof(myAge) << endl;
	cout << "Size of float: " << sizeof(myPi) << endl;
	cout << "Size of constant double: " << sizeof(PI) << endl;

	system("PAUSE");

	return(0);
}

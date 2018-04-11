
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 3 - Arithmetic
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

	/*

		Addition
		Subtraction
		Multiplication
		Division
		Modulus : Returns the remainder of division
		Incremental/Decremental

	*/

	cout << "10 + 2 = " << 10+2 << endl;
	cout << "10 - 2 = " << 10 - 2 << endl;
	cout << "10 * 2 = " << 10 * 2 << endl;
	cout << "10 / 2 = " << 10 / 2 << endl;
	cout << "13 % 5 = " << 13 % 5 << endl;
	myAge++;
	cout << "myAge++ = "<< myAge << endl;
	myAge--;
	cout << "myAge-- = " << myAge << endl;

	// short hand for adding and setting equal to is the following
	int five = 5;
	five += 6;
	// The statement above is saying to add 6 to five and set five equal to the new value
	// The end result should read 11

	cout << "\n" << five << "\n" << endl;

	// Order of Operations : * or / will be performed before + or -

	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "\n"  << endl;
	cout << "(1 + 2 - 3) * 2 =  " << (1 + 2 - 3) * 2 << endl;

	cout << "\n" << endl;

	// Notice how the following two cout statements react
	cout << "4/5 = " << 4 / 5 << endl;
	cout << "4/5 = " << (float)4 / 5 << endl;

	// one will read 0 while the other will read 0.8, this is due to c++ assuming the number
	// will be a integer. You must cast the number as a float if you want the decimal places

	cout << "\n" << endl;

	system("PAUSE");

	return(0);
}

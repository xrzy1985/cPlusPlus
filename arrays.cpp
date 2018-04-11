
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
	int even[5];

	// array[numberOfItemsInArray] = {Index 0, Index 1...);
	int odd[5] = { 1, 3, 5, 7, 9 };

	cout << "The first odd number: " << odd[0] << endl;

	// Let us take a look at creating arrays with strings
	string names[3] = { "James", "Earl", "Patterson" };

	cout << "My name is " << names[0] << " " << names[1] << " " << names[2] << endl;

	// Let us look at char arrays that are also multidimensional arrays
	char myCar[4][7] = { {'F', 'O', 'R', 'D'}, {'M', 'U', 'S', 'T', 'A', 'N', 'G'} };

	// Find the 2nd char in the 1st array and the last letter of the 2nd array
	cout << "I am an " << myCar[0][1] << myCar[1][6] << endl;

	cout << "The old value in myCar[0][2] is " << myCar[0][2] << endl;

	myCar[0][2] = 'r';

	cout << "The new value in myCar[0][2] is " << myCar[0][2] << endl;

	system("PAUSE");

	return(0);
}

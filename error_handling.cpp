
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 15 - Error Handling
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

int main()
{
	// We will use the old division by zero trick
	// The number will be set to 0, you cannot divide by zero (undefined)
	int number = 0;

	// a try block
	try
	{
		// If the number does not equal 0
		if (number != 0)
		{
			// the number will be used to divide by
			cout << 2 / number << endl;
		}
		else
		{
			// throw will send the code to the catch block with the number
			throw(number);
		}
	}
	catch (int number)
	{
		// Here we will print the number is not valid
		cout << number << " is not valid. " << endl;
	}


	system("PAUSE");

	return(0);
}


// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 4 - If Statements with Comparison/Logical Operators
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
	/*

		==	Equal to
		!=	Not Equal to
		>	Greater than
		<	Less than
		>=	Greater than or equal to
		<=	Less than or equal to
		&&	AND
		||	OR
		!	NOT

	*/

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if ((age >= 1) && (age < 16))
	{
		cout << "You can't drive, mate.";
	}
	else if (!isNotIntoxicated)
	{
		cout << "You definitely cannot drive, mate." << endl;
	}
	// If you're 80 or higher, or it has been 5 years since your last exam
	else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5)))
	{
		cout << "You cannot drive until you take a new exam, mate." << endl;
	}
	else
	{
		cout << "You can drive, mate." << endl;
	}

	system("PAUSE");

	return(0);
}

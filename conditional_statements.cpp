
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 6 - Comparison statements
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
	// variable = (condition) ? valueIfTrue : valueIfFalse
	int largestNumber = (5 > 2) ? 5 : 2;

	cout << "Which is the largest number; 5 or 2?    " << largestNumber << endl;

	cout << "\n" << endl;

	int gradeA = 98;
	int gradeB = 90;

	// The comparison can be made with multipe statements
	// but the basic concept is (conditional) ? ifTrueValue : ifFalseValue
	int ans = (gradeA < gradeB) ? 1 : 0;

	cout << "Is the first grade higher than the second? (1 for yes, and 0 for no) " << ans << endl;

	system("PAUSE");

	return(0);
}

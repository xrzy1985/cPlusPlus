
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 13 - Functions
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

// this is the simplest function I could think to start with
// void means you will not return anything
// helloWorld is just a name for the function and the parenthesis are null
// So, we will pass nothing into the function
void helloWorld()
{
	cout << "Hello World" << endl;
}

// To define a function prototype, you use the formulat dataType funcName(dataType variablesReceived, +, ..)
// if you are returning a value, you must have the data type before the function name
// if you plan on returning nothing, use void
// you can define a default value for the variable being passed in like this int first = 0
int addNumbers(int a = 4, int b = 21)
{
	int c = a + b;
	cout << c << endl;
	return c;
}

// Here we will OVERLOAD the function
// Overload: to use the same name, but different attributes
int addNumbers(int a, int b, int c)
{
	int d = a + b *c;
	cout << d << endl;
	return d;
}

// Here is an example of recursion within c++
int getFactorial(int a)
{
	// create a variable to hold the sum
	int sum;
	// if the number equals 1, the function is over
	if (a == 1) { sum = 1; }
	// if not, the function is called within itself
	// the number is then decremented and multiplied by itself
	else { sum = getFactorial(a - 1)*a; }
	// the sum is returned when the number has reached 1
	return sum;
}

// I like to use these in testing to distinguish between results easy
void space()
{
	cout << "====================================" << endl;
}

// You can call functions within functions that are not themselves
// This is an easy way to group a set of functions together
// Ideally, you want to write functions to perform one specific task
// This is for tutorial purposes though
void callMathFunctions()
{
	addNumbers();

	addNumbers(1, 2, 4);
}

// A UI mixed function
void yourName()
{
	string response;

	cout << "what is your name? " << endl;

	getline(cin, response);

	cout << "Hello, " << response << endl;
}

int main()
{
	space();

	helloWorld();

	space();

	addNumbers();

	addNumbers(1, 2, 4);

	space();

	cout << getFactorial(3) << endl;

	space();

	callMathFunctions();

	space();

	yourName();

	system("PAUSE");

	return(0);
}

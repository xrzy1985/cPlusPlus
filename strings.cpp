
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
	char sir[5] = { 'M', 'r', '.', ' ', '\0'};

	string myName = "James Patterson";

	// You can use the << or the +
	cout << sir + myName << endl;
	// Becareful with the + though, it can be overridden easily. Therefor, you cannot
	// print out an empty space like this
	// cout << sir + " " + myName << endl; like you would in say Java or python
	cout << sir << myName << endl;

	cout << endl;

	// Always want to define your variables before usage
	string userName;

	cout << "What is your name: " << endl;

	// getline function again
	getline(cin, userName);

	cout << "Hello " << userName << endl;

	cout << "\n" << endl;

	// =============================================================================

	// We will set up a little input output scheme using Euler's constant
	// Define the actual constant value
	double const eConst = 0.57721;
	// define the guess for the input string
	string eGuess;
	// define the double value where we will store the casted string
	double eGuessDouble;

	cout << "Do you know what Euler's Constant is, mate?";

	getline(cin, eGuess);

	// casting the string to a double and storing it @ eGuessDouble
	eGuessDouble = stod(eGuess);

	// if the casted double is the same as our hard coded constant value
	if (eGuessDouble == eConst)
	{
		cout << "You are 100% spot on, mate!" << endl;
	}
	// if not..
	else
	{
		cout << "Nope, you are totally wrong here." << endl;
	}

	//================================================================================

	// Would you like to know the size of your string?

	cout << "The size of your guess is " << eGuess.size() << endl;

	eGuess.append(" was your guess");

	cout << eGuess << endl;

	cout << "Is your string empty? " << endl;

	cout << eGuess.empty() << endl;

	eGuess = "";

	cout << "Is your string empty? " << endl;

	cout << eGuess.empty() << endl;

	//=====================================================================================

	// we can compare two strings as well
	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;	// if it is greater than, 1
	cout << dogString.compare(dogString) << endl;	// if it is equal, 0
	cout << catString.compare(dogString) << endl;	// if it is less than, -1

	//========================================================================================

	cout << "\n" << endl;

	// Let us test assigning other values to strings
	string carMakeModel;

	// asking for input
	cout << "What kind of car do you own? " << endl;

	// getline will handle our user input
	getline(cin, carMakeModel);

	cout << "So, you drive a " << carMakeModel << endl;

	// this is assigning the value of carMakeMondel to car
	string car = carMakeModel.assign(carMakeModel);

	cout << carMakeModel << endl;

	cout << car << endl;

	// What is the make of your car?

	// This is assigning value to make from the car string
	// the make will hold the char's from 0 to 4 in the car string
	string make = car.assign(car, 0, 4);

	cout << make << endl;

	// the following code requires you to change the car model or type in ford mustang
	// Lets find the index of the M in mustang

	int modelIndex = carMakeModel.find("mustang", 0);

	cout << "The index of the M in Mustang is " << modelIndex << endl;

	cout << "\n";

	//========================================================================

	// Lets say you wanted to insert something into a string

	string programmer = "James Patterson";

	// the string has 15 characters, and I want to insert 'Earl" after James
	// So..  insert(starting position, what to insert)
	programmer.insert(6, "Earl ");

	cout << programmer << endl;

	cout << "\n";

	// If we want to erase something
	// erase(starting pos, how many to erase)
	programmer.erase(6, 5);

	cout << programmer << endl;

	cout << "\n";

	// Lets say we want to just replace a part of a string
	// replace (starting pos, how many positions to replace, what to replace it with)
	programmer.replace(0, 5, "Jim");

	cout << programmer << endl;

	cout << "\n";

	system("PAUSE");

	return(0);
}

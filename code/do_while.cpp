
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 10 - Do While Loop
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
	string numberGuessed;
	int actualNumberGuessed = 0;

	do {

		cout << "Guess a number between 1 and 10: ";
		// this is how you get user input
		// getline is a function(source of user input, where will we store it)
		getline(cin, numberGuessed);
		// the getline function will receive a string data type
		// So, we need to cast numberGuessed as an integer value
		// and store the int value in the variable we created just for it; actualNumberGuessed
		actualNumberGuessed = stoi(numberGuessed);
		// print the variable
		cout << actualNumberGuessed << endl;
		// This loop will exit once the user guesses the right number
	} while (actualNumberGuessed != 7);

	// And will automatically print the following statements
	cout << "You win, mate!" << endl;

	system("PAUSE");

	return(0);
}

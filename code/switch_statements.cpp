
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 5 - Switch Statements
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
	int greetingOption = 0;

	switch (greetingOption)
	{

	case 1:
		cout << "Hello" << endl;
		break;

	case 2:
		cout << "Hola" << endl;
		break;

	case 3:
		cout << "Bonjour" << endl;
		break;

	case 4:
		cout << "Hallo" << endl;
		break;

	default:
		cout << "Helllllllo" << endl;

	}

	system("PAUSE");

	return(0);
}

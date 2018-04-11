
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 8 - For Loops
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
	// Let us take a look at creating arrays with strings
	string names[3] = { "James", "Earl", "Patterson" };

	// Let us look at char arrays that are also multidimensional arrays
	char myCar[2][7] = { {'F', 'O', 'R', 'D'}, {'M', 'U', 'S', 'T', 'A', 'N', 'G'} };

	// this will print 1 - 10
	// the first part is setting up the variable you wish to use as a counter
	// the second is telling the counter its limits.. less than or equal to 10
	// the third is the increment of i, to further the progress through the loop
	// you could alternatively start large and decrement down to 1 or 0.

	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}

	cout << "\n" << endl;

	// This next example will use the char array we created earlier

	for (int j = 0; j < 2; j++)
	{
		for (int k = 0; k < 7; k++)
		{
			if (myCar[j][k] == NULL)
			{
				// this will push the progression of the code without really doing anything
				// we just want the loop to pass by array values with nothing in them anyway
				continue;
			}
			else
			{
				cout << myCar[j][k];
			}
		}
		// This will ensure there is a new line between the actual arrays in the multidimensional array
		cout << endl;
	}

	system("PAUSE");

	return(0);
}

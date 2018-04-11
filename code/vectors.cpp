
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 12 - Vectors
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
	// Vectors and arrays and similar
	// A vectors size can change dynamically though

	vector <int> lotteryVector(5);

	int lotteryArray[5] = { 4, 12, 21, 36, 18 };

	// insert our array insert(beginning of vector, array we want to insert, how many numbers to take
	//																				from array
	lotteryVector.insert(lotteryVector.begin(), lotteryArray, lotteryArray+4);

	cout << lotteryVector.at(3) << endl;

	//Let us add another value
	// insert(where to begin, what to insert)
	lotteryVector.insert(lotteryVector.begin() + 5, 45);

	cout << lotteryVector.at(5) << endl;

	// we can add a value on to the end by pushing it onto the vector at the end
	// the vector will automatically resize
	lotteryVector.push_back(16);

	// back() will return the last value in the vector
	cout << "The last value in the vector: " << lotteryVector.back() << endl;

	// pop_back will remove the value in the last slot of the vector
	lotteryVector.pop_back();

	// You can retrieve the last value in the vector using back()
	cout << "The new last value in the vector: " << lotteryVector.back() << endl;

	// YOu can user front() to retrieve the first value in a vector
	cout << "The first value in the vector: " << lotteryVector.front() << endl;

	// returns 0 (false) if it is not empty
	// returns 1 (true) if it is empty
	cout << "Is the vector empty: " << lotteryVector.empty() << endl;

	// You can find out the size in bytes of the vector
	cout << "The size of the vector: " << lotteryVector.size() << endl;

	system("PAUSE");

	return(0);
}

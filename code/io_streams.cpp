
// CTutorial1.cpp : Defines the entry point for the console application.
/*
	James Patterson - C++ Tutorial - 14 - I/O streams
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
	// Let us create a string to write to a file
	string q = "A day without sunshine is like, you know, night";

	// the output stream name("nameoffile.whatever")
	ofstream writer("quote.txt");

	// if the output file cannot write
	if (! writer)
	{
		// return an error message
		cout << "Error" << endl;
		return -1;
	}
	else {

		// push the data onto the variable to be written to file
		writer << q << endl;

		// close the output stream
		writer.close();
	}11mm

	// ios::app - open a stream to add to what is there
	// ios::binary - treat a file like a binary file
	// ios::in - opens a file to read input
	// ios::trunc - default
	// ios::out - open a file to write output

	// the below code will detail how to add to a file (append)
	ofstream writer2("quote.txt", ios::app);

	if (!writer2)
	{
		cout << "ERROR" << endl;
		return -1;
	}
	else {

		writer2 << "\n -Steve Martin" << endl;

		writer2.close();

	}

// The code below will show how to retrieve data from a file using input stream

	// create variable to hold the characters we will read individually
	char letter;

	// the input stream name("file.extension");
	ifstream reader("quote.txt");

	// if the reader cannot read the file
	if (!reader)
	{
		cout << "ERROR" << endl;
		return -1;
	}
	else {

		// loop through the file
		// reading one character at a time
		// until the end of the file has been reached
		for (int i = 0; !reader.eof(); i++)
		{
			reader.get(letter);
			cout << letter;
		}

		cout << endl;
		reader.close();
	}

	system("PAUSE");

	return(0);
}

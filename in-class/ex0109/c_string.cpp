/*************************************************************************
 *
 * In-Class Exercise: C-Strings
 *
 * File Name: c_string.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 */

#include <iostream> // for cin and cout
#include <cstring>  // for strlen
using namespace std;

// function prototype (declaration)
void countThings(char cString[], int &alphaCount, int &digitCount, int &punctCount);

/*====================================================================
 * Main program
 */
int main() {

	//	FIRST EXERCISE

	// define variables
	char firstName[20], lastName[20], lastCommaFirst[40];
	int size;
	bool flag;

	// collect user input
	cout << "Enter your first and last name separated by a space: ";
	cin >> firstName >> lastName;
	cout << "First name is: " << firstName << endl;
	cout << "Last name is:  " << lastName << endl;

	// TODO: combine into new variable as "Last, First"

	cout << "Full name is:  " << lastCommaFirst << endl;


	// TODO: calculate name length

	cout << "Name size is:  " << size << endl;


	// TODO: compare first and last names for being the same

	if (flag) {
		cout << "What were your parents thinking!?" << endl;
	} else {
		cout << "Not so confusing!" << endl;
	}


	//	SECOND EXERCISE

	// define variables
	int letters = 0, digits = 0, punctuation = 0;
	char theString[] = "The 33rd was crazy, man!";

	// TODO: call function to count things

	cout << endl << "SECOND EXERCISE" << endl;
	cout << "The string has " << letters << " letters." << endl;
	cout << "The string has " << digits << " digits." << endl;
	cout << "The string has " << punctuation << " punctuation characters." << endl;

    return 0;
}

// TODO: Define (implement) the countThings() function


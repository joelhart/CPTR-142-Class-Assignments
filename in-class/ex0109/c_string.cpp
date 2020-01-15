/*************************************************************************
 *
 * In-Class Exercise: C-Strings
 *
 * File Name: c_string.cpp
 * Username:  hartjo
 * Username:  fairka
 * Course:    CPTR 142
 */

#include <cstring>  // for strlen
#include <iostream> // for cin and cout
using namespace std;

// function prototype (declaration)
void countThings(char cString[], int &alphaCount, int &digitCount,
                 int &punctCount);

/*====================================================================
 * Main program
 */
int main() {

<<<<<<< HEAD
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
=======
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
    strcpy(lastCommaFirst, lastName);
    strcat(lastCommaFirst, ", ");
    strcat(lastCommaFirst, firstName);
	cout << "Full name is:  " << lastCommaFirst << endl;
>>>>>>> upstream/master

  // TODO: combine into new variable as "Last, First"
  strcpy(lastCommaFirst, lastName);
  strcat(lastCommaFirst, ", ");
  strcat(lastCommaFirst, firstName);

<<<<<<< HEAD
  cout << "Full name is:  " << lastCommaFirst << endl;

  // TODO: calculate name length
  size = strlen(lastCommaFirst);
=======
	// TODO: calculate name length
    size = strlen(lastCommaFirst);
	cout << "Name size is:  " << size << endl;
>>>>>>> upstream/master

  cout << "Name size is:  " << size << endl;

<<<<<<< HEAD
  // TODO: compare first and last names for being the same
  flag = strcmp(firstName, lastName);

  if (!flag) {
    cout << "What were your parents thinking!?" << endl;
  } else {
    cout << "Not so confusing!" << endl;
  }
=======
	// TODO: compare first and last names for being the same
    flag = strcmp(firstName, lastName) == 0;
	if (flag) {
		cout << "What were your parents thinking!?" << endl;
	} else {
		cout << "Not so confusing!" << endl;
	}
>>>>>>> upstream/master

  //	SECOND EXERCISE

  // define variables
  int letters = 0, digits = 0, punctuation = 0;
  char theString[] = "The 33rd was crazy, man!";

  // TODO: call function to count things
  countThings(theString, letters, digits,
                 punctuation);

<<<<<<< HEAD
  cout << endl << "SECOND EXERCISE" << endl;
  cout << "The string has " << letters << " letters." << endl;
  cout << "The string has " << digits << " digits." << endl;
  cout << "The string has " << punctuation << " punctuation characters."
       << endl;
=======
	// TODO: call function to count things
    countThings(theString, letters, digits, punctuation);
>>>>>>> upstream/master

  return 0;
}

// TODO: Define (implement) the countThings() function
<<<<<<< HEAD
void countThings(char cString[], int &alphaCount, int &digitCount,
                 int &punctCount) {
  for (int i = 0; i < strlen(cString); i++) {
    if (isalpha(cString[i])) {
      alphaCount++;
    }
    if (ispunct(cString[i])) {
      punctCount++;
    }
    if (isdigit(cString[i])) {
      digitCount++;
    }
  }
}
=======

void countThings(char cString[], int &alphaCount, int &digitCount, int &punctCount) {
    alphaCount++;
}
>>>>>>> upstream/master

/*************************************************************************
 *
 * Checkpoint Assignment: Building a Gradebook for CPTR142
 *
 * File Name:       gradebook.cpp
 * Name:            hartjo
 * Course:          CPTR 142
 * Date:            January 9, 2020
 *
 */

#include <cassert>  // for assert
#include <iostream> // for cin and cout
#include <stdlib.h> // for exit
using namespace std;

// sizes of arrays
const int CLASS_SIZE = 6;
const int NUMBER_OF_SCORES = 14;

// Function: displayGradebook
// Precondition:  names and ids are an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints a gradebook table to the console. The table includes
//                the students name, id number and all homework scores.
//                No return value.
void displayGradebook(string names[], long ids[],
                      char homeworkScores[][NUMBER_OF_SCORES], int size);

// Function: displayGrades
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints a each students name and their grade to the console.
//                No return value.
void displayGrades(string names[], char homeworkScores[][NUMBER_OF_SCORES],
                   int size);

// Function: displaySuggestedResubmissions
// Precondition:  names is an array of length size and
//                homeworkScores is a 2D array of size by scores.
// Postcondition: Prints each student's name with a message about the homework
//                they should resubmit next. No return value.
void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size);

// Function: getGradeTotals
// Precondition:  homeworkScores is an array of length size and
//                eTotal, mTotal, rTotal, and nTotal represent the number of
//                scores for each grade metric.
// Postcondition: The function adds up the individual grade metrics into
//                eTotal, mTotal, rTotal, and nTotal.
//                The result is passed back using pass-by-reference variables.
//                No return value.
void getGradeTotals(char homeworkScores[], int size, int &eTotal, int &mTotal,
                    int &rTotal, int &nTotal);

// Function: getHomeworkGrade
// Precondition:  eTotal, mTotal, rTotal, and nTotal represent the number of
//                scores for each grade metric.
// Postcondition: Return the letter grade for the homework category based on
//                the CPTR142 syllabus.
char getHomeworkGrade(int eTotal, int mTotal, int rTotal, int nTotal);

// Function: getNextResubmission
// Precondition:  homeworkScores is an array of length size
// Postcondition: Returns the homework number the student should resubmit.
//                The suggested homework should be the first homework assignment
//                that the student scored a R or N.
//                If all homework has an M or E, then the suggested homework
//                should be the first M.
//                If the student has all E's, then return -1.
int getNextResubmission(char homeworkScores[], int size);

/*====================================================================
 * Main program
 */
int main() {

  // define an array for student names
  string names[CLASS_SIZE] = {"Ava",    "Brook", "Caryon",
                              "Daniel", "Emma",  "Perfect"};

  // define an array for student ids
  long ids[CLASS_SIZE] = {142001, 142002, 142003, 142004, 142005, 777777};

  // define a 2D array of scores
  char homeworkScores[CLASS_SIZE][NUMBER_OF_SCORES] = {
      {'E', 'E', 'E', 'E', 'M', 'N', 'E', 'R', 'E', 'M', 'N', 'R', 'R', 'N'},
      {'M', 'M', 'E', 'M', 'M', 'R', 'R', 'M', 'R', 'N', 'N', 'N', 'N', 'N'},
      {'E', 'E', 'E', 'E', 'M', 'E', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'N', 'R', 'R', 'M', 'E', 'M', 'M', 'M', 'M', 'E', 'E'},
      {'E', 'E', 'M', 'E', 'M', 'M', 'E', 'M', 'E', 'E', 'E', 'M', 'E', 'E'},
      {'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E'},
  };

  // During development, test code can go here

  // Loop to collect user input
  while (true) {

    // prompt for search term
    int menu;
    cout << "Gradebook Menu" << endl;
    cout << "  1: Display Gradebook" << endl;
    cout << "  2: Display Grades" << endl;
    cout << "  3: Show Next Resubmission for Student" << endl;
    cout << "  4: Quit" << endl;
    cout << "Enter selection: ";
    cin >> menu;

    // TODO Check for invalid menu input.
    if (cin.fail()) {
      cin.clear();
      cin.ignore(1000, '\n');
    }

    // menu options
    switch (menu) {
    case 1:
      displayGradebook(names, ids, homeworkScores, CLASS_SIZE);
      break;
    case 2:
      displayGrades(names, homeworkScores, CLASS_SIZE);
      break;
    case 3:
      displaySuggestedResubmissions(names, homeworkScores, CLASS_SIZE);
      break;
    case 4:
      cout << "Goodbye.";
      exit(0);
      break; //	included for consistency; never executed!
    default:
      cerr << "Invalid choice.";
      break; //	included for consistency; redundant since at end anyway!
    }
  }

  // end program
  return 0;
}

void displayGradebook(string names[], long ids[],
                      char homeworkScores[][NUMBER_OF_SCORES], int size) {
  cout << "Name\tID\tAssignments" << endl;
  for (int row = 0; row < size; row++) {
    cout << names[row] << "\t" << ids[row] << "\t";
    for (int col = 0; col < NUMBER_OF_SCORES; col++) {
      cout << homeworkScores[row][col] << " ";
    }
    cout << "\n";
  }
}

int getNextResubmission(char homeworkScores[], int size) {
  for (int i = 0; i < size; i++) {
    if (homeworkScores[i] == 'R' || homeworkScores[i] == 'N') {
      return i;
    }
  }
  for (int i = 0; i < size; i++) {
    if (homeworkScores[i] == 'M') {
      return i;
    }
  }

  return -1;
}

void displaySuggestedResubmissions(string names[],
                                   char homeworkScores[][NUMBER_OF_SCORES],
                                   int size) {

  for (int i = 0; i < size; i++) {
    int result = 0;
    result = getNextResubmission(homeworkScores[NUMBER_OF_SCORES], size);
    for (int i = 0; i < size; i++) {
      result = getNextResubmission(homeworkScores[i], size);
      if (result != -1) {
        cout << names[i] << " should resubmit homework " << result << endl;
      } else {
        cout << names[i] << " has no homework to resubmit" << endl;
      }
    }
  }
}

char getHomeworkGrade(int eTotal, int mTotal, int rTotal, int nTotal) {
  if (eTotal + mTotal == 14 && eTotal >= 10) {
    return 'A';
  } else if (eTotal + mTotal == 13 && eTotal >= 5) {
    return 'B';
  } else if (eTotal + mTotal == 11) {
    return 'C';
  } else if (eTotal + mTotal == 8) {
    return 'D';
  }
  return 'F';
}

void getGradeTotals(char homeworkScores[], int size, int &eTotal, int &mTotal,
                    int &rTotal, int &nTotal) {
  for (int i = 0; i < size; i++) {
    switch (homeworkScores[i]) {
    case 'E':
      eTotal++;
      break;

    case 'M':
      mTotal++;
      break;

    case 'R':
      rTotal++;
      break;

    case 'N':
      nTotal++;
      break;
    }
  }
}

void displayGrades(string names[], char homeworkScores[][NUMBER_OF_SCORES],
                   int size) {
  int numbE = 0;
  int numbM = 0;
  int numbR = 0;
  int numbN = 0;
  cout << "Student Grades" << endl;
  for (int i = 0; i < size; i++) {
    if (names[i] == "Ava") {
      cout << names[i] << "" << getHomeworkGrade(numbE, numbM, numbR, numbN)
           << endl;
    } else if (names[i] == "Brook") {
      cout << names[i] << "" << getHomeworkGrade(numbE, numbM, numbR, numbN)
           << endl;
    } else if (names[i] == "Caryon") {
      cout << names[i] << "" << getHomeworkGrade(numbE, numbM, numbR, numbN)
           << endl;
    } else if (names[i] == "Daniel") {
      cout << names[i] << "" << getHomeworkGrade(numbE, numbM, numbR, numbN)
           << endl;
    } else if (names[i] == "Emma") {
      cout << names[i] << "" << getHomeworkGrade(numbE, numbM, numbR, numbN)
           << endl;
    } else if (names[i] == "Perfect") {
      cout << names[i] << "" << getHomeworkGrade(numbE, numbM, numbR, numbN)
           << endl;
    }
  }
}
/*************************************************************************
 *
 * Exercise: Exceptions
 *
 * File Name:   main1.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <fstream>
#include <iostream>     // for cin and cout
#include <stdexcept>
using namespace std;

// function prototypes
// count the number of lines in main.cpp
//    returns a success flag
//    if successful, then lineCount has a number of lines
//    if unsuccessful, then exception has an explanation
bool linesInMain(int &lineCount, string &exception);

int main() {
    int lines = 0;
    string message;
    bool successFlag = linesInMain(lines, message);
    if (successFlag) {
        cout << "main.cpp has " << lines << " lines." << endl;
    } else {
        cerr << message << endl;
    }
}

bool linesInMain(int &lineCount, string &exception) {
   ifstream inFS;   // Input file stream
    lineCount = 0;

    inFS.open("main.cpp");
    if (!inFS.is_open()) {
        exception = "Unable to open main.cpp!";
        return false;
    }
    while (!inFS.eof()) {
        string line;
        getline(inFS, line);
        if (!inFS.fail()) {
            ++lineCount;
        }
    }
    inFS.close();
    return true;
}

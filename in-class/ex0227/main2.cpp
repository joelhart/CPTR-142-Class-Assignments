/*************************************************************************
 *
 * Exercise: Exceptions
 *
 * File Name:   main2.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 * Date:        04 Mar 2019
 *
 */

#include <fstream>
#include <iostream>     // for cin and cout
#include <stdexcept>
#include <vector>
using namespace std;

class file_not_found_error  : public runtime_error {
    public:
        file_not_found_error(const string &what_arg) : runtime_error(what_arg) {}
};
class not_a_word_error      : public runtime_error {
    public:
        not_a_word_error    (const string &what_arg) : runtime_error(what_arg) {}
};
class word_too_long_error   : public runtime_error {
    public:
        word_too_long_error (const string &what_arg) : runtime_error(what_arg) {}
};

// function prototypes
// count the number of lines in main.cpp
//    returns a success flag
//    if successful, then lineCount has a number of lines
//    if unsuccessful, then exception has an explanation
bool readFile(vector<string> &words, int &errorCode, string &errorDescription);

int main() {
    vector<string> words;
    int errorCode;
    string message;
    bool successFlag = readFile(words, errorCode, message);
    if (successFlag) {
        cout << "words.txt has " << words.size() << " words." << endl;
    } else {
        cerr << message << endl;
    }
}

bool readFile(vector<string> &words, int &errorCode, string &errorDescription) {
    ifstream inFS;   // Input file stream
    errorCode = 0;

    inFS.open("words.txt");
    if (!inFS.is_open()) {
        errorCode = 1;
        errorDescription = "Unable to open words.cpp!";
        return false;
    }
    while (!inFS.eof()) {
        string line;
        getline(inFS, line);
        if (!inFS.fail() && line.size() > 0) {
            if (isdigit(line.at(0))) {
                errorCode = 2;
                errorDescription = "Found a digit!";
                return false;
            }
            if (line.size() > 20) {
                errorCode = 3;
                errorDescription = "Word is too long!";
                return false;
            }
            words.push_back(line);
        }
    }
    inFS.close();
    return true;
}

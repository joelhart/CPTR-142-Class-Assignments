/*
 *
 * Homework: Money
 *
 * File Name:   money.cpp
 * Username:      hartjo
 * Course:      CPTR 142
 * Date:        3/9
 *
 */
#include <stdexcept>
#include <string>
using namespace std;

// throws a runtime_error if the input string is not properly formatted
void verifyIsMoney(string inputString) {

  int commaRoom = 0;
  int digitCount = 0;

  if (inputString.size() == 0) {
    throw runtime_error("NOT MONEY");
  }

  if (inputString.at(0) == '$') {

  } else {
    throw runtime_error("NOT MONEY");
  }

  if (inputString.size() == 1) {
    throw runtime_error("NOT MONEY");
  }

  if (isdigit(inputString.at(1))) {

  } else {
    throw runtime_error("NOT MONEY");
  }
  if (inputString.size() >= 2) {
    for (int i = 2; i < inputString.size(); i++) {
      if (isdigit(inputString.at(i))) {
        commaRoom--;
        digitCount++;
        if (digitCount > 3) {
          throw runtime_error("NOT MONEY");
        }
      } else if (inputString.at(i) == ',') {
        if (commaRoom > 0) {
          throw runtime_error("NOT MONEY");
        }
        digitCount = 0;
        commaRoom = 3;
      } else {
        throw runtime_error("NOT MONEY");
      }
    }
  }
}
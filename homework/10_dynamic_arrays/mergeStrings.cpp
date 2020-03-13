/****************************************************************************
 *
 * Homework Assignment:  Merge strings
 *
 * File Name:  mergeStrings.cpp
 * Name:       joel hartman
 * Course:     CPTR 142
 * Date:       3/13
 *
 */

#include "mergeStrings.h"
#include <cstring>
#include <iostream>

string mergeStrings(int argc, char *argv[], string userEntry) {
  int maxSoFar = userEntry.size();
  int currValue;
  cout << "argc = " << argc << endl;
  for (int i = 0; i < argc; i++) {
    currValue = strlen(argv[i]);
    cout << "argv[" << i << "]: " << argv[i] << " has a size of " << currValue
         << endl;
    if (maxSoFar < currValue) {
      maxSoFar = currValue;
    }
  }

  cout << "Max length is: " << maxSoFar << endl;
  cout << "Number of input strings: " << argc + 1 << endl;
  cout << "The length of the output string in characters is "
       << maxSoFar * (argc + 1) << endl;
  char *resultString = new char[maxSoFar * (argc + 1)];
  int k = 0;
  for (int i = 0; i < maxSoFar; i++) {
    if (i > userEntry.size() - 1) {
      resultString[k++] = ' ';
    } else {
      resultString[k++] = userEntry.at(i);
    }
    for (int j = 0; j < argc; j++) {
      if (i < strlen(argv[j])) {
        resultString[k++] = argv[j][i];
      } else {
        resultString[k++] = ' ';
      }
    }
  }
  resultString[(argc + 1) * maxSoFar] = '\0';
  return resultString;
}
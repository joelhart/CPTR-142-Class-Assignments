/*************************************************************************
 *
 * Homework Assignment: C string work
 *
 * File Name: string_functions.cpp
 * Name:      Joel Hartman
 * Course:    CPTR 142
 * Date:      January 13, 2020
 *
 */

#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;

int noPunctuationLength(const char string1[]) {

  int letterCounter = 0;

  for (int i = 0; i < strlen(string1); i++) {

    if (isalpha(string1[i])) {

      letterCounter++;
    }
  }

  return letterCounter;
}

bool areAnagrams(const char string1[], const char string2[]) {

  int stringAnagramCount = 0;

  if (noPunctuationLength(string1) == noPunctuationLength(string2)) {

    for (int i = 0; i < strlen(string1); i++) {

      if (isalnum(string1[i])) {

        for (int j = 0; j < strlen(string2); j++) {

          char lowerHold = 'a';
          char upperHold = 'b';

          if (isupper(string1[i])) {

            lowerHold = tolower(string1[i]);
          }

          if (isupper(string2[j])) {

            upperHold = tolower(string2[j]);
          }

          if (isupper(string1[i]) && isupper(string2[j])) {

            if (upperHold == lowerHold) {

              stringAnagramCount++;
              break;
            }

          } else if (isupper(string1[i])) {

            if (lowerHold == string2[j]) {

              stringAnagramCount++;
              break;
            }

          } else if (isupper(string2[j])) {

            if (string1[i] == upperHold) {

              stringAnagramCount++;
              break;
            }

          } else {

            if (string1[i] == (string2[j])) {

              stringAnagramCount++;
              break;
            }
          }
        }
      }
    }
    cout << endl;

    cout << stringAnagramCount << endl;

    if (stringAnagramCount == noPunctuationLength(string1)) {

      return true;

    } else {

      return false;
    }

  } else {

    return false;
  }
}

bool arePalindromes(const char string1[], const char string2[]) {

  string stringOneHolder = "";
  string stringTwoHolder = "";

  int stringComparison = 0;

  if (noPunctuationLength(string1) == noPunctuationLength(string2)) {

    for (int i = 0; i < strlen(string1); i++) {

      if (isalpha(string1[i])) {

        char holder = 'a';

        if (isupper(string1[i])) {

          holder = tolower(string1[i]);

          stringOneHolder.push_back(holder);
        } else {

          stringOneHolder.push_back(string1[i]);
        }
      }
    }

    for (int i = 0; i < strlen(string2); i++) {

      if (isalpha(string2[i])) {

        char holder = 'a';

        if (isupper(string2[i])) {

          holder = tolower(string2[i]);

          stringTwoHolder.push_back(holder);
        } else {

          stringTwoHolder.push_back(string2[i]);
        }
      }
    }
  }

  for (int i = 0; i < stringOneHolder.length(); i++) {

    if (stringOneHolder.at(i) == stringTwoHolder
                                     .at(stringTwoHolder.length() - (1 + i)) /*(stringOneHolder.at(i) == stringTwoHolder.at(i)) && (stringOneHolder.at(0) == stringTwoHolder.at(stringTwoHolder.length() - 1))*/) {

      stringComparison++;
    }
  }

  if (stringComparison == noPunctuationLength(string1)) {

    return true;

  } else {

    return false;
  }

  return false;
}
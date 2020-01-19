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

#include <ctype.h>
#include <iostream> //	cin & cout
#include <string.h>
using namespace std;

bool areAnagrams(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  int count1 = 0;
  int count2 = 0;

  for (int i = 0; i < strlen(string1); i++) {
    count1 += string1[i];
  }

  for (int i = 0; i < strlen(string2); i++) {
    count2 += string2[i];
  }

  if (count1 == count2) {
    return true;
  } else {
    return false;
  }
}

bool arePalindromes(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  bool fail = false;

  for (int i = 0; i < strlen(string1); i++) {

    if (strlen(string1) != strlen(string2)) {
      fail = true;
    }
    if (string1[i] == string2[strlen(string1) - (i + 1)] && !fail) {

      //   cout << "string1i = " << string1[i] << endl;
      //   cout << "string2i = " << string2[strlen(string1) - i] << endl;
      //   cout << "reached here" << endl;
      fail = false;
    } else {
      fail = true;
    }
  }

  if (!fail) {
    return true;
  } else {
    return false;
  }
}

// int main() {

//   char string4[10] = "bobo";
//   char string5[10] = "obob";

//   cout << "Anagram: " << areAnagrams(string4, string5) << endl;
//   cout << "Palindrome: " << arePalindromes(string4, string5) << endl;
// }

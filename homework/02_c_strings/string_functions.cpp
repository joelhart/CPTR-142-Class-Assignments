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

bool areAnagrams(char string1[], char string2[]) {
  // TODO Add code to determine if strings are anagrams
  int count1;
  int count2;

  for (int i = 0; i < strlen(string1); i++) {
    count1 += string1[i];
    count2 += string2[i];
  }

  if (count1 == count2) {
    return true;
  } else {
    return false;
  }
}

bool arePalindromes(char string1[], char string2[]) {
  // TODO Add code to determine if strings are anagrams
  bool fail;

  for (int i = 0; i < strlen(string1); i++) {
    if (string1[i] != string2[strlen(string1)-i]) {
        fail = true;
    } else {}
  }

  if (!fail) {
    return true;
  } else {
    return false;
  }
}

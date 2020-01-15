/*************************************************************************
 *
 * In-Class Exercise: Enumeration Data Types
 *
 * File Name: enum.cpp
<<<<<<< HEAD
 * Username:  hartjo
 * Username:  fairka
=======
 * Username:  fostja
 * Username:  ?
>>>>>>> upstream/master
 * Course:    CPTR 142
 */

#include <iostream>
using namespace std;

int main() {

  enum City {
    CITY_SEATTLE,
    CITY_SPOKANE,
    CITY_PENDLETON,
    CITY_PORTLAND,
    CITY_NEB
  };
  City myCity;

  myCity = CITY_SPOKANE;

cout << myCity << "is in ";

  /* Print "OR", "WA", or "??" based on location of myCity  */
  switch (myCity) {
  case CITY_SEATTLE:
    cout << "WA" << endl;
    break;
  case CITY_SPOKANE:
    cout << "WA" << endl;
    break;
  case CITY_PENDLETON:
    cout << "OR" << endl;
    break;
  case CITY_PORTLAND:
    cout << "OR" << endl;
    break;
  default:
    cout << "??" << endl;
    break;
  }

  return 0;
}
   
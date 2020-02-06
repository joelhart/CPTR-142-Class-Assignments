/*************************************************************************
 *
 * In-Class Exercise: Pair
 *
 * File Name: pair.cpp
 * Username:  hartjo    
 * Username:  fairka
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <utility>	  	// pair
using namespace std;

int main() {

  // define a variable to hold an integer and a string
  pair<int, string> pear;

  // assign a pair of values (1 and "Adam") to your variable
  pear = make_pair(1, "Adam");

  // print both values with an appropriate label, such as
  // "ID: 1; name: Adam"
  cout << "ID: " << pear.first << "; name: " << pear.second << endl;

  return 0;
}

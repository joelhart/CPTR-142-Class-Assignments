/*************************************************************************
 *
 * In-Class Exercise: find()
 *
 * File Name: find.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <vector>
#include <utility>		// for pair
#include <algorithm>
using namespace std;

bool is19thCentury(pair<int, string> aPair);

int main() {
  // define a vector of pairs
  vector<pair<int, string>> pairs;
  pairs.push_back(make_pair(1789, "Washington"));
  pairs.push_back(make_pair(1797, "Adams"));
  pairs.push_back(make_pair(1801, "Jefferson"));
  pairs.push_back(make_pair(1809, "Madison"));

  // TODO: define an iterator to hold a result

  // TODO: find first President in 19th century

  // TODO: get pair from iterator

  // TODO: print name of first President in 19th century

  return 0;
}

bool is19thCentury(pair<int, string> aPair) {
  return ((aPair.first >= 1801) && (aPair.first <= 1900));
}

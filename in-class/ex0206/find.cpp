/*************************************************************************
 *
 * In-Class Exercise: find()
 *
 * File Name: find.cpp
 * Username:  hartjo
 * Username:  fairka
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
  vector<pair<int, string>>::iterator iter;

  // TODO: find first President in 19th century
  iter = find_if(pairs.begin(), pairs.end(), is19thCentury);

  // TODO: get pair from iterator
  if (iter != pairs.end()) {
      cout << "Found: " << (*iter).second << endl;
  }

  // TODO: print name of first President in 19th century



  return 0;
}

bool is19thCentury(pair<int, string> aPair) {
  return ((aPair.first >= 1801) && (aPair.first <= 1900));
}

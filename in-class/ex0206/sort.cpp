/*************************************************************************
 *
 * In-Class Exercise: sort()
 *
 * File Name: sort.cpp
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

bool compareNames(pair<int, string> aPair1, pair<int, string> aPair2);

int main() {
  typedef pair<int, string> Pair;
  vector<Pair> pairs;
  pairs.push_back(make_pair(1789, "Washington"));
  pairs.push_back(make_pair(1797, "Adams"));
  pairs.push_back(make_pair(1801, "Jefferson"));
  pairs.push_back(make_pair(1809, "Madison"));

  sort(pairs.begin(), pairs.end(), compareNames);
  for (auto president : pairs) {
  	cout << president.second << " inaugurated in " << president.first << endl;
  }
  return 0;
}

bool is19thCentury(pair<int, string> aPair) {
  return ((aPair.first >= 1801) && (aPair.first <= 1900));
}

// TODO: code function to compare names

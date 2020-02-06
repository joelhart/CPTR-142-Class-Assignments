/*************************************************************************
 *
 * In-Class Exercise: Map
 *
 * File Name: map.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <map>
using namespace std;

int main() {

  bool ableExists;
  // define a variable, family, to hold a map of string and integer pairs
  map<string, int> family;

  // add family members (Adam, 1), (Eve, 2), (Cain, 3), and (Able, 4)
  family.emplace("Adam", 1);
  family.emplace("Eve", 2);
  family.emplace("Cain", 3);
  family.emplace("Able", 4);

  // what is Eve's ID?
  cout << "Eve is person #" << family.at("Eve") << endl;
  // is Able part of the family?
  ableExists = family.count("Able");
  cout << "Family size: " << family.size() << " includes Able: " << (ableExists ? "yes" : "no") << endl;
  // Able is killed
family.erase("Able");
ableExists = family.count("Able");
  cout << "Family size: " << family.size() << " includes Able: " << (ableExists ? "yes" : "no") << endl;
  // finally everyone dies off

  family.clear();

  cout << "Family size: " << family.size() << endl;

  return 0;
}

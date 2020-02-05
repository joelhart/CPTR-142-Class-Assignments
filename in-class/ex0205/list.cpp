/*************************************************************************
 *
 * In-Class Exercise: Lists
 *
 * File Name: list.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <list>	  	// vector
using namespace std;

class State {
  public:
    State(string name, int population);
    string getName() const { return name; }
    int getPopulation() const { return population; }
    void setPopulation(int population) { this->population = population; }
  private:
    string name;
    int population; // in thousands
};

State::State(string name, int population) {
  this->name = name;
  this->population = population;
}

int main() {
  // define a list

  // add Oregon with 4143 and Washington with 7406

  // add Alaska to the beginning with 734

  // loop and print using iterator

  return 0;
}

/*************************************************************************
 *
 * In-Class Exercise: Vector
 *
 * File Name: vector.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <vector>	  	// vector
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

// constructor
State::State(string name, int population) {
  this->name = name;
  this->population = population;
}

int main() {
  // Exrcise 1: define a vector and print its size

  // Exercise 2: add elements

  // Exercise 3: loop and print
  cout << "Here are the elements: " << endl;

  // Exercise 4: project 5% growth and print the list again

  cout << endl << "After adjustment, here are the elements: " << endl;

  return 0;
}

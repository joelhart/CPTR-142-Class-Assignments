/*************************************************************************
 *
 * Checkpoint Assignment: Inheritance
 *
 * File Name:   main.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <iostream>   // for cin and cout
using namespace std;

class Number {
  public:
    // Exercise 2: make this a virtual function
    // Exercise 3: make this a pure virtual function
    void print() { cout << "Number is " << value << endl; }
  protected:
    int value;
};

class Integer : public Number {
  public:
    Integer(int value) { this->value = value; }
    // Exercise 1b: add an override for the print() function

};

class Rational : public Number {
  public:
    Rational(int numerator, int denominator) {
      value = numerator;
      this->denominator = denominator;
    }
    // Exercise 1b: add an override for the print() function
      
  protected:
    int denominator;
};

int main() {
  Number n;
  Integer i(1);
  Rational r(1, 2);

  // Exercise 1a: call print() on the instances


  // Exercise 2: 
  Number *pNumber;
  // Assign a pointer to i to pNumber

  // Call the print() function on pNumber

  // Assign a pointer to r to pNumber

  // Call the print() function on pNumber
  
}

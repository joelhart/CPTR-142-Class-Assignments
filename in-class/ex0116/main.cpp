/*************************************************************************
 *
 * In-Class Exercise: Creating a Class
 *
 * File Name: main.cpp
 * Username:  joelhart
 * Username:  fairka
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <assert.h>		// assert()
using namespace std;

/*
  -  define a class CounterType that holds a nonnegative whole number
  -  include a mutator that sets the counter
  -  include member functions to increase and decrease the value by one
  -  include a member function that returns the current value
  -  include a member function that outputs the current value
  -  ensure that the value never becomes negative
*/

class CounterType {
    public:
        void setCounter(unsigned int newCounter) {counter = newCounter;}
        void lowerCounter() {counter--;}
        void upperCounter() {counter++;}
        unsigned int getCounter() {return counter;}
        void printCounter() {cout << counter << endl;}
    private:
        unsigned int counter;

};

/*====================================================================
 * Main program
 */
int main() {

CounterType number;
number.setCounter(1);
number.lowerCounter();
number.lowerCounter();
number.printCounter();

assert(number.getCounter() == 0);

    cout << "Counter Checkpoint" << endl;

    return 0;
}

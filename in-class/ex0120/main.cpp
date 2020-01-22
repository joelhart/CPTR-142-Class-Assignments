/*************************************************************************
 *
 * In-Class Exercise: Constructor for CounterType
 *
 * File Name: main.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <assert.h>		// assert()
#include "CounterType.h"
using namespace std;


/*====================================================================
 * Main program
 */
int main() {
    cout << "Counter Exercise" << endl;
    CounterType counter;
    counter.setCount(-1);
    assert(counter.getCount() == 0);
    counter.increase();
    assert(counter.getCount() == 1);
    counter.decrease();
    assert(counter.getCount() == 0);
    counter.decrease();
    assert(counter.getCount() == 0);
    counter.printCount();
    cout << endl;

    return 0;
}

/*************************************************************************
 *
 * In-Class Exercise: Constructor for CounterType
 *
 * File Name: main.cpp
 * Username:  hartjo   
 * Username:  fairka
 * Course:    CPTR 142
 * Date:      17 January 2019
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
    CounterType counter1;

    counter1.setCount(-1);
    assert(counter1.getCount() == 0);
    counter1.increase();
    assert(counter1.getCount() == 1);
    counter1.decrease();
    assert(counter1.getCount() == 0);
    counter1.decrease();
    assert(counter1.getCount() == 0);
    counter1.printCount();		// "1-0" after second exercise
    cout << endl;

    CounterType counter2;
    assert(counter2.getCount() == 11);
    counter2.printCount();		// "2-11" after second exercise

    CounterType counter3(22);
    assert(counter3.getCount() == 22);
    counter2.printCount();		// "3-22" after second exercise

    return 0;
}

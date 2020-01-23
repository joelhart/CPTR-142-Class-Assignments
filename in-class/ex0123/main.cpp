/*************************************************************************
 *
 * In-Class Exercise: Operator Overloading
 *
 * File Name: main.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 * Date:      21 January 2019
 *
 * compile and run with the following:
   g++ -std=c++11 *.cpp && ./a.out
 *
 */

#include <iostream> 	// for cin and cout
#include <assert.h>		// assert()
#include "Time.h"
using namespace std;

/*====================================================================
 * Main program
 */
int main() {
    Time t1(9, 0), t2(10, 50);
    t1.print();
    t2.print();

    Time t3;
    // t3 = t1 + 110;
    t3.print();

    bool flag = false;
    // flag = (t2 == t3);
    cout << (flag ? "true" : "false") << endl;

    // Time t4 = t3 - 120;
    // cout << ((t4 < t3) ? "true" : "false") << endl;

    return 0;
}

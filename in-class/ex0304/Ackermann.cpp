/*************************************************************************
 *
 * Exercise: Ackermann Function
 *
 * File Name:   Ackermann.cpp
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <cassert>
#include <iomanip>      // for setw()
#include <iostream>     // for cin and cout
#include <vector>
using namespace std;

// function prototype
int ackermann(int m, int n);

int main() {
    for (int m = 0; m <= 3; ++m) {
        cout << endl;
        for (int n = 0; n <= 7; ++n) {
            cout << "(" << m << ", " << n << ") = " << setw(4) << ackermann(m, n) << endl;
        }
    }
    return 0;
}

/*
 *            /   n + 1                    if m == 0
 *  A(m,n) = <    A(m - 1, 1)              if n == 0
 *            \   A(m - 1, A(m, n - 1))    otherwise
 */

int ackermann(int m, int n) {
	//	TODO: implement recursive function
	return 42;
}

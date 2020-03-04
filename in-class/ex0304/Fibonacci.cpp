/*************************************************************************
 *
 * Exercise: Fibonacci
 *
 * File Name:   Fibonacci.cpp
 * Username:  	hartjo
 * Username:  	fairka
 * Course:      CPTR 142
 *
 */

#include <iomanip>
#include <iostream>     // for cin and cout
#include <vector>
using namespace std;

// function prototypes
int fibonacciByIteration(int num);
int fibonacciByRecursion(int num);

int main() {
    for (int i = 0; i <= 16; ++i) {
        cout << setw(2) << i
            << " -> " << setw(3) << fibonacciByIteration(i)
            << " or " << setw(3) << fibonacciByRecursion(i) << endl;
    }
    return 0;
}

int fibonacciByIteration(int num) {
    // base cases for 0 and 1
    vector<int> sequence = {0, 1};
    for (int i = 2; i <= num; ++i) {
        // each subsequent value is the sum of the two previous values
        sequence.push_back(sequence.at(i - 1) + sequence.at(i - 2));
    }
    return sequence.at(num);
}

// TODO: rewrite function to use recursion
int fibonacciByRecursion(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibonacciByRecursion(num-1) + fibonacciByRecursion(num -2);
    }
}

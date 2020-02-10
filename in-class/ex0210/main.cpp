/*************************************************************************
 *
 * Exercise: Pointers and Objects
 * 
 * File Name: main.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 * 
 */
#include <iostream> // for cin and cout
#include "BankAccount.h"
using namespace std;

/*====================================================================
 * Main program
 * 
 * g++ main.cpp BankAccount.cpp && ./a.out
 * 
 */
int main() {
    // define a variable to hold a BankAccount object
    BankAccount idk;

    
    // define a variable to hold a pointer to a BankAccount object (properly initialized)
        BankAccount *object;
    
    // assign the address of the first variable to the second
    *object = idk;
    
    // call displayAccountSummary() using the dot operator
    cout << (*idk).displayAccountSummary();
    
    // call updateInterest() using the dereference operator
    
    // call displayAccountSummary() using the arrow operator

}

/*************************************************************************
 *
 * Exercise: Pointers Introduction
 *
 * File Name: pointers.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */
#include <iostream> // for cin and cout
using namespace std;

// function prototypes
void exercise1();
void exercise2();

/*====================================================================
 * Main program
 */
int main() {
	exercise1();
	exercise2();
    return 0;
}

void exercise1() {
    int num = 23;
    cout << "Number of bytes: " << sizeof(num) << endl;
    cout << "Address of num: " << &num << endl;

    // declare a pointer variable named ptr and set it to nullptr

    // assign the address of num to ptr

    // output to the console the contents of num

    // output to the console the value pointed to by ptr

    // change the value of num

    // output to the console the value pointed to by ptr

}

void exercise2() {
	// Declare a pointer variable called ptrd which can hold the address of a double

	// Declare a new double called amount and initialize it to some initial value

	// Set ptrd to the address of amount

	// Prompt the user for a value

	// Take a value from the console and put it in the memory pointed to by ptrd

    // output to the console the value pointed to by ptrd

}

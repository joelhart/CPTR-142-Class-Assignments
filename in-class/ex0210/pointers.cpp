/*************************************************************************
 *
 * Exercise: Pointers Introduction
 *
 * File Name: pointers.cpp
 * Username:  hartjo
 * Username:  fairka
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
    int* ptr = nullptr;

    // assign the address of num to ptr
    ptr = &num;

    // output to the console the contents of num
    cout << "Num is: " << &num << endl;

    // output to the console the value pointed to by ptr
    cout << "Ptr is: " << *ptr << endl;

    // change the value of num
    num = 3;

    // output to the console the value pointed to by ptr
    cout << *ptr << endl;

}

void exercise2() {
	// Declare a pointer variable called ptrd which can hold the address of a double
    double *ptrd = new double;

	// Declare a new double called amount and initialize it to some initial value
    // double amount = 10;

	// Set ptrd to the address of amount
    // *ptrd = amount;

	// Prompt the user for a value
    cout << "enter a double";
    cin >> *ptrd;

	// Take a value from the console and put it in the memory pointed to by ptrd
    cout << "you entered" << *ptrd << "saved at" << ptrd << endl;

    // output to the console the value pointed to by ptrd
    delete ptrd;
}

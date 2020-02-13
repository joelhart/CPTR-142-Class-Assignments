/*************************************************************************
 *
 * Exercise: Dynamic Memory
 * 
 * File Name:       student.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 * 
 */
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;


int main() {
    /*********************************************************************
     *  - Define a new variable, p1, as a pointer to a Person, 
     *    initialized to nullptr
     *  - Create a new Person object dynamically using the custom
     *    constructor to make the name "Michael", 
     *    and assign the pointer to p1
     *  - Display the contents of the member variable "name"
     *  - Delete the object and set the pointer to nullptr
     ********************************************************************/    
    cout << endl << "Case 1: Creating dynamic person objects" << endl;

    ////     CODE
    

    /*********************************************************************
     *  - Define a variable named stranger as a new Person
     *  - Assign p1 to point to this new object   
     *  - Set the name to "Stinky" using p1
     *  - After doing so, display the name using p1 then again with stranger
     ********************************************************************/
    cout << endl << "Case 2: Resetting the pointer to another person named Stinky" << endl;
    
    ////  CODE 


    /*********************************************************************
     *  - One more - this time prompt for a new student's name
     *  - Use it to name a new Person, storing the pointer in p1
     *  - This time, in your display, welcome the student to WWU!
     *  - *** NOTE:  After you're done, delete the object 
     *    and replace the pointer with nullptr
     ********************************************************************/
    cout << endl << "Case 3: Prompt the user to enter the student's name" << endl;
    
    //// CODE


    return 0;
}

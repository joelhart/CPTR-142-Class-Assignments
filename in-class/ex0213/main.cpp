/*************************************************************************
 *
 * Checkpoint Assignment: Dynamic Memory
 * 
 * File Name:       main.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            February 23, 2018
 * 
 */
#include <iostream>
#include <string>
#include "Person.h"
#include "Course.h"
using namespace std;


int main() {
    cout << endl << "Determining size of course at run-time" << endl;
    
    // Create a pointer to what will be the beginning of the array
    int size;
    cout << "What is the size of your course? ";
    cin >> size;

    // Actually allocate an array of that size of objects
    Course cptr142(size);   

    string name;
    for (int i = 0; i < cptr142.getCourseSize(); i++) {
        cout << "Name for student " << i + 1 << "? ";
        cin >> name;
        // assign the name to this indexed location
        // notice the use of regular dot notation in this case
        cptr142.addStudent(new Person(name));
    }

    cptr142.displayRoster();

    return 0;
}
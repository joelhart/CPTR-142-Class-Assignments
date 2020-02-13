/*************************************************************************
 *
 * Checkpoint Assignment: Dynamic Memory
 * 
 * File Name:       Person.h
 * Name:            ?
 * Course:          CPTR 142
 * Date:            February 23, 2018
 * 
 */
// ======================================================================
// ====== DO NOT EDIT == DO NOT EDIT == DO NOT EDIT == DO NOT EDIT ======
// ======================================================================
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        // The name property of a Person object
        string name; 
    
    public:
        // no-argument constructor
        Person() {} 
    
        // overloaded constructor for initializing the Name property
        Person(const string &n) { 
            name = n;
        }
    
        string getName() {
            return name;
        }
    
        void setName(const string &n) {
            name = n;
        }
};


#endif // PERSON_H
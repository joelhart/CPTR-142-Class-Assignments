/*************************************************************************
 *
 * Exercise: Dynamic Memory
 * 
 * File Name:       Person.h
 * Course:          CPTR 142
 * Date:            February 13, 2019
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
    public:
        // default constructor
        Person() {} 
        // custom constructor for initializing the name property
        Person(const string &name) { this->name = name; }
		// accessor
        string getName() { return name; }
    	// mutator
        void setName(const string &name) { this->name = name; }
    private:
        // The name property of a Person object
        string name; 
};

#endif // PERSON_H

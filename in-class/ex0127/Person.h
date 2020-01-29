/*************************************************************************
 *
 * Excercise: Inheritance
 *
 * File Name:   Person.h
 * Username:  	?
 * Username:  	?
 * Course:      CPTR 142
 * Date:        20 Feb 2019
 *
 */
#ifndef PERSON_H
#define PERSON_H


#include <iostream>
#include <string>
using namespace std;

// Simple class for modelling a person
class Person {
    public:
    	// name mutator
        void setName(const string &n) { name = n; }

        // Every perston has the ability to think (behavior)
        void think() {
            cout << name << " is thinking..." << endl;
        }

    private:
        // Every person has a Name property
        string name;
};


#endif // PERSON_H

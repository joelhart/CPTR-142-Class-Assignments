/*************************************************************************
 *
 * Checkpoint Assignment: Dynamic Memory
 * 
 * File Name:       Course.h
 * Name:            ?
 * Course:          CPTR 142
 * 
 */
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Course {

    private:
        int maxSize = 0;
        int currentEnrollment = 0;

        // TODO Declare the dynamic array for student roster

    public:
        // no-argument constructor
        Course() {} 

        Course(const int size) { 
            cout << "-~= Consturctor Called =~-" << endl;
            maxSize = size;

            // TODO According to the number of students, create a dynamic array of Person objects
        }

        int getCourseSize() {
            return maxSize;
        }

        int getEnrollmentCount() {
            return currentEnrollment;
        }

        /**
         * addStudent
         * Precondition: Takes a single pointer to a Person object.
         * Postcondition: Adds the Person pointer to the course roster.
         */
        void addStudent(Person* newStudent);
        
        
        /**
         * displayRoster
         * Precondition: None
         * Postcondition: Prints to the console the roster of students in the course.
         */
        void displayRoster();
};


#endif // COURSE_H
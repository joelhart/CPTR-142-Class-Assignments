/*************************************************************************
 *
 * In-Class Exercise: Structures
 *
 * File Name: struct.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 */

#include <iostream> 	// cin and cout
#include <cmath>        // pow

using namespace std;

// TODO: define a struct named Point that contains two integer data members, x and y.

// main entry point
int main() {
	// use the new struct
	Point source = { 0, 0 };
	Point target;
	double distance;	// sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))

	// ask for coordinates
	cout << "Enter x coordinate: ";
	cin >> /* TODO: replace me */ ;
	cout << "Enter y coordinate: ";
	cin >> /* TODO: replace me */ ;

	// TODO: calculate distance
	distance = 0;

	cout << "Distance from source to target is " << distance << endl;

    return 0;
}


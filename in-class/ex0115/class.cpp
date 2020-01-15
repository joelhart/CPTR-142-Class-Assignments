/*************************************************************************
 *
 * In-Class Exercise: Classes
 *
 * File Name: class.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 */

#include <iostream> 	// cin and cout
#include <math.h>       // pow

using namespace std;

class Point {
	public:
		void setX(int newX);
		void setY(int newY);
		double distanceFromOrigin();
	private:
		int x, y;
};

// main entry point
int main() {
	// use the new struct
	Point target;
	int x, y;
	double distance;
	cout << "Enter x coordinate: ";
	cin >> x;
	cout << "Enter y coordinate: ";
	cin >> y;

	// TODO: assign values

	// TODO: obtain distance
	distance = 0;

	cout << "target is " << distance << " units from origin" << endl;

    return 0;
}


//	Class implementation comes later!

void Point::setX(int newX) {
	x = newX;
}

void Point::setY(int newY) {
	y = newY;
}

double Point::distanceFromOrigin() {
	return sqrt(pow(x, 2) + pow(y, 2));
}

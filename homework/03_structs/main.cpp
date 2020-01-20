/*
 *
 * Homework Assignment: struct for polar and cartesian points
 * 
 * File Name:       main.cpp
 * Course:          cp1TR 142
 * 
 */

#include <iostream>  // for cin and cout
#include <cmath>    // for trig functions
using namespace std;

#include "points.h"

/*====================================================================
 * Main program
 */
int main() {
    double x1 = 1.0, y1 = 2.0;
    cout << "Cartesian Point 1: (" << x1 << "," << y1 << ")" << endl;

    double ppRadius, ppTheta;
    CartesianToPolar(x1, y1, ppRadius, ppTheta);
    cout << "Polar Point: (" << ppRadius << "," << ppTheta << ")" << endl;

    double x3, y3;
    PolarToCartesian(ppRadius, ppTheta, x3, y3);
    cout << "Cartesian Point 3: (" << x3 << "," << y3 << ")" << endl;

    double length = LengthC(x3, y3);
    cout << "length = " << length << endl;

    double x4, y4;
    NormalizedC(x3, y3, x4, y4);
    cout << "normalized = (" << x4 << "," << y4 << ")" << endl;

    double x2 = 2.0, y2 = 1.0;
    cout << "Cartesian Point 2: (" << x2 << "," << y2 << ")" << endl;

    double dotProduct = DotProductC(x1, y1, x2, y2);
    cout << "dot product = " << dotProduct << endl;

    double x5, y5;
    SumC(x1, y1, x2, y2, x5, y5);
    cout << "sum = (" << x5 << "," << y5 << ")" << endl;

    return 0;
}
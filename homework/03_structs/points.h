/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.h
 * Name:            Joel Hartman
 * Course:          cp1TR 142
 * Date:            January 17, 2020
 *
 */
#ifndef POINTS_H
#define POINTS_H
#include "points.cpp"

//  function declarations (prototypes)
PolarPoint CartesianToPolar(CartesianPoint c);
void PolarToCartesian(double radius, double theta, double &x, double &y);
double LengthC(double x, double y);
void NormalizedC(double xIn, double yIn, double &xOut, double &yOut);
double DotProductC(double firstX, double firstY, double secondX,
                   double secondY);
void SumC(double firstX, double firstY, double secondX, double secondY,
          double &resultX, double &resultY);

#endif // POINTS_H

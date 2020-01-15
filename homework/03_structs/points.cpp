/*************************************************************************
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.cpp
 * Name:            ?
 * Course:          CPTR 142
 * Date:            January 17, 2020
 *
 */

#include <iostream> // for cin and cout
#include <math.h>   // for trig functions
using namespace std;

#include "points.h"

void CartesianToPolar(double x, double y, double &radius, double &theta) {
  radius = sqrt(pow(x, 2) + pow(y, 2));
  theta = atan2(y, x);
}

void PolarToCartesian(double radius, double theta, double &x, double &y) {
  x = radius * cos(theta);
  y = radius * sin(theta);
}

double LengthC(double x, double y) { return (sqrt(pow(x, 2.0) + pow(y, 2.0))); }

void NormalizedC(double xIn, double yIn, double &xOut, double &yOut) {
  double length = LengthC(xIn, yIn);
  xOut = xIn / length;
  yOut = yIn / length;
}

double DotProductC(double firstX, double firstY, double secondX,
                   double secondY) {
  return (firstX * secondX + firstY * secondY);
}

void SumC(double firstX, double firstY, double secondX, double secondY,
          double &resultX, double &resultY) {
  resultX = firstX + secondX;
  resultY = firstY + secondY;
}
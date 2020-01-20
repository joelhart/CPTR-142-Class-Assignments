/*
 *
 * Homework Assignment: struct for polar and cartesian points
 *
 * File Name:       points.cpp
 * Name:            Joel Hartman
 * Course:          CPTR 142
 * Date:            January 17, 2020
 *
 */

#include <cmath>    // for trig functions
#include <iostream> // for cin and cout
using namespace std;

#include "points.h"

PolarPoint CartesianToPolar(CartesianPoint cPoint) {

  PolarPoint polarReturn;

  polarReturn.radius = sqrt(pow(cPoint.x, 2) + pow(cPoint.y, 2));
  polarReturn.theta = atan2(cPoint.y, cPoint.x);

  return polarReturn;
}

CartesianPoint PolarToCartesian(PolarPoint pPoint) {

  CartesianPoint cartReturn;

  cartReturn.x = pPoint.radius * cos(pPoint.theta);
  cartReturn.y = pPoint.radius * sin(pPoint.theta);

  return cartReturn;
}

double LengthC(CartesianPoint cPoint) {
  return (sqrt(pow(cPoint.x, 2.0) + pow(cPoint.y, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint cPoint) {

  CartesianPoint cartOutput;

  double length = LengthC(cPoint);
  cartOutput.x = cPoint.x / length;
  cartOutput.y = cPoint.y / length;

  return cartOutput;
}

double DotProductC(CartesianPoint firstPoint, CartesianPoint secondPoint) {
  return (firstPoint.x * secondPoint.x + firstPoint.y * secondPoint.y);
}

CartesianPoint SumC(CartesianPoint firstPoint, CartesianPoint secondPoint) {

  CartesianPoint cartResult;

  cartResult.x = firstPoint.x + secondPoint.x;
  cartResult.y = firstPoint.y + secondPoint.y;

  return cartResult;
}
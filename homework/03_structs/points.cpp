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

  PolarPoint polarR;

  polarR.radius = sqrt(pow(cPoint.x, 2) + pow(cPoint.y, 2));
  polarR.theta = atan2(cPoint.y, cPoint.x);

  return polarR;
}

CartesianPoint PolarToCartesian(PolarPoint pPoint) {

  CartesianPoint cartR;

  cartR.x = pPoint.radius * cos(pPoint.theta);
  cartR.y = pPoint.radius * sin(pPoint.theta);

  return cartR;
}

double LengthC(CartesianPoint cPoint) {
  return (sqrt(pow(cPoint.x, 2.0) + pow(cPoint.y, 2.0)));
}

CartesianPoint NormalizedC(CartesianPoint cPoint) {

  CartesianPoint cartO;

  double length = LengthC(cPoint);
  cartO.x = cPoint.x / length;
  cartO.y = cPoint.y / length;

  return cartO;
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
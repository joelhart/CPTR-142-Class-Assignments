/*
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

struct CartesianPoint {

  double x;
  double y;
};

struct PolarPoint {

  double radius;
  double theta;
};

//  function declarations (prototypes)
PolarPoint CartesianToPolar(CartesianPoint cPoint);
CartesianPoint PolarToCartesian(PolarPoint pPoint);
double LengthC(CartesianPoint cPoint);
CartesianPoint NormalizedC(CartesianPoint cPoint);
double DotProductC(CartesianPoint firstPoint, CartesianPoint secondPoint);
CartesianPoint SumC(CartesianPoint firstPoint, CartesianPoint secondPoint);

#endif // POINTS_H
/*************************************************************************
 *
 * Homework Assignment: Create constructors for the Fraction class
 *
 * File Name:       Fraction.h
 * Name:            hartjo
 * Course:          cp1TR 142
 * Date:            January 22, 2020
 *
 */

#include <cstdlib>
#include <iostream>

using namespace std;

class Fraction {
public:
  Fraction();
  Fraction(int denominator);
  Fraction(int numerator, int denominator);
  // ~Fraction(){};
  // TODO Add fraction constuctors here

  double getDouble();
  void outputReducedFraction();

private:
  int numerator;
  int denominator;
  // Finds greatest common divisor of numerator and denominator
  int gcd();
};

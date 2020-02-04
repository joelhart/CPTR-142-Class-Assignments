/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Fahrenheit.h
 * Name:            hartjo
 * Course:          CPTR 142
 * Date:            2/3
 *
 */

#include "Temperature.h"

#ifndef FAHRENHEIT_H
#define FAHRENHEIT_H

class Fahrenheit : public Temperature {
public:
  Fahrenheit(double temperature) : Temperature(temperature){};

  void printTemperature() const;

  // Conversions
  double getTemperatureInCelsius() const;
  double getTemperatureInFahrenheit() const;
  double getTemperatureInKelvin() const;
};

#endif // Fahrenheit_H

/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Celsius.cpp
 * Name:            hartjo
 * Course:          CPTR 142
 * Date:            2/3
 *
 */

#include "Celsius.h"
#include <iostream>

using namespace std;

void Celsius::printTemperature() const {
  cout << getTemperature() << " Celsius" << endl;
}

double Celsius::getTemperatureInCelsius() const { return getTemperature(); }

double Celsius::getTemperatureInFahrenheit() const {
  return (getTemperatureInCelsius() * 9.0 / 5) + 32;
}

double Celsius::getTemperatureInKelvin() const {
  return (getTemperatureInCelsius() + 273.15);
}

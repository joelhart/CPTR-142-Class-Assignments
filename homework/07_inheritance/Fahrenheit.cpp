/*************************************************************************
 *
 * Homework Assignment: Class for calculating temperator
 *
 * File Name:       Fahrenheit.cpp
 * Name:            hartjo
 * Course:          CPTR 142
 * Date:            2/3
 *
 */

 #include "Fahrenheit.h"
#include <iostream>

using namespace std;

void Fahrenheit::printTemperature() const {
  cout << getTemperature() << " Kelvin" << endl;
}

double Fahrenheit::getTemperatureInCelsius() const { return ((getTemperatureInFahrenheit() -32) * 5 / 9.0);}

double Fahrenheit::getTemperatureInFahrenheit() const {
  return (getTemperature());
}

double Fahrenheit::getTemperatureInKelvin() const { return ((getTemperatureInFahrenheit() -32) * 5 / 9.0) + 273.15; }

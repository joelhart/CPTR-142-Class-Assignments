/****************************************************************************
 *
 * Homework Assignment: Class for using pointers
 *
 * File Name:  zoo.cpp
 * Course:     CPTR 142
 *
 */

// TODO Add code here

// #include "Creature.h"
#include "Zoo.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Zoo::addCreature(CREATURES creatureType, string creatureName) {

  Creature *ptr = nullptr;

  creatures.push_back(ptr);

  *ptr = creatureName;
}

void Zoo::printCensus() {

  for (int i = 0; i < creatures.size(); i++) {
    cout << creatures.at(i) << endl;
  }
}

int getNumberOfLegs() {}

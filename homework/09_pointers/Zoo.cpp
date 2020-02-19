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
#include "Bee.h"
#include "Cat.h"
#include "Duck.h"
#include "Snail.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Zoo::addCreature(CREATURES creatureType, string creatureName) {

  if (creatureType == BEE) {

    // Bee newBee(creatureName);

    // Bee *ptr = nullptr;

    // ptr = &newBee;

    creatures.push_back(new Bee(creatureName));
  }

  if (creatureType == CAT) {

    // Cat newCat(creatureName);

    // Cat *ptr = nullptr;

    // ptr = &newCat;

    creatures.push_back(new Cat(creatureName));
  }

  if (creatureType == DUCK) {

    // Duck newDuck(creatureName);

    // Duck *ptr = nullptr;

    // ptr = &newDuck;

    creatures.push_back(new Duck(creatureName));
  }

  if (creatureType == SNAIL) {

    // Snail newSnail(creatureName);

    // Snail *ptr = nullptr;

    // ptr = &newSnail;

    creatures.push_back(new Snail(creatureName));
  }
}

void Zoo::printCensus() {

  cout << "Zoo Census:" << endl;

  for (int i = 0; i < creatures.size(); i++) {

    Creature *ptr = nullptr;

    ptr = creatures.at(i);

    cout << " - " << ptr->getName();

    cout << " (" << ptr->getDescription() << ")" << endl;
  }
}

int Zoo::getNumberOfLegs() {

  int totalLegs = 0;

  for (int i = 0; i < creatures.size(); i++) {

    Creature *ptr = nullptr;

    ptr = creatures.at(i);

    totalLegs += ptr->getNumberOfLegs();
  }

  return totalLegs;
}
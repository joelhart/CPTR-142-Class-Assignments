/*
Dice.cpp:
What it does: This file contians the dice funciton to allow for rolling dice.
player class.
Name: hartjo Date: 2/3
 */

#ifndef DICE_H
#define DICE_H

#include <cstdlib>

class Dice {
public:
  Dice(int);

  // This function allows for dice rolling
  int diceRoll();
};

#endif
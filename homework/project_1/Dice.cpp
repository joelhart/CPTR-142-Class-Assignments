/*
Dice.cpp:
What it does: This file allows the rolling dice function to work.
player class.
Name: hartjo Date: 2/3
 */

#include "Dice.h"
#include <cstdlib>

Dice::Dice(int seed) { srand(seed); }

int Dice::diceRoll() { return rand() % 6 + 1; }
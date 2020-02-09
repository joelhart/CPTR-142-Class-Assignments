/*
Beetle.h:
What it does: This file contains the header information for beetle.cpp
Name: hartjo
Date: 2/3
 */

#ifndef BEETLE_H
#define BEETLE_H

#include "Players.h"
#include <vector>

using namespace std;

// This function gets the requested seed and number of players for the game
void start(int &seed, int &playerNum);

// This function loops through a vector and stores the amount of players
// requested
void fillPlayerList(vector<Player> &nameList, int size);

// This function is the whole gameplay, which is looped until a player wins
void play(vector<Player> &who, int size, int seed);

#endif
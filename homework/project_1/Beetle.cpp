/*
Beetle.cpp:
What it does: This is pretty much the main.cpp file
Name: hartjo
Date: 2/3
 */

 #include <iostream>
 #include "Beetle.h"
 #include "Dice.h"
 #include <vector>
 #include <string>

 using namespace std;

 int main() {

     int playerNum = 0;
     int seed = 0;

     start(seed, playerNum);

     vector<Player> nameList(playerNum);

     fillPlayerList(nameList, playerNum);

     play(nameList, playerNum, seed);

     return 0;
 }

 void start(int &seed, int &playerNum) {

     cout << "Enter number of players: ";
     cin >> playerNum;

     cout << "Enter seed: ";
     cin >> seed;

 }

 void fillPlayerList(vector<Player> &nameList, int size) {

     for (int i = 0;i < size;i++) {
         Player tempHolder = nameList.at(i);

         cout << "Enter player #";
         cout << i+1;
         cout << "'s name: ";
         cin >> tempHolder.playerName;

         nameList.at(i) = tempHolder;
     }

 }

 void play(vector<Player> &who, int size, int seed) {

     int turnCount = 0;
     Dice roll(seed);
     int rollHold = 0;
     bool continueRound = true;

     do {
            for (int i = 0; i < who.size(); i++) {
                turnCount++;
                rollHold = roll.diceRoll();

                if (who[i].playerBody(rollHold)) {
                    cout << who[i].playerName << " is the winner! It took " << turnCount << " turns to win." << endl;
                    continueRound = false;
                    break;
                }
            }
     } while(continueRound);
 }

 
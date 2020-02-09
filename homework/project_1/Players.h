/*
Players.h:
What it does: This file provides the header and all needed information for the
player class. 
Name: hartjo Date: 2/3
 */

#include <string>
using namespace std;

class Player {
public:
// This function changes all the these variables to keep track of what player has how much of a beetle.
  bool playerBody(int roll);

  string playerName;

private:
    bool body = false;
        bool head = false;
        bool wings = false;
        int wingCount = 0;
        bool eyes = false;
        int eyeCount = 0;
        bool antenna = false;
        int antennaCount = 0;
        bool legs = false;
        int legCount = 0;
        bool finish = false;
};
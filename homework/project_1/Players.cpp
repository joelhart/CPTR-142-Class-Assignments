/*
Players.cpp:
What it does: This file provides all required info for the Player class.
Name: hartjo
Date: 2/3
 */

#include "Players.h"
#include <iostream>

bool Player::playerBody(int roll) {

    switch(roll) {
        case 1:
            if (head == true) {
                eyeCount++;
                if (eyeCount == 2) {
                    eyes = true;
                }
            }
            break;

        case 2:
            if (head == true) {
                antennaCount++;
                if (antennaCount == 2) {
                    antenna = true;
                }
            }
            break;

        case 3:
            if (body == true) {
                legCount++;
                if (legCount == 6) {
                    legs = true;
                }
            }
            break;

        case 4:
            if (body == true) {
                wingCount++;
                if (wingCount == 2) {
                    wings = true;
                }
            }
            break;

        case 5:
            if (body == true) {
                head = true;
            }
            break;

        case 6:
            body = true;
            break;
    }

    if (body && head && wings && legs && antenna && eyes) {
        return true;
    } else {
        return false;
    }
}
//	time.cpp

#include <iostream> 	// for cin and cout
#include <iomanip>      // for setfill() and setw()
#include "Time.h"
using namespace std;

Time::Time() {
    hours = 0;
    minutes = 0;
}

Time::Time(int hours, int minutes) {
    this->hours = hours;
    this->minutes = minutes;
}

void Time::print() {
    cout << setfill('0') << setw(2) << hours << ":"
         << setfill('0') << setw(2) << minutes << endl;
}


/*************************************************************************
 *
 * Exercise: Towers of Hanoi
 *
 * File Name:   towers.cpp
 * Username:  	hartjo
 * Username:  	fairka
 * Course:      CPTR 142
 *
 */

#include <iomanip>      // for setw()
#include <iostream>     // for cin and cout
#include <vector>
using namespace std;

// function prototype
void moveTower(int disks, vector<string> &source, vector<string> &destination, vector<string> &temporary);
void print();
void print(string ring);
void moveDisk(vector<string> &source, vector<string> &destination);
int indexOfTopDisk(vector<string> &tower);

// globals
vector<string> leftTower = {"    ===   ", "   =====  ", "  ======= ", " =========" };
vector<string> centerTower;
vector<string> rightTower;

int main() {

    for (int i = 0; i < leftTower.size(); ++i) {
        centerTower.push_back("");
        rightTower.push_back("");
    }
    print();
    moveTower(leftTower.size(), leftTower, rightTower, centerTower);

    return 0;
}

void print() {
    cout << endl;
    for (int i = 0; i < leftTower.size(); ++i) {
        print(leftTower.at(i));
        print(centerTower.at(i));
        print(rightTower.at(i));
        cout << endl;
    }
    cout << " ----+---- ----+---- ----+----" << endl;
}

void print(string ring) {
    if (ring.size() > 0) {
        cout << ring;
    } else {
        cout << "     |    ";
    }
}


// void moveTower(int disks, source, destination, temporary){
//     if (disks == 0) {
//         return
//     } else {
//     ELSE:
//         move all but one disk from source to temporary using destination as spare
//         move one disk from source to destination
//         print current layout
//         move all but one disk from temporary to destination using source as spare
//     END IF
//     }
// }

void moveTower(int disks, vector<string> &source, vector<string> &destination, vector<string> &temporary) {
    // TODO: implement recursive function as described above in comments
if (disks == 0) {
        return;
    } else {
        moveTower(disks - 1, source, temporary, destination); 
            moveDisk(source, destination);
            print();
            moveTower(disks - 1, temporary, destination, source);
        }
    }

void moveDisk(vector<string> &source, vector<string> &destination) {
    int i = indexOfTopDisk(source);
    int j = indexOfTopDisk(destination);
    destination.at(j - 1) = source.at(i);
    source.at(i) = "";
}

int indexOfTopDisk(vector<string> &tower) {
    for (int i = 0; i < tower.size(); ++i) {
        if (tower.at(i).size() > 0) {
            return i;
        }
    }
    return tower.size();
}

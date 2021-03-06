/*************************************************************************
 *
 * Exercise: Recursive Search
 *
 * File Name:   search.cpp
 * Username:  	hartjo
 * Username:  	?
 * Course:      CPTR 142
 *
 */

#include <algorithm>    // sort()
#include <cstdlib>      // rand()
#include <iostream>     // for cin and cout
#include <vector>
using namespace std;

// function prototype
int mySearch(vector<int> myNums, int left, int right, int target);

int main() {
    srand(0);
    vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(rand() % 100 + 1);
    }
    sort(numbers.begin(), numbers.end());
    for (auto j : numbers) {
        cout << j << " ";
    }
    cout << endl << "What number shall I search for? ";
    int goal;
    cin >> goal;

    int index = mySearch(numbers, 0, numbers.size() - 1, goal);

    cout << "Found at index " << index << endl;
    return 0;
}

int mySearch(vector<int> myNums, int left, int right, int target) {
    int midPoint = (right + left) / 2;
    int midValue = myNums.at(midPoint);
    if (midValue == target) {
        return midPoint;
    } else if (midValue < target) {
        return mySearch(myNums, midPoint + 1, right, target);
    } else if (target < midValue) {
        return mySearch(myNums, left, midPoint, target);
    }

    return -1;
}

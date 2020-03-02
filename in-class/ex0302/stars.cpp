/*************************************************************************
 *
 * Exercise: Stars through Recursion
 *
 * File Name:   stars.cpp
 * Username:  	hartjo
 * Username:  	?
 * Course:      CPTR 142
 *
 */
#include <iostream>
using namespace std;

// function prototype
void stars(int count);

int main() {
  // test recursive function
  stars(3);
  cout << endl;
  stars(7);

  return 0;
}

// print count stars on one line, then one less on the next line
void stars(int count) {
  if (count > 0) {
    for (int i = 0; i < count; i++) {
      cout << "*";
    }
    cout << endl;
    stars(count - 1);
  }
}

void starsRow(int count) {

    if (count > 0) {
        stars(count - 1);
        starsRow(count);
        cout << endl;

        }
    }



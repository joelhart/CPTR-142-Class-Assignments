/*************************************************************************
 *
 * In-Class Exercise: Queue
 *
 * File Name: queue.cpp
 * Username:  hartjo
 * Username:  fairka
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <queue>
using namespace std;

int main() {

  // define a variable to hold a queue of customers
  queue<string> custo;

  // add a few customers
  custo.push("Jim");
  custo.push("Jack");
  custo.push("Jeff");
  custo.push("Jerry");

  cout << "We have " << custo.size() << " customers waiting." << endl;
  cout << "The first in line is " << custo.front() << endl;
  // help first customer and remove from queue

  custo.pop();

  cout << "After helping one customer, we have " << custo.size() << " customers waiting" << endl;
  cout << "and the next in line is " << custo.front() << endl;

  return 0;
}

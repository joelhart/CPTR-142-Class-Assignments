/*************************************************************************
 *
 * In-Class Exercise: deque
 *
 * File Name: deque.cpp
 * Username:  hartjo
 * Username:  fairka
 * Course:    CPTR 142
 *
 */

#include <iostream> 	// for cin and cout
#include <deque>
using namespace std;

int main() {
  // exercise 1
  // TODO: define a variable to hold a deque of books to be used as a stack
  deque<string> stack;

  // TODO: add a few books to the front
  stack.push_front("book1");
  stack.push_front("book2");
  stack.push_front("book3");

  cout << "We have " << stack.size() << " books." << endl;
  cout << "The most recent one is " << stack.front() << endl;
  // read the first book and remove from queue

  stack.pop_front();

  cout << "After removing the first one, we have " << stack.size() << " books" << endl;
  cout << "and the next one is " << stack.front() << endl;

  return 0;
}

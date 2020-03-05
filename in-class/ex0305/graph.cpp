/*************************************************************************
 *
 * Exercise: Graph Structure
 *
 * File Name:   graph.cpp
 * Username:  	hartjo
 * Username:  	fairka
 * Course:      CPTR 142
 *
 */

#include <iostream> // for cin and cout
#include <vector>
using namespace std;

class Node {
public:
  Node() {
    value = rand() % 100;
    cout << "created " << value << endl;
  }
  int getValue() { return value; }
  void addLinkTo(Node *node);
  void print();

private:
  int value;
  vector<Node *> links;
};

void Node::addLinkTo(Node *node) {
  // check to see if we already have a link to this node
  for (int i = 0; i < links.size(); ++i) {
    if (links.at(i) == node) {
      cout << "found link from " << value << " to " << node->getValue() << endl;
      return;
    }
  }
  cout << "adding link from " << value << " to " << node->getValue() << endl;
  links.push_back(node);
  node->addLinkTo(this);
}

void Node::print() {
  // TODO: print information about this node and its links
}

int main() {
  // set random seed to we have a reproducable case
  srand(0);
  // create a collection of four nodes
  vector<Node *> nodes;
  for (int i = 0; i < 4; ++i) {
    nodes.push_back(new Node);
  }
  // link each node to each other node
  for (int i = 0; i < nodes.size(); ++i) {
    for (int j = i + 1; j < nodes.size(); ++j) {
      nodes.at(i)->addLinkTo(nodes.at(j));
    }
  }
  // print the nodes
  for (int i = 0; i < nodes.size(); ++i) {
    nodes.at(i)->print();
  }
  return 0;
}

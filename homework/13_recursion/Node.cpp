/*************************************************************************
 *
 * Homework: Grand Tour
 *
 * File Name:   Node.cpp
 * Username:  	bronco
 * Course:      CPTR 142
 * Date:        3/8/20
 *
 */

#include <algorithm> // for find()
#include <iostream>  // for cin and cout
using namespace std;
#include "Node.h"
#include <vector>

// static variable to hold the next label
char Node::nextLabel = 'A';

// add a link to a node
void Node::addLinkTo(Node *node, int cost) {
  // check to see if the link already exists
  for (int i = 0; i < linkAndCostPairs.size(); ++i) {
    if (linkAndCostPairs.count(node) == 1) {
      return;
    }
  }
  // add the link to this node
  linkAndCostPairs.emplace(node, cost);
  // and add a mirror link to here from there
  node->addLinkTo(this, cost);
}

// print a node with its links
void Node::print() {
  cout << "node " << (char)this->getLabel() << " has links to" << endl;
  for (auto linkAndCostPair : linkAndCostPairs) {
    cout << "  " << (char)(linkAndCostPair.first)->getLabel()
         << " with cost of " << linkAndCostPair.second << endl;
  }
}

int Node::costOfPath(deque<Node *> path) {
  // remove the current node from the front of the path

  path.pop_front();

  // if nothing more, then return cost of zero

  if (path.size() == 0) {

    return 0;
  }

  Node *front = path.front();

  return linkAndCostPairs.at(front) + front->costOfPath(path);

  // return cost to next node plus cost from there to end
}

void Node::printPath(deque<Node *> path) {
  // print the current label

  cout << label;
  flush(cout);

  // remove the current node from the front of the path

  path.pop_front();

  // if something more, then print it (recursion)

  // print a dash, then recurse to print remaining path

  if (path.size() > 0) {

    cout << "-";

    Node *front = path.front();
    front->printPath(path);
  }
}

// add to a vector of paths leading back home
void Node::findPaths(deque<Node *> currentPath, vector<deque<Node *>> &allPaths,
                     string indent) {
  // cout << indent << "findPaths() - starting at " << label << endl;

  // BASE CASE 1: if `this` is not home but part of the current path, do nothing
  for (int i = 1; i < currentPath.size(); i++) {
    if (currentPath.at(i) == this) {
      return;
    }
  }

  // we are visiting a new node, so add `this` to end of the current path

  currentPath.push_back(this);

  // BASE CASE 2: if we left home and got back, add currentPath to allPaths
  if (this == currentPath.front() && currentPath.size() > 1) {
    allPaths.push_back(currentPath);
    return;
  }

  // RECURSION: visit each child (link) and add any discovered paths
  for (auto child : linkAndCostPairs) {
    Node *childNode = child.first;
    childNode->findPaths(currentPath, allPaths, indent + " ");
  }
}

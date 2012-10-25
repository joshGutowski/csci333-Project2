#include "Node.h"
#include <iostream>

Node::Node(int n) {
  value = n;
  next = 0; 
}

Node::~Node() {

}

int Node::getValue() {
  return value;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node* n) {
 next = n;
}

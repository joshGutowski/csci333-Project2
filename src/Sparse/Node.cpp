#include "Node.h"
#include <iostream>
#include <string>

template <typename T>
Node::Node(int r, int c, T v) {
  val = v;
  col = c;
  row = r;
  
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

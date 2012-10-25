#include "Node.cpp"
#include "LLqueue.h"
#include <iostream>
#include <assert.h>

LLQueue::LLQueue() {
  front = 0;
  back = 0;
  elements = 0;
}

LLQueue::~LLQueue() {
  while(!isEmpty()) {
    dequeue();
  }
}

void LLQueue::enqueue(int n) {
  Node* temp = new Node(n);
  if(front == 0) {
    front = temp;
    back = temp;
    delete temp;
  }
  else {
    back->setNext(temp);
    delete temp;
  }
  elements++;
}

int LLQueue::dequeue() {
  assert(elements > 0);
  Node* temp = front;
  int result = front->getValue();
  if(elements == 1) {
    front = new Node(0);
  }
  else {
  front = front->getNext();
  }
  delete temp;
  elements--;
  return result;
}

int LLQueue::size() {
  return elements;
}

bool LLQueue::isEmpty() {
  if(elements <= 0) {
    return true;
  }
  else {
    return false;
  }
}

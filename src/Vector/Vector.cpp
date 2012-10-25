#include "Lqueue.h"
#include <iostream>
#include "assert.h"

LQueue::LQueue() {
  theQueue = new std::list<int>();
}

LQueue::~LQueue() {
  delete theQueue;
}

void LQueue::enqueue(int n) {
  theQueue->push_back(n);
}

int LQueue::dequeue() {
  assert(theQueue->size() > 0);
  int result = theQueue->front();
  theQueue->pop_front();
  return result;
}

int LQueue::size() {
  return theQueue->size();
}

bool LQueue::isEmpty() {
  if(theQueue->size() <= 0) {
    return true;
  }
  else {
    return false;
  }
}

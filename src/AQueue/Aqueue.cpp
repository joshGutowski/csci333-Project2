#include "Aqueue.h"
#include <iostream>

AQueue::AQueue(int initialSize) {
  initSize = initialSize;
  theQueue = new int[initialSize];
  cap = initialSize;
  front = 0;
  back = 0;
  elements = 0;
}

AQueue::~AQueue() {
  delete[] theQueue;
}

void AQueue::enqueue(int n) {
  if(elements >= cap) {
    int a = 0;
    temp = new int[2*cap];
    for(int i=0; i<=cap; i++) {
      temp[a] = theQueue[i];
      a++;
    }
    delete[] theQueue;
    theQueue = temp;
    cap = cap*2;
  }
 theQueue[back] = n;
  back = (back+1)%cap;
  elements++;
}

int AQueue::dequeue() {
  if((cap/4) >= elements && (cap/4) > initSize) {
    int a = 0;
    temp = new int[cap/2];
    for(int i=0; i<=elements; i++) {
      temp[a] = theQueue[i];
      a++;
    }
    delete[] theQueue;
    theQueue = temp;
    cap = cap/2;
  }
  int result = theQueue[front];
  front = (front+1)%cap;
  elements--;
  return result;
}

int AQueue::size() {
  return elements;
}

bool AQueue::isEmpty() {
 if(elements <= 0) {
    return true;
  }
  else {
    return false;
  }
}

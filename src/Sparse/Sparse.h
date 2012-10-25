#ifndef __LLQUEUE_H__
#define __LLQUEUE_H__
#include "Node.h"

class LLQueue {
 private:
  int* theQueue;
  int elements;
  Node* front;
  Node* back;

 public:
  LLQueue();
  ~LLQueue();
  void enqueue(int n);
  int dequeue();
  int size();
  bool isEmpty();
};

#endif

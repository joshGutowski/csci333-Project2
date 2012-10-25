#ifndef __AQUEUE_H__
#define __AQUEUE_H__

class AQueue {
 private:
  int* theQueue;
  int* temp;
  int cap;
  int front;
  int back;
  int elements;
  int initSize;

 public:
  AQueue(int initialSize = 10);
  ~AQueue();
  void enqueue(int n);
  int dequeue();
  int size();
  bool isEmpty();
};
#endif

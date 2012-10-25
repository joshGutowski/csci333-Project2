#include <iostream>
#include <ctime>
#include "../AQueue/Aqueue.h"
#include "../LQueue/Lqueue.h"
#include "../LLQueue/LLqueue.h"

using std::cout;
using std::endl;

int main() {
  int start, end, elapsed;
  double seconds;

  start = clock();
  AQueue* aqueue = new AQueue();
  for(long i=0; i<10000000; i++) {
    aqueue->enqueue(i);
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "AQueue Elapsed Time: " << seconds << " seconds " << endl;
  delete aqueue;

  start = clock();
  LQueue* lqueue = new LQueue();
  for(long i=0; i<10000000; i++) {
    lqueue->enqueue(i);
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "LQueue Elapsed Time: " << seconds << " seconds " << endl;
  delete lqueue;

  start = clock();
  LLQueue* llqueue = new LLQueue();
  for(long i=0; i <10000000; i++) {
    llqueue->enqueue(i);
  }
  end = clock();
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  cout << "LLQueue Elapsed Time: " << seconds << " seconds " << endl;

}

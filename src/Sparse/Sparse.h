#ifndef __SPARSE_H__
#define __SPARSE_H__
#include "Node.h"

template <typename T>
class Sparse {
 private:
  Node<T>** rows;
  Node<T>** cols;
  int row;
  int col;
  T defVal;

 public:
  Sparse<T>(int r, int c, T def);
  ~Sparse<T>();
  void insert(int r, int c, T val);
  T access(int r, int c);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif

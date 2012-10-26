#ifndef __VECTORARRAY_H__
#define __VECTORARRAY_H__

#include <vector>

using std::vector;

template <typename T>
class VectorArray {
 private:
  vector<vector<T> > *theArray;
  int numRows;
  int numCols;
  T defVal;

 public:
  VectorArray<T>(int r, int c, T def);
  ~VectorArray<T>();
  void insert(int r, int c, T val);
  T access(int r, int c);
  void remove(int r, int c);
  void print();
  int getNumRows();
  int getNumCols();
};

#endif

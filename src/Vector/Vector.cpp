#include <string>
#include <iostream>
#include <assert.h>
#include <vector>
using std::vector;

#include "Vector.h"

//constructor
template<typename T>
VectorArray<T>::VectorArray(int r, int c, T def) {
  assert(r>0 && c>0);
  numRows = r;
  numCols = c;
  defVal = def;
  vector<T> column;
  for(int i=0; i<numCols; i++){
    column.push_back(defVal);
  }
  for(int j=0; j<numRows; j++){
    theArray.push_back(column);
  }
  
}

//destructor
template<typename T>
VectorArray<T>::~VectorArray() {

}

//insert value v at index r.c
template<typename T>
void VectorArray<T>::insert(int r, int c, T val) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  theArray[r][c] = val; 
}

//get the value at index r,c
template<typename T>
T VectorArray<T>::access(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  return theArray[r][c];
}

//set the value at index r,c back to the default value
template<typename T>
void VectorArray<T>::remove(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  theArray[r][c] = defVal;
}

//print the VectorArray
template<typename T>
void VectorArray<T>::print() {
  for(int i=0; i<numRows; i++){
    for(int j=0; j<numCols; j++){
      std::cout << theArray[i][j] << std::endl;
    }
  }
}

//getters for iteration
template<typename T>
int VectorArray<T>::getNumRows() {
  return numRows;
}

template<typename T>
int VectorArray<T>::getNumCols() {
  return numCols;
}

template class VectorArray<int>;
template class VectorArray<double>;
template class VectorArray<std::string>;

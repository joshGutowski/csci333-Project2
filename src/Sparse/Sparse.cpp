#include <string>
#include <iostream>
#include <assert.h>

#include "Sparse.h"

//constructor
template<typename T>
Sparse<T>::Sparse(int r, int c, T def) {
  assert(r>0 && c>0);
  numRows = r;
  numCols = c;
  defVal = def;
  theArray = new T*[numRows];
  for(int i=0; i<numRows; i++){
    theArray[i] = new T[numCols];
  }
  for(int i=0; i<numRows; i++){
    for(int j=0; j<numCols; j++){
      theArray[i][j] = defVal;
    }
  }
}

//destructor
template<typename T>
Sparse<T>::~Sparse() {
  for(int i=0; i<numRows; i++){
    delete[] theArray[i];
  }
  delete[] theArray;
}

//insert value v at index r.c
template<typename T>
void Sparse<T>::insert(int r, int c, T val) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  theArray[r][c]=val; 
}

//get the value at index r,c
template<typename T>
T Sparse<T>::access(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  return theArray[r][c];
}

//set the value at index r,c back to the default value
template<typename T>
void Sparse<T>::remove(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  theArray[r][c] = defVal;
}

//print the Sparse
template<typename T>
void Sparse<T>::print() {
  for(int i=0; i<numRows; i++){
    for(int j=0; j<numCols; j++){
      std::cout << theArray[i][j] << std::endl;
    }
  }
}

//getters for iteration
template<typename T>
int Sparse<T>::getNumRows() {
  return numRows;
}

template<typename T>
int Sparse<T>::getNumCols() {
  return numCols;
}

template class Sparse<int>;
template class Sparse<double>;
template class Sparse<std::string>;

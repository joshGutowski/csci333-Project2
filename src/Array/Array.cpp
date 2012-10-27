#include <string>
#include <iostream>
#include <assert.h>

#include "Array.h"

//constructor
template<typename T>
TwoDArray<T>::TwoDArray(int r, int c, T def) {
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
TwoDArray<T>::~TwoDArray() {
  for(int i=0; i<numRows; i++){
    delete[] theArray[i];
  }
  delete[] theArray;
}

//insert value v at index r.c
template<typename T>
void TwoDArray<T>::insert(int r, int c, T val) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  theArray[r][c]=val; 
}

//get the value at index r,c
template<typename T>
T TwoDArray<T>::access(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  return theArray[r][c];
}

//set the value at index r,c back to the default value
template<typename T>
void TwoDArray<T>::remove(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  theArray[r][c] = defVal;
}

//print the TwoDArray
template<typename T>
void TwoDArray<T>::print() {
  for(int i=0; i<numRows; i++){
    for(int j=0; j<numCols; j++){
      std::cout << theArray[i][j];
    }
    std::cout << "" <<std::endl;
  }
  std::cout << "" <<std::endl;
}

//getters for iteration
template<typename T>
int TwoDArray<T>::getNumRows() {
  return numRows;
}

template<typename T>
int TwoDArray<T>::getNumCols() {
  return numCols;
}

template class TwoDArray<int>;
template class TwoDArray<double>;
template class TwoDArray<std::string>;

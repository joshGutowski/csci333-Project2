#include <string>
#include <iostream>
#include <assert.h>

#include "Sparse.h"
#include "Node.cpp"

using std::cout;
using std::endl;

//constructor
template<typename T>
Sparse<T>::Sparse(int r, int c, T def) {
  assert(r>0 && c>0);
  numRows = r;
  numCols = c;
  defVal = def;
  rows = new Node<T>*[r];
  cols = new Node<T>*[c];
  for(int i=0; i<numRows; i++){
    rows[i] = 0;
  }
  for(int i=0; i<numCols; i++){
    cols[i] = 0;
  }
}

//destructor
template<typename T>
Sparse<T>::~Sparse() {
  for(int i=0; i<numRows; i++){
    Node<T>** curr = &(rows[i]);
    while(*curr != 0){
      Node<T>* temp = *curr;
      curr = &((*curr)->getNextCol());
      delete temp;
    }
  }
}

//insert value v at index r.c
template<typename T>
void Sparse<T>::insert(int r, int c, T val) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  Node<T>** currRow = &rows[r];
  Node<T>** currCol = &cols[c];
  while(*currRow != 0 && (*currRow)->getRow() < r){
    currRow = &((*currRow)->getNextRow());
  }
  while(*currCol != 0 && (*currCol)->getCol() < c){
    currCol = &((*currCol)->getNextCol());
  }
  Node<T>* temp = new Node<T>(r,c,val);
  temp->setNextRow(**currRow);
  *currRow = temp;
}

//get the value at index r,c
template<typename T>
T Sparse<T>::access(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  Node<T>** currRow = &rows[r];
  while(*currRow != 0){
    if((*currRow)->getRow() == r && (*currRow)->getCol() == c){
      return (*currRow)->getValue();
    }
    else{
      currRow = &((*currRow)->getNextRow());
    }
  }
    return defVal;
}

//set the value at index r,c back to the default value
template<typename T>
void Sparse<T>::remove(int r, int c) {
  assert(r<=numRows && r>=0 && c<=numCols && c>=0);
  insert(r,c,defVal);

  /*  Node<T>** currRow = &(rows[r]);
  Node<T>** currCol = &(cols[c]);
  Node<T>** prevRow = currRow;
  Node<T>** prevCol = currCol;
  while(*currRow != 0 && (*currRow)->getRow() < r){
    prevRow = currRow;
    currRow = &((*currRow)->getNextRow());
  }
  while(*currCol != 0 && (*currCol)->getCol() < c){
    prevRow = currRow;
    currCol = &((*currCol)->getNextCol());
  }

  Node<T>* temp = *prevRow;
  
  (*currCol)->setNextCol(**currCol);
  delete temp;
  */
}

//print the Sparse
template<typename T>
void Sparse<T>::print() {
  for(int i=0; i<numRows; i++){
    for(int j=0; j<numCols; j++){
      std::cout << access(i,j) << std::endl;
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

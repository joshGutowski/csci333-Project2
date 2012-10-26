#include "Node.h"
#include <iostream>
#include <string>

template <typename T>
Node<T>::Node(int r, int c, T v) {
  val = v;
  col = c;
  row = r;
  nextCol = 0;
  nextRow = 0;
}

template <typename T>
Node<T>::~Node() {

}

template <typename T>
Node<T>*& Node<T>::getNextCol() {
  return nextCol;
}

template <typename T>
Node<T>*& Node<T>::getNextRow() {
  return nextRow;
}

template <typename T>
void Node<T>::setNextCol(Node<T>& n) {
  nextCol = &n;
}

template <typename T>
void Node<T>::setNextRow(Node<T>& n) {
  nextRow = &n;
}

template <typename T>
T Node<T>::getValue() {
  return val;
}

template <typename T>
int Node<T>::getRow() {
  return row;
}

template <typename T>
int Node<T>::getCol() {
  return col;
}

template class Node<int>;
template class Node<double>;
template class Node<std::string>;

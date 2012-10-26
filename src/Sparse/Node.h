#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
 private:
  T val;
  Node<T>* nextRow;
  Node<T>* nextCol;
  int row;
  int col;

 public:
  Node<T>(int r, int c, T v);
  ~Node();
  Node<T>*& getNextCol();
  Node<T>*& getNextRow();
  void setNextCol(Node<T>& n);
  void setNextRow(Node<T>& n);
  T getValue();
  int getRow();
  int getCol();
};


#endif


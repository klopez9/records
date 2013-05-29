
#ifndef LINKED_LIST_H__
#define LINKED_LIST_H__

#include <iostream>
#include <string>
#include "Node.h"

template <class T>
class LinkedList {
  
 public:
  // empty constructor
  LinkedList();
  void insertLastNode(T* srIn);
  void removeFirstNode();
  void displayList();
  Node<T>* getFirst();
  int getLength();
  int findByValue(int ID);
  
  // destructor
  ~LinkedList();
  
 private:
  Node<T>* first;
  int count;
  // internal method used by displayList
  // void displayStudentRecord(T* record);

};

// Note: special case for compiling templates
// .h file includes the ".cc" file
#include "LinkedList.cc"

#endif // LINKED_LIST_H__

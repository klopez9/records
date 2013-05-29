
#ifndef NODE_H__
#define NODE_H__

#include <string>
//#include "StudentRecord.h"

template <class T>
class Node {
    // note, just for this assignment, to get used to pointer notation
    // for linked lists, the data members of a node have been made public
    // This DOES violate the ADT principles that we have discussed.
 public:
    T *data;
    Node* next;
    Node* prev;
  
 public:
    Node();
    Node(T *dataIn, Node* nextIn, Node* prevIn);
    Node *getNext();
    Node *getPrev();
    void setNext(Node* nextIn);
    void setPrev(Node* prevIn);
    T* getData();
    void setData(T* dataIn);
    ~Node();
};

// Note: special case for compiling templates
// .h file includes the ".cc" file
#include "Node.cc"


#endif // NODE_H__

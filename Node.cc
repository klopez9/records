
#include "Node.h"

/*
* default constructor
*/
template <class T>
Node<T>::Node() {
    data = NULL;
    next = NULL;
    prev = NULL;
}
/*
* explicit value constructor
*/
template <class T>
Node<T>::Node(T *dataIn, Node* nextIn, Node* prevIn) {
    data = dataIn;
    next = nextIn;
    prev = prevIn;
}
/*
* accessor for the data member "next"
*/
template <class T>
Node<T>* Node<T>::getNext() {
    return next;
}
/*
* mutator for the data member "next"
*/
template <class T>    
void Node<T>::setNext(Node* nextIn) {
    next = nextIn;
}
/*
* accessor for the data member "prev"
*/
template <class T>
Node<T>* Node<T>::getPrev() {
    return prev;
}
/*
* mutator for the data member "prev"
*/
template <class T>    
void Node<T>::setPrev(Node* prevIn) {
    prev = prevIn;
}
/*
* accessor for the data member "data"
*/
template <class T>
T* Node<T>::getData() {
    return data;
}
/*
* mutator for the data member "data"
*/
template <class T>
void Node<T>::setData(T* dataIn) {
    data = dataIn;
}
/*
* destructor
* (only needs to delete "data" since
* it's the only allocated data member)
*/
template <class T>
Node<T>::~Node() {
  if (data != NULL) 
	  delete data;
    // its next pointer is deleted by LinkedList.cc
}

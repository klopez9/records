
#include "LinkedList.h"
using namespace std;

/*
* default constructor
*/
template <class T>
LinkedList<T>::LinkedList() {
  first = NULL;
  count = 0;
}

/*
* inserts a Node of record type T at
* the last position in the LinkedList
*/
template <class T>
void LinkedList<T>::insertLastNode(T *recordIn) {
  Node<T> *newNode = new Node<T>(recordIn, NULL, NULL);

  if (first == NULL) {
    first = newNode;
    newNode->prev = NULL;
  } else {
    Node<T> *temp;
    temp = first;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
  newNode->next = NULL;
  count++;
}

/*
* removes a Node of record type T at
* the first position in the LinkedList
*/
template <class T>
void LinkedList<T>::removeFirstNode() {
  if (first != NULL) {
    Node<T> *temp;
    if (first->next != NULL) {
      temp = first->next;
    } else {
      temp = NULL;
    }
    delete first;
    first = temp;
    count--;
  } else {
    cout << "\tList is empty" << '\n' << '\n';
  }
}

/*
* displays all Nodes of record
* type T at in the LinkedList
*/
template <class T>
void LinkedList<T>::displayList() {
  Node<T> *temp;
  if (first != NULL) {
    cout << "Begin List" << '\n';
    temp = first;
    while (temp != NULL) {
      // could be StudentRecord, EmployeeRecord, or AlumniRecord
      temp->getData()->displayRecord();
      temp = temp->next;
    }
    cout << "End List" << '\n';
  } else {
    cout << "\tList is empty" << '\n' << '\n';
  }
}
/*
* accessor for the data member "first"
*/
template <class T>
Node<T>* LinkedList<T>::getFirst() {
  return first;
}
/*
* accessor for the data member "count"
*/
template <class T>
int LinkedList<T>::getLength() {
  return count;
}

template <class T>
int LinkedList<T>::findByValue(int ID) {
  int found = 0;
  if (first != NULL) {
    Node<T> *temp;
    temp = first;
    while (temp != NULL) {
      if (temp->getData()->getID() == ID) {
	temp->getData()->displayRecord();
	found = 1;
      }
      temp = temp->next;
    }
  }
  if (found == 0)
    cout << "No record exists with ID " << ID << '\n';
}
  
/*
* destructor
* (loops through and deletes
* (i.e. calls destructors for)
* all Nodes in the LinkedList)
*/
template <class T>
LinkedList<T>::~LinkedList() {
  if (first != NULL) {
    Node<T>* temp;
    temp = first;
    while (temp != NULL) {
      temp = temp->next;
      delete first;
      first = temp;
    }
  }
}

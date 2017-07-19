// Sarah Botwinick
// Link class
//Prog3

#ifndef LINK_H
#define LINK_H
class Node;
#include <iostream>
using namespace std;

class Link {
public:
  char next;
  Node* nextNode;
  //constructor
  Link(char next, Node *nextNode);
  Link();
  //destructor
  ~Link();

};

#endif

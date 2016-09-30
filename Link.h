// Sarah Botwinick
// Link class
//Prog3

#ifndef LINK_H
#define LINK_H
class Node;
//#include "Node.h"
#include <iostream>
using namespace std;

class Link {
public:
  char next;
  // do i need to do something to get the node class into here? or is
  // that done in the main function?
  Node* nextNode;
  //constructor
  Link(char next, Node *nextNode);
  Link();
  // Link(const Link&);
  //is this constructor done correctly? same question for node class

  //destructor
  ~Link();

};

#endif

#include <cstdlib>
#include "Link.h"
#include "Node.h"
//constructors
Link::Link(){
  next = '\0';
  nextNode = NULL;
}

Link::Link(char next, Node *nextNode) {
  this -> next = next;
  this -> nextNode = nextNode;
}

Link::~Link() {
}




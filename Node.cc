#include <cstdlib>
#include "Node.h"

//constructors
//default
Node::Node(){
  nodeVal = 0;
  narray = new Link*[10];
  numUsed = 0;
}

Node::Node(int nodeVal){
  numUsed = 0;
  narray = new Link*[10];
  this -> nodeVal = nodeVal;
}
  




//destructor
Node::~Node() {
  if(narray != NULL){
    delete [] narray;
  }
}

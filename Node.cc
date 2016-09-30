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
  
//  Node::Node(int n):nodeval(n), narray(Link::EMPTY){
//numused = new int[nodeval];
//}



//destructor
Node::~Node() {
  if(narray != NULL){
    delete [] narray;
  }
}

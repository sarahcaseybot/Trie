//Sarah Botwinick
//node class
//Prog 3

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "Link.h"
using namespace std;

class Node {
public:
  //Constructors
  //int endval;
  Node(int n);
  Node();
  // Link* narray [10] ;
  // int num;
  // Node(const Node&);

  //destructor
  ~Node();
  int nodeVal;
  Link** narray;
  int numUsed;

};

#endif

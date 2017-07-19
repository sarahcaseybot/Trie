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
  Node(int n);
  Node();
  ~Node();
  int nodeVal;
  Link** narray;
  int numUsed;

};

#endif

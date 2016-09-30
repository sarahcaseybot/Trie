// Sarah Botwinick
// Trie class
// prog 3

#ifndef TRIE_H

#define TRIE_H

#include <iostream>
using namespace std;
#include "Link.h"
#include "Node.h"

class Trie {
public:
  //constructors
  Trie();
  Node* start;
  //destructor
  ~Trie();

  // member functions
  void put(string key, int value);
  int get(string key);
};
#endif

/*
  CSE 109
  Sarah Botwinick
  scb219
  Program Description: Trie
  Program #3
*/
#include "Trie.h"
using namespace std;
int main(){
  Trie t;
  t.put("Lehigh", 1);
  t.put("Lemon", 2);
  t.put("Learn", 20);
  t.put("yoga", -8);
  cout << t.get("Lehigh") << endl;
  cout << t.get("Lemon") << endl;
  cout << t.get("Learn") << endl;
  cout << t.get("yoga") << endl;
}

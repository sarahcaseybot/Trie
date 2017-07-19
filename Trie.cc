#include <iostream>
#include "Trie.h"
#include "Node.h"
#include "Link.h"
using namespace std;

//Constructor
Trie::Trie(){
  start = new Node();
}

void Trie::put(string key, int value){
unsigned  int current = 0;
 unsigned  int position = 0;
 Node *look =  start;

  for(current = 0; current<key.length(); current++){
   bool found = false;
   for(position = 0; position < (unsigned)(look -> numUsed); position++){
     if (key[current] == ((look -> narray[position]) -> next)){
       look = (*(look -> narray[position])).nextNode; //assigning look
						      //to
       //point to
       //the next
       //node
       found = true;
       break;
     }
        }

   if (found == false){
     if(look -> numUsed < 10){
     if(current == (key.length() - 1)) {
       Node *lastPlace = new Node(value);
       Link *newL = new Link(key[current], lastPlace);
       look -> narray[look->numUsed] = newL;
       look -> numUsed += 1;
     }
     else{
       Node *place = new Node();
       Link *newL = new Link(key[current], place);
       look -> narray[look->numUsed] = newL;
       look -> numUsed += 1;
       look = (*(look -> narray[look->numUsed - 1])).nextNode;
     }
   }
     else{
       return;
     }
   }
 }
   
}
 
int Trie::get(string key){
  unsigned  int current = 0;
  unsigned  int position = 0;
  Node *look = start;
  for(current = 0; current<key.length(); current++){
   bool found = false;
    for(position = 0; position < (unsigned)(look -> numUsed); position++){
     
      if (key[current] == ((look -> narray[position]) -> next)){


	look = (*(look -> narray[position])).nextNode; //assigning look to

      if(current == (key.length() - 1)){
	  return look ->  nodeVal;
	}

	found = true;
	break;
      //point to
      //the next
      //node
     
    }
  }
  if (found == false) {
  return -1;
  }
  }

  return -1;
  //use for loop to check each link, if its equal, go to next node
  //after going through the entire key, if the node equals 0 return
  //value inside
  }

Trie::~Trie() {

}

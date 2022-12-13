#include <iostream>
using namespace std;
#include "node.h"

class LL{
  NodePtr hol;
  NodePtr temp;
  int size;
  public:
    LL();
    ~LL();
    void insert_node(string,int,int);
    void print();
    void move_right();
    void move_left();
    void printList();
};

LL::LL(){
  hol=NULL;
  size=0;
}

LL::~LL(){
  NodePtr t;
  t=hol;
  int i;
 for(i=0;i<size;i++){
      hol=hol->get_next();
      delete t;
      t=hol;
  }
}

void LL::print(){
  NodePtr t;
  t=hol;
  t->print_node();
}

void LL::printList(){ //for testing purpose, may get delete or change later
  NodePtr currentPtr=hol;
     int i;
     for(i=0;i<size;i++){
        currentPtr->print_node() ;
        currentPtr = currentPtr->get_next();   
      }
}

void LL::move_right(){ 
  NodePtr currentPtr=temp;
  if(currentPtr->get_next()){
    currentPtr=currentPtr->get_next();
    currentPtr->print_node();
    temp=currentPtr;
  }
}
void LL::move_left(){ 
  NodePtr currentPtr=temp;
  if(currentPtr->get_prev()){
    currentPtr=currentPtr->get_prev();
    currentPtr->print_node();
    temp=currentPtr;
  }
}
void LL::insert_node(string n, int x, int m)
{ 
   NodePtr newPtr;
   NodePtr previousPtr;
   NodePtr currentPtr;
  
   newPtr =new node(n,x,m);
   if(newPtr != NULL){
      previousPtr = NULL;
      currentPtr = hol;
      while(currentPtr != NULL){
        previousPtr = currentPtr;
        currentPtr = currentPtr->get_next();
      }                                      
      if(previousPtr == NULL){ 
        newPtr->set_next(hol);
        if(currentPtr)
          currentPtr->set_prev(newPtr);
         hol = newPtr;
      }
      else {
         previousPtr->set_next(newPtr);
         newPtr->set_prev(previousPtr);
         newPtr->set_next(currentPtr);
        if(currentPtr)
         currentPtr->set_prev(newPtr);
      }
     ++size;
     temp=hol;
   }
}
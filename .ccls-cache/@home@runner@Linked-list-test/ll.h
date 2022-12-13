#include <iostream>
using namespace std;
#include "node.h"

class LL{
   NodePtr hol; 
   int size;
  public:
    LL();
    ~LL();
    void insert_node(string,int);
    void print();
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
void LL::insert_node(string n,int x){
   NodePtr t=hol;
  if(hol==NULL) {
    hol=new node(n,x);
    t=hol;
    }
    else{
   while(t->get_next()) t=t->get_next();
   t->set_next(new node(n,x));
    }
  size++;
}
void LL::print(){
  NodePtr t;
  t=hol;
  t->print_node();
}
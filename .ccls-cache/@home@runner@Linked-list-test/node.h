#ifndef node_h
#define node_h
#include <iostream>
#include <iomanip>
using namespace std;

class node
{ 
private:
    string quiz;
    int score;
    node *nextPtr;
    node *prevPtr;
public:
  node(string,int);
 ~node();
  node* get_next();
  node* get_prev();
  void set_next(node* t);
  void print();
  int  get_data();
  void set_prev(node* t);
  void print_node();
};
            
typedef node *NodePtr;


node::node(string q,int x){
  quiz= q;
  score=x;
  nextPtr=NULL;
  prevPtr=NULL;
}

node::~node(){
		//cout<<score<<" deleted"<<endl;
}

NodePtr node::get_next(){
    return nextPtr;
}

NodePtr node::get_prev(){
    return prevPtr;
}

void node::set_next(NodePtr t){
    nextPtr=t; 
}
void node::set_prev(NodePtr t){
    prevPtr=t;
}
int node::get_data(){
  return score;
}
void node::print_node(){
  cout<<quiz<<endl;
  cout<<score<<endl;
}
#endif
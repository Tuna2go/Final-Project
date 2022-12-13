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
    int maxscore;
    node *nextPtr;
    node *prevPtr;
public:
  node(string,int,int);
 ~node();
  node* get_next();
  node* get_prev();
  void set_next(node* t);
  int  get_data();
  void set_prev(node* t);
  void print_node();
};

typedef node *NodePtr;


node::node(string q,int x, int m){
  quiz= q;
  score=x;
  maxscore=m;
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
  cout<<"☰☰☰☲☲☰☰☱☰☰☰☲☰☲☰☰☰☲☰☰☰☱☱☰☰☰☵☰☰☵☰☰☰☰☰☲☲☰☰☱☰☰☰☲☰☲☰☰☲"<<endl;
  cout<<setw(21)<<"    "<<quiz<<endl;
  cout<<setw(19)<<"    "<<"Score: "<<score<<"/"<<maxscore<<endl;
  cout<<"☰☰☵☰☰☰☰☰☲☲☰☰☱☰☰☰☰☰☲☲☰☰☱☰☰☰☲☰☲☰☰☰☲☰☰☰☲☰☲☰☰☰☲☰☰☰☱☰☵"<<endl;
}
#endif
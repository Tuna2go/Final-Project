#include <iostream>
using namespace std;
void print_menu();
void quiz_menu();
void presstomove();

void print_menu(){
  cout<<"==============="<<endl;
  cout<<"1.Check Info"<<endl;
  cout<<"2.Take a test"<<endl;
  cout<<"3.Check Result"<<endl;
  cout<<"4.Exit Program"<<endl;
  cout<<"==============="<<endl;
}

void quiz_menu(){
  cout<<"******************"<<endl;
  cout<<"*   1. Quiz 1    *"<<endl;
  cout<<"*   2. Quiz 2    *"<<endl;
  cout<<"*   3. Quiz 3    *"<<endl;
  cout<<"******************"<<endl;
}

void presstomove(){
  cout<<"Press Q to move left"<<" ▭ ▭ ▭ "<<"Press E to move right"<<endl;
  cout<<"           V to exit"<<" ▭ ▭ ▭ "<<" T to to show total score"<<endl;
}
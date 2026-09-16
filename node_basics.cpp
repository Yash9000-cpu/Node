#include <bits/stdc++.h>

// A node contain == a value of it self and the address of the other node..
using namespace std;
class Node{
    public:
    int data;   // thsi is data 
    Node* next= nullptr;

    Node(int value){
        this->data= value;
        this->next= NULL;
    }
};


int main(){
  Node a(100);
  Node b(200);
  a.next = &b;
  cout << a.data << " " << a.next << endl;


  //   here both results same value ==
//   cout << b.data << " " << b.next << endl;

  cout<<a.next->data << " "<< a.next->next<<endl;
/*

Node 1                    Node 2
┌──────────────┐          ┌──────────────┐
│ data = 100   │          │ data = 200   │
│ next = 200's │ ───────→ │ next = NULL  │
│        address│          │              │
└──────────────┘          └──────────────┘


*/
// Using "new" function==  new-> creates dynamic object

Node* c= new Node(300);
Node* d= new Node(400);

c->next = d;
cout << c->data << " " << c->next << endl;
cout << c->next->data << " " << c->next->next << endl;

delete c;  //Normal formality..

// Node a;
// a.data=100;
// a.next=&a;
// Node b;
// b.data=200;

// a.next=&b;


// cout<<a.data<<endl;
// cout<<a.next<<endl;



// cout<<b.data<<endl;
// cout<<b.next<<endl;

}
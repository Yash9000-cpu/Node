#include <bits/stdc++.h>
using namespace std;

// Basic Node structure::
class Node{
    public:
    int data;   // thsi is data 
    Node* next= nullptr;

    Node(int value){
        this->data= value;
        this->next= NULL;
    }
};

// Now insertion 

// 1. insertion in the initial..


int main(){
Node* head = new Node(200);
Node* b = new Node(300);
Node* c = new Node(400);

head->next = b;
b->next = c;


// Insertion in the starting..
Node* x= new Node(100);
x->next=head;
head=x;

// Insertion at the end easy..

Node* tail= new Node(500);
// c->next=tail;


// But what if we don't know the last not == we only know the "head"

Node* temp = head;

while (temp->next != NULL) {
    temp = temp->next;
}

temp->next = tail;

// Loops use
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        cout<<temp->next<<endl;
        temp= temp->next;      
    }

}

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

int main(){
    Node* head= new Node(100);
    Node* b= new Node(200);
    Node* c= new Node(300);
    Node* d= new Node(400);
    Node* e= new Node(500);
    head->next =b;
    b->next=c;
    c->next=d;
    d->next=e;

    // node connect
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    // Insertion in the begning

    Node* x= new Node(10);
    x->next=head;
    head=x;


    // now inerttion in between
    Node* extra=new Node(600);
    // B/w 300 and 400
    Node* curr= head;
    while(curr!=NULL){
        if(curr->data==300){
            Node* nxt= curr->next;

            curr->next=extra;
            extra->next=nxt;
            break;
        }
        curr=curr->next;

    }



// 100 → 200 → 300 → 400 → 500 → NULL
// 600 at the last

Node* x = new Node(600);
Node* curr = head;

while(curr->next!=NULL){
    curr=curr->next;
}
curr->next=x;


// 100 → 200 → 300 → 400 → 500 → NULL
// Insert 250 at position 3.
// 100 → 200 → 250 → 300 → 400 → 500 → NULL

int count=0;
Node* w=new Node(250);
Node*curr= head;
while(curr!=NULL){
   
    if(count==2){
        Node* nxt=curr->next;

        curr->next=w;
        w->next=nxt;


    }
    curr=curr->next;
    count++;
}
}
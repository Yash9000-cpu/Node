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

    // now lets detete 400  [deletion in b/w]
    Node* curr= head;
    Node* prev=NULL;
    while(curr!=NULL){
        if(curr->data==400){
            prev->next= curr->next;
            delete curr;
            break;

        }
        prev=curr;
        curr= curr->next;
    }


    // delete header
    Node* temp = head;
    head = head->next;
    delete temp;

    // delete last== let we find the last node and make prev node->next=NULL;
    Node* prev=NULL;
    Node*curr=head;
    while(head!=NULL){
        prev=curr;
        curr= curr->next;
    }
    prev->next=NULL;


}
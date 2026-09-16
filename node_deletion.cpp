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
Node* head = new Node(200);
Node* b = new Node(300);
Node* c = new Node(400);

head->next = b;
b->next = c;

// Insertion in the starting..
Node* x= new Node(100);
x->next=head;
head=x;

// Insertion at the last

Node* tail= new Node(500);
Node* temp = head;

while (temp->next != NULL) {
    temp = temp->next;
}
temp->next = tail;

/*-----------------------------------------------------------------------------------------------------*/
// initial deletion == 200 -> 300 -> 400 ->500;

// Deletes the first node and returns the new head

// 1. If the list is empty, there is nothing to delete
if (head == nullptr) {
    return NULL;
    }    
// 2. Store the current head in a temporary pointer
Node* temp = head;    
// 3. Move the head pointer to the next node
head = head->next;
// 4. Free the memory of the old head node
    delete temp;
// Return the updated head pointer
    cout<<head;
    
/*------------------------------------------------------------------------------------------------------*/

// last deletion== we have to find the second last node and make it's node->next =NULL [2 pointer concept]
Node* prev= NULL;
Node* curr=head;
while(curr !=NULL && curr->next != NULL){
    prev=curr;
    curr= curr->next;
}
prev->next=NULL;
cout<< head<<endl;
/*-------------------------------------------------------------------------------------------------------------*/
// Deletion let example =300

/*
head
 ↓
100 → 200 → 300 → 400 → 500 → NULL

/After deletion==>
head
 ↓
100 → 200 → 400 → 500 → NULL
*/
Node *temp= head;

while(temp!=0){
    if(temp->data==300){
        

    }
    temp=temp->next;

}

}
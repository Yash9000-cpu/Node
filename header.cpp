#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};


int main(){
    Node* header = new Node(0);

    Node* a = new Node(100);
    Node* b = new Node(200);
    Node* c = new Node(300);

    header->next = a;
    a->next = b;
    b->next = c;
/*
header
  ↓
[0] → [100] → [200] → [300] → NULL
       ↑
   actual data
*/
// tansversal
// Node* curr = header;


// now we don't want to start fro 0 and print header so;
Node* curr = header->next;
while(curr != NULL) {
    cout << curr->data << endl;
    curr = curr->next;
}

// Now deletion become easy and need single line to delete the first Node =100
Node*temp=header->next;
header->next=header->next->next;
delete temp;




// Question==
// HEADER → 100 → 200 → 300 → NULL
// If we want to delete 100, what should this become?

Node* temp =header->next;

header->next =header->next->next;

delete temp;
/*
With a header node, the header itself stays fixed.

We want:

Before:
HEADER → 100 → 200 → 300 → NULL

Insert 50:

After:
HEADER → 50 → 100 → 200 → 300 → NULL


*/

Node* nw= new Node(50);
nw->next = header->next;
header->next = nw;

/*
We have:

HEADER → 100 → 200 → 300 → NULL

We want to insert 250 after 200:

HEADER → 100 → 200 → 250 → 300 → NULL

*/
Node* x=new Node(250);
Node* temp= header->next;
while(temp!=NULL){
    if(temp->data==200){
        Node* nxt= temp->next;
        temp->next=x;
        x->next=nxt;
        
        
    }
     curr = curr->next;
}


}
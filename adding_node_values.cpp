#include <bits/stdc++.h>
using namespace std;

// Basic Node structure::
class Node{
    public:
    int data;   // thsi is data 
    Node* next= nullptr;

    Node(int value){
        this->data= value;
        this->next= nullptr;
    }
};


int main(){
Node* a = new Node(100);
Node* b = new Node(200);
Node* c = new Node(300);
a->next=b;
b->next=c;
Node* temp= a;
int sum=0;
while(temp!=nullptr){
    sum+=temp->data;
    temp=temp->next;
}
cout<<sum<<endl;
return 0;
}
#include <iostream>
// #include "Nodeclass.h"
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;// constructor makes the next pointer point to null by default

    }
};
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->val << " ";
        temp = temp -> next;
    }
}
int count(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}
void recursiveDisplay(Node* head){
    if(head == NULL){
        return;
    }
    cout<< head-> val << " ";
    recursiveDisplay(head->next);
}
void reverseDisplay(Node* head){
    if(head==NULL){
        return;
    }
    reverseDisplay(head->next);
    cout<< head-> val << " ";
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    a->next = b;
    b->next = c;
    Node* temp = a;
   display(a);
   cout<< endl;
   recursiveDisplay(a);
   cout<< endl;
   reverseDisplay(a);
   cout<< endl;
   count(a);
   cout<< count(a) << endl;
    return 0;
}
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
int main(){
    Node a(10);
 
    Node b(20);
   
    Node c(30);
    
    Node d(40);
    
    // now forming LL
    a.next= &b;
    b.next=&c;
    c.next=&d;
//     cout <<a.val<<" "<<a.next->val;
//      cout <<b.val<<" "<<b.next->val;
//       cout <<c.val<<" "<<c.next->val;
//        cout <<d.val<<" "<<d.next;// d.next is null so it will print 0 or null
//     cout<< a.next->next->next->val;
    Node* temp = &a;
    while(temp != NULL){
        cout<< temp->val << " ";
        temp = temp->next;
    }
    return 0;}

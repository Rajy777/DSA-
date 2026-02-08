#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int index, int val){
        if(index < 0 || index > size){
            cout << "invalid index" << endl;
        }
        else if(index == 0) insertAtHead(val);
        else if(index == size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 0; i < index-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    int getIndex(int index){
        if(index < 0 || index >= size){
            cout << "invalid index" << endl;
            return -1;
        }
        Node* temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
        return temp->val;
    }

    void deleteAtHead(){
        if(size == 0){
            cout << "LL is empty" << endl;
        }
        else if(size == 1){
            delete head;
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deleteAtTail(){
                if(size == 0){
            cout << "LL is empty" << endl;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--; 
        }

    }
    void deleteAtIndex(int index){
        if(index < 0 || index >= size){
            cout << "invalid index" << endl;
        }
        else if(index == 0) deleteAtHead();
        else if(index == size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i <= index-1; i++){
                temp = temp->next;
            }
            
            temp->next = temp->next->next;
            
            size--;
        }
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    
    ll.insertAtEnd(20);
    ll.insertAtIndex(1,15);
    ll.insertAtHead(4);

    cout << ll.getIndex(1) << endl;
    ll.display();

    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIndex(0);
    ll.display();

    cout << ll.size;
    return 0;
}

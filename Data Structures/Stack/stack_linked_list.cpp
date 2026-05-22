// Implementation of stack from linked list

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Stack{
    Node* head;
public:
    Stack(){
       head = NULL;
    }

    void push(int val){    // push_front()
       Node* newNode = new Node(val);
       newNode->next = head;
       head = newNode;
    }

    void pop(){   // pop_front()
       if(head == NULL){
         cout<<"Stack underflow"<<endl;
         return;
       }

       Node* temp = head;
       head = head->next;
       delete temp;
    }

    int top(){
        if(head == NULL){
           cout<<"Stack empty"<<endl;
           return -1;
        }

        return head->data;
    }

    bool empty(){
       return head == NULL;
    }

    void print(){
       Node* temp = head;

       while(temp != NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
       }

       cout<<endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    if(!s.empty()){
        s.print();  // 30, 20, 10
    }

    cout<<"Top element : "<<s.top()<<endl;

    s.pop();

    if(!s.empty()){
        s.print();  // 20, 10
    }

    return 0;
}

// Linked List from scrach

/*
Functions of linked list :
push_front()    pop_front()
push_back()    pop_back()
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
public :
    int data;
    Node* next;

    Node(int val){
       data = val;
       next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public :
    List(){
    head = tail = NULL;   // as at first we have an empty list
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head==NULL){
           head=tail=newNode;   // case : it's an empty linked list
        }else{
          newNode->next = head;// newNode এর next হিসেবে আগে NULL ছিল এখন বর্তমান head কে রাখলাম, আর newNode কে head হিসেবে। newNode কেন্দ্রিক চিন্তা-ভাবনা।
          head = newNode;
       }
    }

    void printLL(){
       Node* temp = head;

       while(temp != NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
       }
       cout<<endl;
    }

    void push_back(int val){
         Node* newNode = new Node(val);

         if(head == NULL){
             head = tail = newNode;  // case : it's an empty linked list
         }else{
             tail->next = newNode;
             tail = newNode;
         }
    }

    void pop_front(){
         if(head == NULL){     // case : it's an empty linked list
            cout<<"ll is empty"<<endl;
         }

         Node* temp = head;   // head কে temp এ store করলাম
         head = head->next;   // head এর next যে ছিল তাকে হেড এ রাখলাম
         temp->next = NULL;   // temp (ex-head) এর next কে  NULL করে দেয়া তে এটা লিস্ট থেকে আলাদা হয়ে গেল
         delete temp;         // temp (ex-head) কে delete করে দিলাম
    }

    void pop_back(){
        if(head == NULL){    // case : it's an empty linked list
            cout<<"ll is empty"<<endl;
        }

        Node* temp = head;
        while(temp->next != tail){  // to find the second last element or previous element as we want to erase the "next (linking pointer / connector -next erase মানে এটাকে  NULL করে দেওয়া)" of that element
            temp = temp->next;      // traversing to the second last element
        }
        temp->next = NULL;         // second last element এর next কে NULL করে দিলাম , তাই লাস্ট element লিস্ট থেকে আলাদা হয়ে গেল
        delete tail;               // deletes the data of tail variable, not the variable itself
        tail = temp;
    }
};

int main()
{
   List ll;

   ll.push_front(1);
   ll.push_front(2);
   ll.push_front(3);

   ll.printLL();

   ll.push_back(4);

   ll.printLL();

   ll.pop_front();

   ll.printLL();

   ll.pop_back();

   ll.printLL();

   return 0;
}

// Task : Visualise the proceses that how we are thinking to solve the problem
// step-by-step according to the function name.

// Implementation of stack from array

// ll এ যেমন আমরা head কে কেন্দ্র করে চিন্তা করতাম সবসময় stack এ তেমন top কে নিয়ে করব

/*
push()   peek() (to find top index)
pop()    isEmpty()
*/

#include<iostream>
using namespace std;

#define MAX 5

class Stack{
    int arr[MAX];
    int top;
public:
    Stack(){
       top = -1;  // top হচ্ছে সর্বশেষ element এর index কারন যেটা সবার শেষে ঢুকে সেটা top এ থাকে
    }

    void push(int val){
        if(top == MAX-1){  // যেহেতু ০ থেকে সাইজ(MAX) - ১ পর্যন্ত তাই MAX-1 বলতে শেষ element কে বোঝায়
           cout<<"Stack overflow"<<endl;
        }
        else{
           arr[++top] = val;
        }
    }

    int peek(){
        if(top == -1) return -1;
        else return arr[top];
    }

    void pop(){
       if(top == -1){
          cout<<"Stack underflow"<<endl;
       }
       else{
           top--;
       }
    }

    bool isEmpty(){
        return top == -1;
    }

    void printStack(){  // printing in LIFO order
       if(isEmpty()){
          cout<<"Stack is empty"<<endl;
          return;
       } // if(top == -1)

       for(int i=top; i>=0; i--){
         cout<<arr[i]<<" ";
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

    if(!s.isEmpty()){
        s.printStack();  // 30, 20, 10
    }

    cout<<"Top element : "<<s.peek()<<endl;

    s.pop();

    if(!s.isEmpty()){
        s.printStack();  // 20, 10
    }

    return 0;
}

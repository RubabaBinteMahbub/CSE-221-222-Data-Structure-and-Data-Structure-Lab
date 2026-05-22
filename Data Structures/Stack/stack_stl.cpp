#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);

    while(! s.empty()){  // not stack empty
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl; // 30 20 10

    return 0;
}

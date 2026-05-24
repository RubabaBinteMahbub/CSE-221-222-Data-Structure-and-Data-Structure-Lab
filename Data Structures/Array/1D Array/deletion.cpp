// Deletion (insertion এর উল্টো) - নাম্বার গুলোকে বাম দিকে সরাতে হবে pos তম ঘর থেকে শেষ পর্যন্ত। যাতে pos তম ঘরে যেটা ছিল সেটা গায়েব হয়ে যায়।
// শেষ ঘর ফাঁকা হয়ে যাবে।
// size-- করে দিব।

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {1,2,3,7,4,5};
    int size = 6;

    // deleting
    int pos = 4;
    for(int i=pos-1; i<=size-1; i++){
        a[i] = a[i+1];
    }
    size--;

    // printing (1,2,3,4,5)
    cout<<"Updated array : ";
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

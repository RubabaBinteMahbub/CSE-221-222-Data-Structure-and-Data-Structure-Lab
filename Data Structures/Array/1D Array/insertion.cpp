// Insertion - নাম্বার গুলোকে ডান দিকে সরিয়ে pos তম ঘরকে ফাঁকা করতে হবে।
// তারপর সেখানে number টাকে insert করতে হবে।
// size++ করে দিতে হবে।

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,5,6};
    int size = 5;

    // inserting
    int num = 7, pos = 4;
    for(int i = size-1; i>=pos-1; i--){
        a[i+1] = a[i];  
    }
    a[pos-1] =num;
    size++;

    // printing (1,2,3,7,5,6)
    cout<<"Updated array : ";  
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";    
    }
    cout<<endl;

    return 0;
}

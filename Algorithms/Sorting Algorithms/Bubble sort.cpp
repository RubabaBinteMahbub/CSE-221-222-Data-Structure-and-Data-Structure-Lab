// Bubble sort - ascending order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {12, 2, 5, 3, 10};
    int size = 5;

    for(int i = 0; i<size-1; i++){            // iteration number - কতবার পুরো array টা চেক করবে এবং swapping এর কাজ করবে
        int swapped = 0;

        for(int j = 0; j<size-1-i; j++){     // যেহেতু প্রতি iteration এর শেষে শেষের একটা করে element চেক করা লাগছে না
             if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swapped = 1;
             }
        }

        if(swapped == 0)
            break;
    }

    cout<<"Sorted in ascending order : ";
    for(int i = 0; i<size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// Time complexity : O(n^2)
// Space complexity : O(n)

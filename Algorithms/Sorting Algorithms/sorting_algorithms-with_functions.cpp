#include<bits/stdc++.h>
using namespace std;

void printArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// Time complexity : O(n^2)
// Space complexity : O(n)
void BubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int swapped=0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swapped =1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}

// Time complexity : O(n^2)
// Space complexity : O(n)
void SelectionSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int min_index=i;
        for(int j=i+1; j<n; j++){
            if(a[min_index]>a[j]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }
}

// Time complexity : O(n^2)
// Space complexity : O(n)
void InsertionSort(int a[], int n){
for(int i=1; i<n; i++){
    int temp=a[i];
    int j=i-1;
    while(j>=0 && a[j]>temp){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
}

int main()
{
    int a[5] = {2, 8,1, 9, 6};
    int n=5;
    printArray(a, n);

    //BubbleSort(a, n);
    //SelectionSort(a, n);
    InsertionSort(a, n);
    printArray(a, n);

    return 0;
}

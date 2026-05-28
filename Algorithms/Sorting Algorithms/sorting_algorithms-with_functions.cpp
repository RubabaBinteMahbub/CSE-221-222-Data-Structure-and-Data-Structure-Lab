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

// Time complexity : O(n logn)
// Space complexity : O(n)
void mergeArray(int a[], int left, int right, int mid){
    int n1 = mid-left+1;
    int n2 = right-mid;

    int L[n1], R[n2];

    // Left array copy
    for(int i=0; i<n1; i++){
        L[i] = a[left+i];
    }

    // Right array copy
    for(int i=0; i<n2; i++){
        R[i] = a[mid+1+i];
    }

    // Merge
    int i=0, j=0;   // i L array traverse এর জন্য, j R array traverse এর জন্য
    int k=left;     // k a array traverse এর জন্য

    while(i<n1 && j<n2){  // L, R array ২ টা একসাথে traverse করছে আর কাজ করছে শর্তানুযায়ী
        // ২ টা array র মধ্যে একি পজিশনে যে array র element ছোট সেটাকে a তে পুশ করে দিব
        if(L[i]<=R[j]){     // বামদিকে ছোটগুলো রাখতে চাই, ছোটগুলোই আছে, তাই a তে পুশ করে দিব
            a[k] = L[i];
            i++;
        }
        else{
           a[k] = R[j];
           j++;
        }
      // a তে একটা element পুশ করা শেষ, k++ তাই করে দিব
      k++;
    }

    // Remaining elements
    while(i<n1){
        a[k] = L[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int left, int right){
    // if(right<=left) return;
    if(left<right){
        int mid = (left+right)/2;

        merge_sort(a, left, mid);
        merge_sort(a, mid+1, right);

        mergeArray(a, left, right, mid);
    }
}

int main()
{
    int a[5] = {2, 8,1, 9, 6};
    int n=5;
    printArray(a, n);

    // BubbleSort(a, n);
    // SelectionSort(a, n);
    // InsertionSort(a, n);

    merge_sort(a, 0, n-1);
    printArray(a, n);

    return 0;
}

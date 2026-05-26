#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
   for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void InsertionSort(int arr[], int size){
// i -> unsorted গুলো traversing এর জন্য
// j -> sorted গুলো traversing এর জন্য

 for(int i=1; i<size; i++){
    int temp = arr[i];   // unsorted এর জন্য iterating variable initialize করলাম
    int j=i-1;                // sorted এর জন্য iterating variable initialize করলাম
    while(j>=0 && arr[j]>temp){  // বাম দিকে যেতে থাকো শেষ পর্যন্ত (0 তম index) (আর ডানদিকে সরাতে থাকো) যতক্ষন পর্যন্ত arr[j] গুলো temp এর বড়। খালি পেলেই থেমে যাবে আর temp কে insert করে দিবে
        arr[j+1] = arr[j];
        j--;
    }
 arr[j+1] = temp;   // কারন শেষ element এর জন্য j এর value -1 হয়ে যাবে। তাই arr[j+1] তথা arr[0] তে temp কে রাখব।
 }
}

int main()
{
    int a[5] = {2, 8,1, 9, 6};
    int n = 5;
    printArray(a, n);

    InsertionSort(a, n);
    printArray(a, n);

    return 0;
}


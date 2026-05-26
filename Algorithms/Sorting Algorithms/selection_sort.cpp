#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
   for(int i=0; i<size; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void SelectionSort(int arr[], int size){
int min_index;
  for(int i=0; i<size-1; i++){
     min_index=i;
     for(int j=i+1; j<size; j++){
        if(arr[min_index]>arr[j]){
           min_index=j;
        }
     }
    swap(arr[i], arr[min_index]);
  }
}

int main()
{
    int a[5] = {2, 8,1, 9, 6};
    int n = 5;
    printArray(a, n);

    SelectionSort(a, n);
    printArray(a, n);

    return 0;
}


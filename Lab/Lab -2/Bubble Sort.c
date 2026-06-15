#include<stdio.h>

void bubbleSort(int a[],int n){
    for(int i=0; i<n-1; i++){
        int swapped = 0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) break;
    }
}

void printArray(int a[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[] = {3,4,1,3,6};
    int n = 5;

    BubbleSort(a,n);
    printArray(a,n);

    return 0;
}

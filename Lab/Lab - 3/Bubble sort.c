#include<stdio.h>

int main(){
    int a[]={3,6,1,4,9,4};
    int n=6;

    for(int i=0; i<n-1; i++){
        int swapped = 0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}

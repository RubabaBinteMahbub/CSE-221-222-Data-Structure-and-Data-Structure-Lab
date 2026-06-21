// Time complexity : O(n)
// Time complexity : O(1)
#include<stdio.h>

int main(){
    int a[] = {4,6,1,8,3};
    int n = 5;

    int target = 8;
    // int target = 9;

    int left = 0, right = n-1, mid;
    int found = 0;

    while(left<=right){
        mid = (left+right)/2;

        if(a[mid]==target){
           found=1;
           printf("Item found at index %d.\n", mid);
           break;
        }
        else if(a[mid]<target){
            left=mid+1;
        }
        else{
            right= mid-1;
        }
    }

    if(!found) printf("Item not found.\n");

    return 0;
}

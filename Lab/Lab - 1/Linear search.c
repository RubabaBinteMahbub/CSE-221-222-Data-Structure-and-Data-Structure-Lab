// Time complexity : O(n)
// Time complexity : O(1)

#include<stdio.h>
int main(){
    int a[] = {4,6,1,8,3};
    int n = 5;

    int target = 8;
    // int target = 9;

    int found=0;

    for(int i=0; i<n; i++){
        if(a[i]==target){
            found=1;
            printf("Item found at index %d.\n", i);
            break;
        }
    }

    if(!found){
        printf("Item not found\n");
    }

    return 0;
}

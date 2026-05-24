#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5};
    int size = 5;

    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    cout<<"Maximum element : "<<max<<endl;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
  //int arr[5]={1,2,3,4,5,6};
  //int target = 5;

  int size;
  cout<<"Enter the size : ";
  cin>>size;

  int arr[size];
  cout<<"Enter the elements : ";
  for(int i=0; i<size; i++){
    cin>>arr[i];
  }

  int target;
  cout<<"Enter the target : ";
  cin>>target;

  int left=0,right=size-1,middle;
  bool found = false;

  while(left<=right){
    middle = (left+right)/2;

    if(arr[middle] == target){
      cout<<"Target found at "<<middle<<" index"<<endl;
      found=true;
      break;
    }
    else if(arr[middle]<target){
      left = middle+1;
    }
    else if(target<arr[middle]){
      right = middle-1;
    }
  }

  if(found == false){
   cout<<"Not found"<<endl;
  }

  return 0;
}

/*
 int left=0,right=size-1,middle;

  while(left<=right){
    middle = (left+right)/2;

    if(arr[middle] == target){
      cout<<"Target found at "<<middle<<" index"<<endl;
      return 0;
    }
    else if(arr[middle]<target){
      left = middle+1;
    }
    else if(target<arr[middle]){
      right = middle-1;
    }
  }

  cout<<"Not found"<<endl;
*/

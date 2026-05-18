#include<iostream>
using namespace std;

int main()
{
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

  bool found=false;
  for(int i=0; i<size; i++){
   if(arr[i]==target){
     cout<<"Target found at "<<"index "<<i<<endl;
      found=true;
      break;
   }
  }

  if(found == false){
   cout<<"Not found"<<endl;
  }

  return 0;
}

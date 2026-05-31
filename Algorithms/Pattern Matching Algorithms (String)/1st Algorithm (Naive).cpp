// Naive pattern matching algorithm

#include<iostream>
using namespace std;

void naivePatternMatching(string text, string pattern){
int n = text.size();
int m = pattern.size();

for(int i=0; i<=n-m; i++){
 int j=0;                // for counting number of matching characters 
 for(j=0; j<m; j++){
    if(text[i+j] != pattern[j])
    break;            // pattern কে traverse করো যতক্ষন না pattern এর সাথে unmatched character পাচ্ছো } } if(j==n){ // j যদি pattern এর শেষ পর্যন্ত traverse করতে পারে cout<<"Pattern found at index "<<i<<endl; } } 
 }
}

int main()
{
  string text = "AABAACAADAABAABA";
  string pattern = "AABA";

  naivePatternMatching(text, pattern);

  return 0;
}

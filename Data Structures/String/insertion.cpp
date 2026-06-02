// s.insert(3, 1, 'l');
// index 3 এ 1টা 'l' insert

#include<iostream>
using namespace std;

int main()
{
string s = "helo";
char ch = 'l';
int pos = 3;

s.resize(s.size()+1);

for(int i=s.size()-1; i>=pos-1; i--){
    s[i+1] = s[i];
}
s[pos-1] = ch;

cout<<s<<endl;

return 0;
}

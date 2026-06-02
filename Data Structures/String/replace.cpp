#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int pos = 2;
    char ch = 'x';

    s[pos-1] = ch;

    cout << s << endl;  // hexlo

    return 0;
}

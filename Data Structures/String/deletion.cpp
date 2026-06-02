#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int pos = 2;

    int len = s.size();

    for(int i = pos; i < len - 1; i++) {
        s[i] = s[i + 1];
    }

    s.resize(len - 1);

    cout << s << endl;

    return 0;
}

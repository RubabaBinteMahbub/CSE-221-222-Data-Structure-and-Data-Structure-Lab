// s.replace(starting_index, length, newString);
// starting_index - কোথা থেকে replacw শুরু করতে হবে
// length - কতটা character replace হবে
// newString - নতুন string

// s.replace(6, 5, "C++");
// h e l l o _ w o r l d
// 0 1 2 3 4 5 6 7 8 9 10

#include <iostream>
using namespace std;

int main() {
    string s = "hello world";

    s.replace(6, 5, "C++");

    cout << s << endl;

    return 0;
}

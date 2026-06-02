/*
* len = current length
* shift starts from len (null character included) 
* goes up to pos 
* insert at pos
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "hello";
    char ch = 'x';
    int pos = 3;

    int len = strlen(str);  // 5

    for(int i = len; i >= pos; i--) {
        str[i + 1] = str[i];
    }

    str[pos] = ch;

    printf("%s\n", str);

    return 0;
}

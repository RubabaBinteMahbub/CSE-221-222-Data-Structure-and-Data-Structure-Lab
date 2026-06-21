#include <stdio.h>

int main() {
    char s1[100] = "Hello";
    char s2[] = "World";

    int i = 0, j = 0;

    // s1 এর শেষ খুঁজে বের করা
    while (s1[i] != '\0') {
        i++;
    }

    // s2 কে s1 এর শেষে কপি করা
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    // নতুন string এর শেষে null character
    s1[i] = '\0';

    printf("%s\n", s1);

    return 0;
}

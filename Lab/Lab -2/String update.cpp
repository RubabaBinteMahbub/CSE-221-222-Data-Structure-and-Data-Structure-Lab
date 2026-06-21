#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    printf("Enter the string : ");
    gets(s);

    int len = strlen(s);

    char oldCh;
    printf("Enter the old character : ");
    scanf(" %c",&oldCh);

    char NewCh;
    printf("Enter the new character : ");
    scanf(" %c",&NewCh);

    for(int i=0; i<len; i++){
        if(s[i]==oldCh){
            s[i] = NewCh;
        }
    }

    puts(s);
    return 0;
}


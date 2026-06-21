#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    printf("Enter the string : ");
    gets(s);

    int len = strlen(s);

    int pos;
    printf("Enter the position : ");
    scanf("%d",&pos);

    for(int i=pos-1; i<len; i++){
        s[i]=s[i+1];
    }

    puts(s);
    return 0;
}

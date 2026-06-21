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

    char ch;
    printf("Enter the character : ");
    scanf(" %c",&ch);

    for(int i=len-1; i>=pos-1; i--){
        s[i+1] = s[i];
    }
    s[pos-1]=ch;

    puts(s);
    return 0;
}

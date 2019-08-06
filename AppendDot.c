#include<stdio.h>
int main()
{
    char s[10];
    scanf("%[^\n]",&s);
    printf("%s",s);
    printf("%c",'.');
    return 0;
}

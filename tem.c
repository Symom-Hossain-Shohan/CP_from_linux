#include<stdio.h>
#include<string.h>



int main()
{
    char st[100];
    scanf("%s",st);
    memset(st,'\0',sizeof(st));
    st[0]='0';
    puts(st);
}
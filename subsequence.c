#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);

    int n1=strlen(s1),n2=strlen(s2);
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(s1[i]==s2[j]) i++,j++;
        else i++;
    }
    if(j==n2) printf("YES\n");
    else printf("NO\n");
}
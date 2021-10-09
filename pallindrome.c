#include<stdio.h>
#include<string.h>


int main()
{
    char s[100];
    scanf("%s",s) ;
    int n=strlen(s);
    int flag=1;
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=0;
            break;
        }
    }
    if(flag) printf("Pallindrome\n");
    else printf("Not Pallindrome\n");
}
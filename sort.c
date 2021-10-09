#include<stdio.h>
#include<string.h>


int main()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                char t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
    printf("%s",s);
}
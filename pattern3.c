#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int  x=n-i+1;
        int y=n;
        for(int j=n;j>=x;j--)
        {
            printf("%d",j);
            y--;
        }
        while (y--)
        {
            printf("%d",x);
        }
        printf("\n");
        
    }
}
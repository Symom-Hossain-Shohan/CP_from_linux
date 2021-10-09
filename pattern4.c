#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n%2==0)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==n/2 || i==(n/2)+1 || j==n/2 || j==(n/2)+1)
                {
                    printf("0");
                }
                else printf("1");
            }
            printf("\n");
        }
    }
    else  
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==(n+1)/2 || j==(n+1)/2) printf("0");
                else printf("1");
            }
            printf("\n");
        }
    }
}
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;

    for(int i=2;i<=n;i++)
    {
        int is_prime=1;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                is_prime=0;
                break;
            }
        }
        if(is_prime) ans+=i;
    }

    printf("%d",ans);
}
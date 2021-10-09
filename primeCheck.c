#include<stdio.h>

void is_prime(int n)
{
    int flag=1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag && n!=1) printf("Prime\n");
    else printf("Not Prime\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    is_prime(n);
}
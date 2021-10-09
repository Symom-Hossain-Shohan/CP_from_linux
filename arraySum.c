#include<stdio.h>

int arraySum(int ar[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++) sum+=ar[i];
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    int sum=arraySum(ar,n);
    printf("%d\n",sum);
}
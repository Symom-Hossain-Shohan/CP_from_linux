#include<stdio.h>


int main()
{
    int ar[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int t=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=t;
            }
        }
    }

    for(int i=0;i<5;i++) printf("%d ",ar[i]);
}
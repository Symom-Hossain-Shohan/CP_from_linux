#include<stdio.h>

int main()
{
    int ar[5];

    int x;
    for(int i=0;i<5;i++) 
    {
        scanf("%d",&ar[i]);
    }

    scanf("%d",&x);

    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(ar[i]==x) 
        {
            flag=1;
            break;
        }
    }

    if(flag) printf("Yes\n");
    else printf("No\n");
}
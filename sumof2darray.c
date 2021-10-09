#include<stdio.h>


int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int ar[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++) scanf("%d",&ar[i][j]);
    }

    int *ptr;
    ptr=&ar[0][0];
    int sum=0;

    while(ptr<=&ar[r-1][c-1])
    {
        sum+=*ptr;
        ptr++;
    }
    printf("%d\n",sum);
    
}
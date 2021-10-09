#include<stdio.h>

int POW(int x,int y)
{
    if(y==0) return 1;
    else return x*POW(x,y-1);
}

int main()
{
    int x,y;
    scanf("%d %d",&x, &y);
    printf("%d\n" ,POW(x,y));
}
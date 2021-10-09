#include<stdio.h>


int main()
{
    int a,b,*pa,*pb,tm;

    scanf("%d %d",&a,&b);
    pa=&a;
    pb=&b;
    tm=*pa;
    *pa=*pb;
    *pb=tm;

    printf("%d %d\n",a,b);
}
#include<stdio.h>

void printAllEven(int l ,int r)
{
    if(l%2==1) l++;
    for(int i=l;i<=r;i+=2)
    {
        printf("%d ",i);
    }

}
int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    printAllEven(l,r);
}
#include<stdio.h>


void MaxMin(int ar[],int *mx,int *mn,int n)
{
    for(int i=0;i<n;i++)
    {
        if(ar[i]> *mx) *mx=ar[i];
        if(ar[i]< *mn) *mn=ar[i] ;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++) scanf("%d",&ar[i]);
    int mx=ar[0],mn=ar[0];
    MaxMin(ar,&mx,&mn,n);
    printf("The max element of the array is %d\n",mx);
    printf("The min element of the array is %d\n",mn);
}
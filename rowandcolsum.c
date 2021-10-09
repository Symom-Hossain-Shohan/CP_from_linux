#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int mtx[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mtx[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++) sum+=mtx[i][j];
        printf("The sum of %d th row is %d \n",i+1,sum);
    }
    for(int col=0;col<n;col++)
    {
        int sum=0;
        for(int row=0;row<n;row++) sum+=mtx[row][col];
        printf("The sum of %d th column is %d \n",col+1,sum);
    }
}
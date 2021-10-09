#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int mtx[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) scanf("%d",&mtx[i][j]);
    }

    int minor_diagonal_sum=0;

    for(int i=0,j=n-1;i<n;i++,j--) minor_diagonal_sum+=mtx[i][j];

    printf("%d",minor_diagonal_sum);
}
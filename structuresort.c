#include<stdio.h>

struct st
{
    int id;
    char name[25];
    float cgpa;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct st ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&ar[i].id,ar[i].name,&ar[i].cgpa);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ar[j].cgpa<ar[j+1].cgpa)
            {
                struct st tm;
                tm=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tm;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d %s %.2f\n",ar[i].id,ar[i].name,ar[i].cgpa);
    }
}
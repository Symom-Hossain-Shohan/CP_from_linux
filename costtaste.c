#include<stdio.h>

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    scanf("%d",&n);
    
    float a[n],b[n],ts=-100,cs;

    for(int i=0;i<n;i++)
    {
        scanf("%f %f",&a[i],&b[i]);
        if(ts<b[i])
        {
            ts=b[i];
            cs=a[i];
        }
           
    }
    
    printf("%.2f\n",cs);
}
 
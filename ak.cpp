#include<bits/stdc++.h>
using namespace std;
int s[123456],cnt,tmp;
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        tmp=upper_bound(s,s+cnt,x)-s;
        if(tmp==cnt)cnt++;
        s[tmp]=x;
    }
    printf("%d\n",cnt);
    return 0;
}

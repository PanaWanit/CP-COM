#include<bits/stdc++.h>
using namespace std;

int dp[10000009];
int main()
{
    dp[1]=0;
    for(int i=2;i<=1000000;i++)
    {
        dp[i]=1+dp[i-1];
        if(i%2==0) dp[i]=min(dp[i],1+dp[i/2]);
        if(i%3==0) dp[i]=min(dp[i],1+dp[i/3]);
    }
    int q; scanf("%d",&q);
    while(q--)
    {
        int n;scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}

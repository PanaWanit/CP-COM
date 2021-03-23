#include<bits/stdc++.h>
using namespace std;
int dp[46000]={1},num[46000];
int main()
{
    int n,i,j,sum=0,k=1,mn=2e9,w,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w);
        sum+=w;
        for(j=45000;j>=0;j--)
        {
            if(j-w>=0&&dp[j-w]==1)
                dp[j]=1;
        }
    }
    for(i=1;i<=45000;i++)
    {
        if(dp[i])
        if(mn>abs(sum-2*i))
        {
            mn=abs(sum-2*i);
            x=i;
            y=sum-i;
        }
    }
    if(x>y)
        swap(x,y);
    printf("%d %d",x,y);
    return 0;
}

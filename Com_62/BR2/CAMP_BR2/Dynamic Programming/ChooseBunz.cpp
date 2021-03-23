#include<bits/stdc++.h>
using namespace std;
int dp[2][10009];
int main()
{
    int n,r,k;
    scanf("%d %d %d",&n,&r,&k);
    dp[0][0]=dp[1][0]=dp[1][1]=1%k;
    for(int i=2;i<=n;i++)
    {
        dp[i%2][0]=1%k;
        for(int j=1;j<=r&&j<=n;j++)
        {
            dp[i%2][j]=(dp[(i+1)%2][j-1]+dp[(i+1)%2][j])%k;
        }
    }
    printf("%d\n",dp[n%2][r]);



    return 0;
}

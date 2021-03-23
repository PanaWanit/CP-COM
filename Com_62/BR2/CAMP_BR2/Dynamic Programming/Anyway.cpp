#include<bits/stdc++.h>
using namespace std;

int dp[1010][1010],a[1010][1010];
int mod=1000000;
int main()
{
    int n,m,i,j,k;
    scanf("%d %d %d",&n,&m,&k);
    while(k--)
    {
        scanf("%d %d",&i,&j);
        a[i][j]=1;
    }
    for(i=0;i<=n;i++)
        for(j=0;j<=m;j++){
                if(a[i][j]==1) dp[i][j]=0;
                else if(i==0&&j==0) dp[i][j]=1;
                else if(i==0) dp[i][j]=dp[i][j-1];
                else if(j==0) dp[i][j]=dp[i-1][j];
                else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;

    }

    printf("%d",dp[n][m]);
return 0;
}

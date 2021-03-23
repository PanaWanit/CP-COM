/*
    TASK: 0/1 Knapsack
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
int dp[110][10100];
int v[110],w[110];
using namespace std;
int main(){
    int n,m,i,j,x;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d %d",&v[i],&w[i]);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            x=j-w[i];
            if(x<0) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][x]+v[i]);
        }
    }
    printf("%d\n",dp[n][m]);
    return 0;
}
/*
4 8
15 1
10 5
9 3
5 4
*/

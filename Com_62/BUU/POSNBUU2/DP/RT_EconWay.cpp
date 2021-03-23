#include<bits/stdc++.h>
using namespace std;
int c[220][220],dp[220][220];
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&c[i][j]);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            dp[i][j]=max(dp[i][j-1],max(dp[i-1][j-1]+c[i][j],dp[i-1][j]));
        }
    }
    printf("%d",dp[n][n]);
    return 0;
}
/*
3
1 20 10
5 30 50
20 15 10
*/

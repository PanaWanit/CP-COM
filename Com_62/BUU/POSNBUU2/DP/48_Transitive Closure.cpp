/*
    TASK: 48 Transitive Closure
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[505][505];
int main(){
    int k,i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&dp[i][j]);
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(dp[i][k]==1&& dp[k][j]==1)
                    dp[i][j]=1;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
4
0 0 1 0
1 0 0 1
0 0 0 0
0 1 0 0
*/

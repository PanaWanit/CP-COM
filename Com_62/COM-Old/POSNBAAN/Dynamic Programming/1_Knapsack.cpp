/*
    TASK: 0/1 Knapsack
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

int dp[110][10100];
int v[10100],w[10100];
int main(){
  int n,m,i,j;
  scanf("%d %d",&n,&m);
  for(i=1;i<=n;i++)
    scanf("%d %d",&v[i],&w[i]);
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      if(j-w[i]<0) dp[i][j]=dp[i-1][j];
      else{
          dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
      }

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

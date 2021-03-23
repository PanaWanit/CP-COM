/*
    TASK: Floy Washall Algorithms
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[500][500];
int main(){
    int n,m,q,i,j;
    scanf("%d %d %d",&n,&m,&q);

    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        dp[i][j]=1<<20;
      }
    }
    int u,v,w;
    while(m--){
      scanf("%d %d %d",&u,&v,&w);
      dp[u][v]=min(dp[u][v],w);
    }
    for(int k=1;k<=n;k++)
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    while(q--){
      int s,e;
      scanf("%d %d",&s,&e);
      if(dp[s][e]==1<<20){
        printf("-1\n");continue;
      }
      printf("%d\n",dp[s][e]);
    }
    return 0;
}

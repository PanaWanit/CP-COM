/*
    TASK: Matrix Chain Multiplication Top Down
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int row[500],column[500],dp[500][500];
int play(int l,int r){
 //printf("%d %d %d \n",l,r,dp[l][r]);
  if(dp[l][r]) return dp[l][r];
  if(l==r) return 0;
  int k,now,mn=1<<30;
  for(k=l;k<r;k++){
    now = play(l,k)+play(k+1,r)+(row[l]*column[k]*column[r]);
    mn=min(mn,now);
  }

  return dp[l][r]=mn;
}
int main(){
    int n,mx=-2e6;
    scanf("%d",&n);
    //memset(dp,-1,sizeof dp);
    for(int i=1;i<=n;i++){
      scanf("%d %d",&row[i],&column[i]);

    }

    printf("%d",play(1,n));
    return 0;
}
/*
3
5 10
10 20
20 35
*/

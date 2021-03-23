/*
    TASK: Matrix Chain Multiplication Top Up
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int row[500],column[500],dp[500][500];
int main(){
    int n,mn=2e6;
    scanf("%d",&n);
    //memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++){
      scanf("%d %d",&row[i],&column[i]);

    }
    int m,i,j,k;
    for(m=1;m<n;m++){
      for(i=0;i<n-m;i++){
        j=i+m;
        mn=2e6;
        for(k=i;k<j;k++){
          int now = dp[i][k]+dp[k+1][j]+(row[i]*column[k]*column[j]);
          mn=min(mn,now);
        }
        dp[i][j]=mn;
      }
    }

    printf("%d",dp[0][n-1]);
    return 0;
}
/*
3
5 10
10 20
20 35
*/

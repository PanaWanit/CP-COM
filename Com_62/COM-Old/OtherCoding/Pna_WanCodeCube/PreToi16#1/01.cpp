#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 7010;
char a[mxN][mxN];
int dp[mxN][mxN] , cnt[mxN];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int mn = min(n,m);
    for(int i=1;i<=n;i++){
      scanf("%s",a[i]+1);
    }
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if(a[i][j]=='0') continue;
        dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + 1;
        cnt[dp[i][j]]++;
      }
    }
    for(int i=mn;i>=2;i--){
      cnt[i-1] += cnt[i];
    }
    for(int i=1;i<=mn;i++){
      printf("%d\n",cnt[i]);
    }

    return 0;
}

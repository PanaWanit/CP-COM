#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[1010][1010];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r,c,ans=1;
  cin >> r >> c ;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
       char x;cin >> x;
       if(x == '.') dp[i][j] = min(dp[i][j-1],min(dp[i-1][j] , dp[i-1][j-1])) + 1,ans=max(dp[i][j],ans);
    }
  } 
  cout << ans;
  return 0;
}

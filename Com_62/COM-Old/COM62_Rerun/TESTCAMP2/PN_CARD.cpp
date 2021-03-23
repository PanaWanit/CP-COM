#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 5001;
ll dp[2][mxN] , a[mxN] , b[mxN];
void solve(){
   int n,m;
   cin >> n >> m;
   for(int i=1;i<=n;i++) cin >> a[i];
   for(int i=1;i<=m;i++) cin >> b[i];
   
   for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
         dp[i%2][j] = max(dp[(i+1)%2][j] , max(dp[i%2][j-1] , dp[(i+1)%2][j-1] + abs(a[i]-b[j])));
      }
   } 
   cout << dp[n%2][m] << "\n";
   memset(dp,0,sizeof dp); 
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t;for(cin >> t;t--;) solve();
   return 0;
}

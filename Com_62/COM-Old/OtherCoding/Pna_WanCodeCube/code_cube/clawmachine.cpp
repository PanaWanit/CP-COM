#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7 , mxN = 1e5+1;
int a[mxN];
ll dp[mxN][110]; // dp[i][j] choose 1->i in j pts
ll dpt[110];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,q;
   cin >> n >> q;
   dp[0][0] = 1;
   for(int i=1;i<=n;i++){
      cin >> a[i];
      for(int j=0;j<=100;j++){
         if(j - a[i] >= 0 ) dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i]];
         else dp[i][j] = dp[i-1][j];
      }
   }
   while(q--){
      int l,r,k;
      cin >> l >> r >> k;
      for(int i=0;i<=k;i++){
         dpt[i] = dp[r][i];
         for(int j=1;j<=i;j++) dpt[i] -= (dpt[i-j]*dp[l-1][j]) , dpt[i] = (dpt[i]+mod)%mod;
      }
      cout << dpt[k] << "\n";
   } 
   return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[33];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,k;
   cin >> n >> k;
   dp[0] = 1;
   for(int i=1;i<n;i++){
      dp[i] = 2*dp[i-1] + 1;
   } 
   ll ans = 0 ;
   for(int i=0; i<n; i++){   
      if( k & (1 << i) )
         ans += dp[i];
   }
   cout << ans;

   return 0;
}

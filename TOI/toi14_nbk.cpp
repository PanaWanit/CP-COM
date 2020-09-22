#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,q;
   cin >> n >> q;
   vector<int> dp(n+1,0);
   for(int i=1;i<=n;i++){
      cin >> dp[i];
      dp[i] += dp[i-1];
   }
   for(int i=n-1;i>=2;i--){
      dp[i-1] = min(dp[i-1],dp[i]);
   }
   while(q--){
      int x;cin >> x;
      int p = upper_bound(dp.begin() , dp.end(),x) - dp.begin();
      cout << p-1 << "\n";
   }
   return 0;
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN =1e5+1;
int dp[mxN];
void solve(){
   int n;
   cin >> n;
   for(int i=1;i<=n;i++){
      cin >> dp[i];
      dp[i] += dp[i-1];
   }
   vector<int> lis;
   for(int i=1;i<=n;i++){
      vector<int>::iterator it = upper_bound(lis.begin(),lis.end(),dp[i]);
      if(it != lis.end()) *it = dp[i];
      else lis.push_back(dp[i]);
   }
   cout << lis.size() << "\n";
}
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int q;
   for(cin >> q;q--;)
      solve();
   return 0;
}

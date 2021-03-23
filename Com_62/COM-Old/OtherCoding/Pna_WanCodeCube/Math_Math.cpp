#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll k;
  cin >> k;
  ll ans = 189ll * k * 3;
  cout << ans + 9ll << "\n";  
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout << setprecision(0) << fixed;
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

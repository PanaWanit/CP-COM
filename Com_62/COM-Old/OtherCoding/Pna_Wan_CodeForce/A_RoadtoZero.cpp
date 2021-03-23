/*
    TASK: Road to Zero
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll a,b,x,y,mn[2];
  cin >> x >> y >> a >> b;
  mn[0] = b*min(x,y)+a*abs(x-y);
  mn[1] = (x+y)*a;
  cout << min(mn[0],mn[1]) << "\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}

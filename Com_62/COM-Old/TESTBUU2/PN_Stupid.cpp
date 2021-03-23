/*
    TASK: PN_Stupid
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll a,b,l=0,r;
  bool ch=0;
  cin >> a >> b;
  r = a/2+1;
  while(l<r)i{
    ll mid = (l+r)/2;
    if( mid*(a-mid) == b ){
      ch=1; l = mid;
      break;
    }
    if(mid*(a-mid) < b ) l = mid+1;
    else r = mid;
  }
  if(ch) cout << l << " " <<  a-l << "\n";

  else cout << "No answer\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}

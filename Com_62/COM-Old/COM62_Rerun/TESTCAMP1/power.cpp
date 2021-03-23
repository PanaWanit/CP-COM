#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 5001;
int ans[mxN];
void solve(){
  int a,b;
  ans[mxN-1] = 1;
  cin >> a >> b;
  for(int i=0;i<b;i++){
     for(int j=mxN-1,tod=0;j>=0;j--){
        int x = (ans[j] * a)+ tod;
        ans[j] = x%10;
        tod = x/10;
     }
  }int st;
  for(st=0;st<mxN;st++) if(ans[st]) break;
  for(;st<mxN;st++) cout << ans[st];
  memset(ans,0,sizeof ans);
  cout << "\n";
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

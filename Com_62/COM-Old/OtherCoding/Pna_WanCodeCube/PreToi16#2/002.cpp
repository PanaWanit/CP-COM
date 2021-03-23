#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 1e5+10 , mod = 1e9+7;
int a[mxN];
ll dp[mxN]={1},inv[mxN]={1,1},dpinv[mxN]={1,1};
ll Cnr(int n,int r){
  ll ans = ((dp[n]*dpinv[r])%mod * dpinv[n-r])%mod;
  return ans;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,q;
  cin >> n >> q;
  for(int i=1;i<=n;i++) cin >> a[i];

  for(int i=1;i<=int(1e5);i++)
      dp[i] = (dp[i-1]*i)%mod;

  for(int i=2;i<=int(1e5);i++)
    inv[i] = (inv[mod%i]*(mod-mod/i))%mod;
  
  for(int i=2;i<=int(1e5);i++)
    dpinv[i] = (inv[i]*dpinv[i-1])%mod;
  
  
  while(q--){
    int l,r,k;
    cin >> l >> r >> k;
    if(r-l+1 == k) cout << "1\n";
    else if(r-l+1 < k) cout << "0\n";
    else{
      cout << Cnr(r-l+1,k) << "\n";
    }

  }
  return 0;
}

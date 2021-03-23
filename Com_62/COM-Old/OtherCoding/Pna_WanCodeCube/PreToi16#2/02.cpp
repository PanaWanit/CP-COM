#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7, mxN = 1e5+11 ;
ll a[mxN],l,r,k,b[mxN],n;
ll cnt=0;
void play(int state){
  if(state == r+1){
    int A =0;
    for(int i=l;i<=r;i++){
      if(b[i]==1) A+= a[i]; 
    }
    if(A == k) cnt++;
    return;
  }
  b[state] = 0;
  play(state+1);
  b[state] = 1;
  play(state+1);
  

}
ll dp[200101]={1,1};
void fac(){
  for(int i=1;i<=200100;i++){
    dp[i] = (dp[i-1]%mod*i%mod)%mod;
  }
  return ;
}
void combi(ll nn,ll rr){
    cnt = ((dp[nn]%mod)/((dp[rr]%mod*dp[nn-rr]%mod)%mod)%mod)%mod;
    cnt%=mod;
    return;    
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;
  bool ch=1;
  cin >> n >> q;
  for(int i=1;i<=n;i++){
     cin >> a[i];
     if(a[i]!=1) ch=0;
  }  
  if(ch == 0){
    while(q--){
    memset(b,0,sizeof b);
    cnt = 0;
    cin >> l >> r >> k; 
    play(l);
    cout << cnt << "\n";
    }
  }
  else{
    fac();
    while(q--){
      cnt = 0;
      cin >> l >> r >> k;
      if(r-l+1==k) cout << 1 << "\n";
      else if(r - l +1 > k) {
        combi(r-l+1,k);
        cout << cnt << "\n";
      }
      else cout << "0\n";
    }
  }
    return 0;
}

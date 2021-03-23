#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100100],qs[100100];
void solve(){
  int n,sum=0;
  cin >> n;
  for(int i=1;i<=n;i++) 
    cin >> a[i],qs[i] = a[i] + qs[i-1],sum+=a[i];
  if(sum%2) { cout << "NO\n";return;}
  sum/=2;
  for(int i=1;i<n;i++){
    if(qs[i] == qs[n] - qs[i]) {cout << i << "\n";return;}
  }
  for(int i=1;i<n;i++){
    int x = lower_bound(qs+1,qs+n+1,sum+qs[i-1]) - qs;
    if(qs[x] - qs[i-1] == sum) {cout << i-1 << " " << x << "\n";return;}    
  }
  cout << "NO\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;
  cin >> q;
  while(q--)
    solve();
  return 0;
}

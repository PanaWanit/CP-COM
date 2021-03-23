#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[200200];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,k,q;
  cin >> n >> k >> q;
  for(int i=1;i<=n;i++){
    cin >> a[i];
    if(a[i] > k) a[i] = 0;
  }
  while(q--){
    int l,r;
    cin >> l >> r;
    if(r-l+1 < k){
      cout << "NO\n";
      continue;
    }
    set<int> s;
    for(int i=l;i<=r;i++){
      if(a[i]==0) continue;
      s.insert(a[i]);
    }
    if(s.size()==k) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

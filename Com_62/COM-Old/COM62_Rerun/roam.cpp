#include<bits/stdc++.h>
#define ll long long
using namespace std;
int qs[100100],a[100100];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m;
  cin >> n >> m;
  while(m--){
    int aa,b;
    cin >> aa >> b;
    a[aa]++ , a[b+1]--;
  }
  for(int i=1;i<=n;i++) qs[i] = qs[i-1] + a[i];
  int q;
  cin >> q;
  while(q--){
    int x;cin >> x;
    cout << qs[x] << "\n";
  }
  return 0;
}

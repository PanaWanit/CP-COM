#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN =110;
int a[mxN],b[mxN];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m;
  cin >> n >> m;
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<m;i++) cin >> b[i];
  sort(a,a+n);
  sort(b,b+m);
  if(n==1 && m==1) cout << a[0]+b[0]+100;
  else if(n==1) cout << min(a[0]+b[0]+100 , b[0] + b[1]);
  else if(m==1) cout << min(a[0]+b[0]+100 , a[0] + a[1]);
  else cout << min(a[0] + b[0] + 100 , min(a[0] + a[1] , b[0] + b[1]));
  cout << "\n";
  return 0;
}
